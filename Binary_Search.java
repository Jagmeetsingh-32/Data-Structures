import java.util.Scanner;

public class Binary_Search {
    public static void main(String[] args) {
        int[] arr={2,3,6,8,12,15,23,55,98,102,133,145};
        int ub=arr.length,lb=0,mid=(lb+ub)/2,ele=0,found=0;
        Scanner src=new Scanner(System.in);
        System.out.println("Enter the element to be search in array: ");
        ele=src.nextInt();
        for(int i=0;i<arr.length-1;i++){
            if(ele==arr[mid]){
                System.out.println("The ele is found in the iteration: "+(i+1));
                found=1;
                break;
            }
            else if(ele>arr[mid]){
                lb=mid+1;
            }
            else if(ele<arr[mid]){
                ub=mid-1;
            }
            
            }
            mid=(ub+lb)/2;
            if(found==0){
                System.out.println("Element is not found");
            }
        }
    }

