import java.util.Scanner;

public class ArraysInsDelSearch {
    public static void main(String[] args) {
        Scanner ss = new Scanner(System.in);
        System.out.println("Enter no of elements");
        int n =ss.nextInt();
        int [] inrArray = new int[n];
        System.out.println("Enter elements");
        //Scan elements
        for (int i=0;i<n;i++)
        {
           inrArray[i]= ss.nextInt();
        }
        System.out.println("Enter position and element to insert");
        int positiontoInsert=ss.nextInt();
        int element = ss.nextInt();

        for(int i=n;i<=positiontoInsert; i--)
        {
            inrArray[i+1]= inrArray[i];
        }
        inrArray[positiontoInsert]=element;

        for (int i=0;i<n;i++)
        {
            System.out.println(inrArray[i]);
        }

    }
}
