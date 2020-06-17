package sample;

import javafx.scene.Scene;
import javafx.scene.chart.LineChart;
import javafx.scene.chart.NumberAxis;
import javafx.scene.chart.XYChart;

import java.util.ArrayList;
import java.util.Iterator;

public class Graph {

    public static void main(String[] args) {}

    public static Scene draw(ArrayList<Double> x, ArrayList<Double> x_sma){

        final NumberAxis xAxis = new NumberAxis();
        final NumberAxis yAxis = new NumberAxis();

        final LineChart<Number,Number> lineChart =
                new LineChart<Number,Number>(xAxis,yAxis);

        lineChart.setTitle("Данные sma");
        XYChart.Series series = new XYChart.Series();
        series.setName("Wit SMA");
        XYChart.Series series1 = new XYChart.Series();
        series1.setName("With SMA");

        Iterator<Double> to_each_x = x.iterator();
        Iterator<Double> foreach_x_sma = x_sma.iterator();
        //Рисуем график по данным
        int i = 0;
        while(foreach_x.hasNext()) {
            series.getData().add(new XYChart.Data(i, to_each_x.next()));
            i++;
        }
        i = x.size() - x_filt.size();
        while(foreach_x_filt.hasNext()) {
            series1.getData().add(new XYChart.Data(i, foreach_x_sma.next()));
            i++;
        }
        Scene scene  = new Scene(lineChart,700,500);
        lineChart.getData().add(series);
        lineChart.getData().add(series1);

        return scene;
    }
}