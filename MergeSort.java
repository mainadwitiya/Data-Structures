public class MergeSort {
    public static void main(String[] args) {
        int [] arrayy ={20,30,1,2,55,-22,11,66,55};

        mergeSort(arrayy,0,arrayy.length);
        for(int i = 0 ; i<arrayy.length;i++)
        {
            System.out.println(arrayy[i]);
        }


    }


public static void mergeSort(int [] input,int start,int end)
{
    if(end-start<2)
    {
        return;
    }
    int mid = (start+end)/2;
    mergeSort(input,start,mid);
    mergeSort(input,mid,end);
    merge(input,start,mid,end);

}

public static void merge(int[] input , int start, int mid, int end)
{
    if(input[mid-1]<=input[mid])
    {
        return;
    }

    int i =start;
    int j=mid;
    int tempIndex=0;

    int [] temp = new int [end-start];
    while(i<mid && j<end)
       //equals in next line becuae of stable sort

    {
        temp[tempIndex++]= input[i] <= input[j] ?input[i++] :input[j++];
    }

        System.arraycopy(input,i,input,start+tempIndex,mid-i);
        System.arraycopy(temp,0,input,start,tempIndex);

}

}


