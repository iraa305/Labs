import org.apache.commons.cli.*;
import Poly.*;
import java.util.ArrayList;

public class Main {
    Options options = new Options();

    Option poly = new Option("p", "poly", true, "Введите значение полинома");

    public static void main(final String[] args) {
        final Main i = new Main();
        i.init_options();

        final Poly.Parser parser = new Poly.Parser();
        final Poly.Calc calc = new Poly.Calc();

        final ArrayList<Double> values = parser.parse(i.options, args);
        calc.calculate(values);
    }
    private void init_options(){
        poly.setRequired(true);
        options.addOption(poly);
    }
}