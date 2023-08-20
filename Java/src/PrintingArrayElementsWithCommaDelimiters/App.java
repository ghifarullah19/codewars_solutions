package PrintingArrayElementsWithCommaDelimiters;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        System.out.println(printArray(new Object[] { 2, 4, 5, 2 }));
    }

    public static String printArray(Object[] array) {
        String[] temp = new String[array.length];
        String result = "";
        for (int i = 0; i < array.length; i++) {
            if (i != array.length - 1) {
                temp[i] = String.valueOf(array[i]) + ",";
            } else {
                temp[i] = String.valueOf(array[i]);
            }
            result += temp[i];
        }
        return result;
    }
}