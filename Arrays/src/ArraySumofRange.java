import javax.swing.text.NumberFormatter;
import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Scanner;

public class ArraySumofRange {
    public static void main(String[] args) {

        Scanner ss = new Scanner(System.in);
        int testCase = ss.nextInt();
        //  DecimalFormat form = new DecimalFormat("0.000000");
        while (testCase-->0) {
            int n = ss.nextInt();
            int loweRange = ss.nextInt();
            int upperRange = ss.nextInt();
            int[] newZrray = new int[n];
            for (int i = 0; i < n; i++) {
                newZrray[i] = ss.nextInt();
            }

            int sum = 0;

            for (int i = loweRange; i <=upperRange; i++) {
                sum = sum + newZrray[i];
            }

            System.out.println(sum);
        }
    }
}
