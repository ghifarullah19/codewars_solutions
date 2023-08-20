package WelcomeToTheCity;

public class App {
    public static void main(String[] args) {
        App app = new App();
        System.out.println(app.sayHello(new String[] { "John", "Wick" }, "Phoenix", "Arizona"));
    }

    public String sayHello(String[] name, String city, String state) {
        // code here
        String str = "";
        String c = city;
        String s = state;
        for (String string : name) {
            str += string;
        }
        str = str.replaceAll("\\d+", "").replaceAll("(.)([A-Z])", "$1 $2");
        return String.format("Hello, %s! Welcome to %s, %s!", str, c, s);
    }
}