import matplotlib.pyplot as plt
import numpy
from collections import Counter


spam_data = {}


def parser_data():

    from_data = []

    with open('mbox.txt', 'r') as file:
        for line in file:
            count = str.find(line, "From:")

            if count == 0:
                buf = line.split(' ')
                buf = buf[1].split('\n')
                from_data.append(buf[0])

            Search = str.find(line, "X-DSPAM-Confidence:")

            if Search == 0 and spam_data.get(buf[0]) is None:
                buf_spam = line.split(' ')
                spam_data[buf[0]] = (float(buf_spam[1]))

            elif Search == 0 and spam_data.get(buf[0]) is not None:
                buf_spam = line.split(' ')
                buffer = spam_data.get(buf[0])
                spam_data[buf[0]] = (float(buf_spam[1])) + buffer
    return from_data, spam_data


def create_buf(from_data):

    buf = Counter(from_data)
    dict_buf = dict(buf)
    list_buf = list(buf)
    return dict_buf, list_buf


def parse_buf(dict_buf, list_buf):

    key, value, xspam = [], [], []
    for element in list_buf:
        key.append(element)
        value.append(dict_buf[element])
        xspam.append(spam_data[element] / dict_buf[element])
    return key, value, xspam


def graphs(key, value, spam):

    print(key, spam[1])
    plt.title('Количество писем')
    plt.bar(numpy.arange(len(key)), value, align='center')
    plt.xticks(numpy.arange(len(key)), key, rotation=90)
    plt.savefig("1.png", figsize=(10, 6))
    plt.show()

    plt.title('Средний показатель спама по каждому отправителю')
    plt.bar(numpy.arange(len(key)), spam, align='center')
    plt.xticks(numpy.arange(len(key)), key, rotation=90)
    plt.savefig("2.png", figsize=(10, 6))

    plt.show()


def main():
    from_data, xspam = parser_data()
    dict_buf, list_buf = create_buf(from_data)
    key, value, xspam = parse_buf(dict_buf, list_buf)
    graphs(key, value, xspam)


if __name__ == "__main__":
    main()
