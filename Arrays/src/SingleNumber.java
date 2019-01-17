import java.util.Scanner;

//Given an array of positive integers where every element appears twice times except for one.
// Find that number that occur odd number of times.
//Sample input 1st line test case, 2nd line no of elements ,3rd line elements
/*
2
5
1 1 2 2 2
7
8 8 7 7 6 6 1*/
public class SingleNumber {
    public static void main(String[] args) {
        Scanner ss = new Scanner(System.in);

        int n = ss.nextInt();
        int[] a = new int[n];


            int numo = 0;

            for (int i = 0; i < n; i++) {
                a[i] = ss.nextInt();
            }

            for (int i = 0; i < n; i++) {
                int count = 0;
                for (int j = 0; j < n; j++) {
                    if (a[i] == a[j]) {
                        count++;
                    }

                }
                if (count % 2 != 0) {
                    numo = a[i];
                }


            }
            System.out.println(numo);
            System.out.println();




    }
}
