package PrinterErrors;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        System.out.println(printerError("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz"));
    }

    public static String printerError(String s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) > 109)
                count++;
        }
        return count + "/" + s.length();
    }
}