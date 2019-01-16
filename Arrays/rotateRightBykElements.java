import java.util.Scanner;

public class rotateArray {
    public static void main(String[] args) {
        Scanner ss = new Scanner(System.in);
        int n=ss.nextInt();

        int[] intArray = new int[n];
        for(int i = 0 ; i<n;i++)
        {
            intArray[i]=ss.nextInt();
        }
        int kRotate = ss.nextInt();
        //RIGHT ROATION

        while(kRotate>0) {
            int temp=intArray[n-1];
            for (int i = n - 2; i >= 0; i--) {
                intArray[i+1]=intArray[i];
            }
            intArray[0]=temp;
            kRotate--;
        }
        for (int i = 0 ; i<n ;i++)
        {
            System.out.println(intArray[i]);
        }
    }
}
