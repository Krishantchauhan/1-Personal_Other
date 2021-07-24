// package Practice;

import java.util.Scanner;

public class bubble {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int s;
        System.out.println("Enter the Size of an Array \n");
        s = sc.nextInt();

        int[] a = new int[10];
        System.out.println("Enter the Elements \n");

        for (int i = 0; i < s; i++) {
            a[i] = sc.nextInt();
        }

        for (int i = 0; i < s; i++) {
            for (int j = i + 1; j < s; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("The Sorted Elements are \n");


        for (int i = 0; i < s; i++) {
            System.out.print(a[i] + "  ");

        }

    }
}
