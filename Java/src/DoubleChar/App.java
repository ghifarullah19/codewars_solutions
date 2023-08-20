package DoubleChar;

public class App {
    public static void main(String[] args) {
        System.out.println(doubleChar("Hello World!"));
    }

    public static String doubleChar(String s) {
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j <= i; j++) {
                result += s.charAt(i);
                result += s.charAt(j);
            }
        }
        return result;
    }
}