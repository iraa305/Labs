package graph;

import javafx.scene.Scene;
import javafx.scene.chart.BarChart;
import javafx.scene.chart.CategoryAxis;
import javafx.scene.chart.NumberAxis;
import javafx.scene.chart.XYChart;

import java.util.ArrayList;
import java.util.Iterator;

public class Graph {

    public static void main(String[] args) {}

    public static Scene draw(ArrayList<Integer> value, ArrayList<String> email){
        final CategoryAxis X = new CategoryAxis();
        final NumberAxis Y = new NumberAxis();
        final BarChart<String,Number> lineChart = new BarChart<String, Number>(X,Y);

        XYChart.Series series = new XYChart.Series();

        Iterator<Integer> in_value = value.iterator();
        Iterator<String> in_email = email.iterator();

        int i = 0;
        while(foreach_value.hasNext() && foreach_email.hasNext()) {
            series.getData().add(new XYChart.Data(in_email.next(), in_value.next()));
            i++;
        }

        Scene scene  = new Scene(lineChart,700,500);
        lineChart.getData().add(series);

        return scene;
    }
}
