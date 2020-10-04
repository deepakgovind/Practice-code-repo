import java.util.*;

public class InsertionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no. of Elements: ");
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }
        System.out.print(insertionSort(a,n));
        sc.close();
    }
    static int[] insertionSort(int a[], int n){
        for(int i=1; i<=n-1; i++){
            int j=i-1; 
            int val = a[i];
            while(j>0 && a[j]>val){
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = val;
        }
        return a;
    }
}
