package sample;

import javafx.application.Application;
import javafx.stage.Stage;
import java.util.Random;
import java.util.ArrayList;

public class Main extends Application {

    @Override public void start(Stage stage) {

        int length = 55;
        ArrayList<Double> x = new ArrayList<Double>();
        generate_data(x, length);

        ArrayList<Double> x_sma = SMA.calculate(x, 5);
        stage.setScene(Graph.draw(x, x_sma));
        stage.setTitle("Диаграмма");
        stage.show();
    }

    private static void generate_data(ArrayList<Double> array, int len){
        Random rand = new Random(); //Генерируем данные
        for (int i = 0; i < len; i++)
            array.add(rand.nextDouble());
    }

    public static void main(String[] args) {
        launch(args);
    }
}