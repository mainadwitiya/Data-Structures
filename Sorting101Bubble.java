// COMPLEXITY IS BIG O of n^2
import java.util.Scanner;

public class Sorting101Bubble {
    public static void main(String[] args) {
        Scanner ss = new Scanner(System.in);
        int [] intAraay  = new int [10];
        for(int i = 0 ; i <intAraay.length ; i++){
            intAraay [i] =  ss.nextInt();
        }
        for(int lastUnsortedArray = intAraay.length-1 ; lastUnsortedArray>0 ;lastUnsortedArray--){
            for(int j =0 ; j < lastUnsortedArray ;j++){
               if(intAraay[j] > intAraay[j+1]) {
                   swap(intAraay,j,j+1);
			
		
               }
            }
        }
        for (int  i = 0 ; i < intAraay.length ; i++)
        {
            System.out.println(intAraay[i]);
        }

    }
    public static void swap( int[] array , int i ,int j){
        if(i==j){
            return;
        }
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
