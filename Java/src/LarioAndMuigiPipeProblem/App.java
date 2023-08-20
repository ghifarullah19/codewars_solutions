package LarioAndMuigiPipeProblem;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        int[] arr = pipeFix(new int[] { 1, 2, 3, 5, 6, 8, 9 });
        for (int i : arr) {
            System.out.println(i);
        }
    }

    public static int[] pipeFix(int[] numbers) {
        int length = (numbers[numbers.length - 1] - numbers[0]) + 1;
        int[] arr = new int[length];
        int j = numbers[0];
        for (int i = 0; i < length; i++) {
            arr[i] = j++;
        }
        return arr;
    }
}