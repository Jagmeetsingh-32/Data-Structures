public class Selection_sort {
    public static void main(String[] args) {
        int[] arr={5,55,23,2,7,1,9};
        
        for(int i=0;i<arr.length-1;i++){
            int min=i;
            int j=i+1;
            for( ;j<arr.length;j++){
                if(arr[min]>arr[j])
                min=j;
            }
            arr[min] +=(arr[i]-(arr[i]=arr[min])); // Swaping the no..x+=(y-(y=x))
            //Another way by XOR  x= x^y^(y=x);

        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
