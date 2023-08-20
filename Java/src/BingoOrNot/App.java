package BingoOrNot;

import java.util.Arrays;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        System.out.println(bingo(new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 }));
    }

    public static String bingo(int[] numberArray) {
        Arrays.sort(numberArray);
        String str = "";
        for (int i = 0; i < numberArray.length; i++) {
            if (!(numberArray[i] == 2
                    || numberArray[i] == 7
                    || numberArray[i] == 9
                    || numberArray[i] == 14
                    || numberArray[i] == 15)) {
                continue;
            } else {
                if (str.contains(String.valueOf(numberArray[i]))) {
                    continue;
                }
                str += String.valueOf(numberArray[i]);
            }
        }
        System.out.println(str);
        return str.equals("2791415") ? "WIN" : "LOSE";
    }
}