import java.util.Scanner;

public class Left_Rotate_ARRAY {
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int d=in.nextInt();
        int [] arr=new int [n];
        for(int i=0;i<n;i++) {
            arr[i] = in.nextInt();
        }// rotate left

        int temp=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];

        }
        arr[n-1]=temp;
        for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
    }// left rotate by d


}
