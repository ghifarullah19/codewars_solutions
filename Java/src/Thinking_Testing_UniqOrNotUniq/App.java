package Thinking_Testing_UniqOrNotUniq;

import java.util.Arrays;
import java.util.HashSet;

/**
 * App
 */
public class App {

    public static void main(String[] args) {
        int[] a = { 1, 2, 3, 4 };
        int[] b = { 2, 3, 4, 5 };
        int[] res = testit(a, b);
        for (int i : res) {
            System.out.print(i + " ");
        }
    }

    public static int[] testit(int[] a, int[] b) {
        HashSet<Integer> setA = new HashSet<Integer>();
        HashSet<Integer> setB = new HashSet<Integer>();
        for (int i : a) {
            setA.add(i);
        }
        for (int j : b) {
            setB.add(j);
        }

        int[] res = new int[setA.size() + setB.size()];
        int l = 0;
        for (int k : setA) {
            res[l] = k;
            l++;
        }
        for (int k : setB) {
            res[l] = k;
            l++;
        }
        Arrays.sort(res);
        return res;
    }
}