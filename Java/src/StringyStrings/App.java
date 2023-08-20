package StringyStrings;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        System.out.println(stringy(5));
    }

    public static String stringy(int size) {
        String result = "";
        for (int i = 1; i <= size; i++) {
            result += i % 2 == 1 ? "1" : "0";
        }
        return result;
    }
}