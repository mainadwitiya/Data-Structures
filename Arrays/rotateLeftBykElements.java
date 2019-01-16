import java.util.Scanner;

public class rotateArrayLeft {
    public static void main(String[] args) {
        Scanner ss = new Scanner(System.in);
        int n=ss.nextInt();

        int[] intArray = new int[n];
        for(int i = 0 ; i<n;i++)
        {
            intArray[i]=ss.nextInt();
        }
        int kRotate = ss.nextInt();

        while(kRotate>0)
        {
            int temp=intArray[0];
            for(int i=0;i<=n-2;i++){
                intArray[i]=intArray[i+1];
            }
            intArray[n-1]=temp;
            kRotate--;
        }
        for(int i = 0 ; i< n ; i++)
        {
            System.out.println(intArray[i]);
        }
    }
}
