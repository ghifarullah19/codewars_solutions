package CatAndShelves;

public class App {
    public static void main(String[] args) {
        System.out.println(solution(5, 10));
    }

    public static int solution(int a, int b) {
        return (b - a) / 3 + (b - a) % 3;
    }
}