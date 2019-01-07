//SELECTION SORT
import java.util.Scanner;

public class Sort102Selection {
    public static void main(String[] args) {
        Scanner ss  = new Scanner(System.in);
        int n = ss.nextInt();
        int [] intAraay  = new int [n];
        for(int i = 0 ; i < intAraay.length ; i++){
            intAraay [i] =  ss.nextInt();
        }
        for (int lastUnsortedIndex = intAraay.length-1 ; lastUnsortedIndex > 0 ; lastUnsortedIndex--){
            // 10 20 25 40 22
            int largest =0;
            for (int j = 1 ; j <= lastUnsortedIndex; j++)
            {
                if(intAraay[j] > intAraay[largest])
                {
                    largest=j;
                }
            }
            swap(intAraay,largest,lastUnsortedIndex);
            }

        for (int i = 0 ;i<intAraay.length;i++){
            System.out.println(intAraay[i]);
        }
    }
    public  static void swap(int [] array , int i , int j){
        if(i==j){
            return;
        }


        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}

