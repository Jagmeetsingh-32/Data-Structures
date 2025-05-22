import java.util.Arrays;

public class Merge_Sort {
    public static void split_arr(int arr[]){
        if(arr.length<=1){
            return;
        }
        int mid=arr.length/2;
        int[] left=Arrays.copyOfRange(arr,0,mid);
        int[] right=Arrays.copyOfRange(arr,mid, arr.length);
        split_arr(left);
        split_arr(right);
        merge(arr,left,right);
    }

    public static void merge( int arr[],int left[], int right[]){
        int i=0,j=0,k=0;
        while (i<left.length && j<right.length) {
            if(left[i]<right[j]){
                arr[k]=left[i];
                k++;
                i++;
            }
            else{
                arr[k]=right[j];
                k++;
                j++;
            }
        }
        
        while (i<left.length) {
            arr[k]=left[i];
            i++;k++;
        }

        while (j<right.length) {
            arr[k]=right[j];
            j++;k++;
        }
    }
    public static void main(String[] args) {
        int[] arr ={5,3,8,98,4,66,7,9};
        split_arr(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }

    }
}
