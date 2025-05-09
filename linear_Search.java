import java.util.Scanner;

public class linear_Search {
    public static void main(String[] args){
        int found=0;
        int[] arr={5,4,36,8,56,9,10,21,2};
        Scanner src=new Scanner(System.in);
        System.out.println("Enter the element to search: ");
        int ele=src.nextInt();
        for(int i=0;i<9;i++){
            if(ele==arr[i]){
                System.out.println("Element is found at position "+(i+1));
                found=1;
                break;
            }
        if(found==1){
            System.out.println("Element is not found in the array.");
        }
            
        }
    }
}