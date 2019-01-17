import java.util.Scanner;

/*
Find the element that appears once in an array where every other element appears twice
 */
public class SingleNumberbetterApproach {
    public static void main(String[] args) {
        Scanner ss=new Scanner(System.in);

        int n =ss.nextInt();
        int [] arr = new int[n];



            for (int i = 0 ; i<n;i++)
            {
                arr[i]=ss.nextInt();
            }
            int result = arr[0];
            for (int i = 1; i < n; i++) {
                result = result ^ arr[i];
            }
            System.out.println(result);


    }
}
