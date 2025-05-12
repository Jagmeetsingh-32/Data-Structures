import java.util.ArrayList;

public class Quick_Sort {
    public static void quicksort(int[] arr,int start,int end){
        if(start>=end){
            return;
        }
        int pivot=partition(arr,start,end);
        quicksort(arr, start, pivot-1);
        quicksort(arr, pivot+1, end);
    }

public static int partition(int[] arr,int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            arr[i]=arr[i]^arr[j]^(arr[j]=arr[i]);
        }

    }
    arr[i+1]=(arr[i+1]^arr[end]^(arr[end]=arr[i+1]));
    return i+1;
}
    public static void main(String[] args) {
        int[] arr={9,8,4,12,52,6,98};
        quicksort(arr,0,arr.length-1);
        for(int i=0;i<arr.length;i++){
            System.out.println(" "+arr[i]);
        }
    }
}
