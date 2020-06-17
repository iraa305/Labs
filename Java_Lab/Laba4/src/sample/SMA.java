package sample;

import java.util.ArrayList;
import java.util.Iterator;

public class SMA {

    public static void main(String[] args) {}

    public static ArrayList<Double> calculate(ArrayList<Double> data, int window){
        ArrayList<Double> out = new ArrayList<Double>();

        Double[] array = data.toArray(new Double[data.size()]);
        //Считаем среднее
        for (int i = 0; i < array.length - window - 1; i++) {
            double value = array[i];

            for (int j = i + 1; j < i + window; j++)
                value += array[j];
            value /= window;

            out.add(val);
        }
        return out;
    }
}
