import java.util.Arrays;
import java.util.Scanner;

public class Arrays101 {
    public static void main(String[] args) {

        Scanner ss = new Scanner(System.in);


        int [] intArray = new int[6];
        for(int i = 0 ; i<intArray.length ; i++){
            intArray[i] = ss.nextInt();
        }
       /* intArray[0] = 20;
        intArray[1] = 50;
        intArray[2] = 40;
        intArray[3] = 30;
        intArray[4] = 10;
        intArray[5] = 70;
        intArray[6] = 29;*/
        Arrays.parallelSort(intArray);
        for(int i = 0 ; i< intArray.length;i++)
    {
        System.out.println(intArray[i]);

    }


}
}