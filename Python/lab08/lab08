from math import sqrt
import random

x = []
y = []

def get_random_array():
    for i in range(100):
        x.append(random.uniform(-5, 5))
        y.append(random.uniform(-5, 5))

def belong_to_region(all_x, all_y, rad, main_x, main_y):
    distance = sqrt((all_x - main_x) ** 2 + (all_y - main_y) ** 2)
    if distance <= rad:
        return 1
    else:
        return 0

def chosen_point():
    choice = random.randint(0, 99)
    return choice

def amountOfPoints(rad, chosen):
    counter = 0
    get_random_array()
    for i in range(100):
        if belong_to_region(x[i], y[i], rad, x[chosen], y[chosen]) == 1:
            counter += 1
    return counter

radius = float(input("Введите радиус окрестности: "))
choice = chosen_point()
amount = amountOfPoints(radius, choice)
print("Кол-во точек в окрестности: ", amount)