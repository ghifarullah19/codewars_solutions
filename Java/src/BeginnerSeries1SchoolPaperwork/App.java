package BeginnerSeries1SchoolPaperwork;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println(paperWork(5, 10));
    }

    public static int paperWork(int n, int m) {
        if (n < 0 || m < 0)
            return 0;

        return n * m;
    }
}
