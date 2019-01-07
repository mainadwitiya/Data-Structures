import java.util.Scanner;

public class Sorting103Insertion {

    public static void main(String[] args) {

        Scanner ss = new Scanner(System.in);
        int n;
        n = ss.nextInt();
        int [] intArray = new int [n];
        for( int i  = 0 ; i < intArray.length ; i++){
            intArray [i] =ss.nextInt();
        }
        // 20,35,-15,7,55,1,-22
        /*We shift instead of Swap
        We assume element at position 0 is sorted that's why we start at 1 and will go till the length of Array length
        and will grow it by 1.
        we save the value of element in the loop
         */
        for (int firstUnsortedIndex =1 ; firstUnsortedIndex < intArray.length ; firstUnsortedIndex++){

            int newElement = intArray[firstUnsortedIndex];

            int i ;
            /*
            traversal for sorted partition and will look for correct position
            start from firstUnsortedIndex and will continue to look for insertion positon
            and will search till head of array and the moment we hit the element which is less
            than or equal to element , we come out of the loop and insert , but if the new element is smaller
            then we shift and compare again
             */
            for ( i = firstUnsortedIndex ; i >0 &&  intArray[i-1]>newElement ;i--){
                // Shifting for each iteration
                intArray[i] = intArray[i-1];
            }
            //when we get the positon ,insert it
            intArray[i] = newElement;

        }
//loop to print the array
        for ( int i = 0 ; i< intArray.length ; i++){
            System.out.println(intArray[i]);

        }
    }
}
