import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        int M=sc.nextInt();

        int arr[]=new int[N];

        for(int i=0; i<N; i++) 
            arr[i] = sc.nextInt();
        
        Arrays.sort(arr);

        int i=0, j=N-1, count=0;

        while (i<j){
            int sum=arr[i]+arr[j];
            if(sum>M)j--;
            else if(sum<M)i++;
            else{
                i++; j--; count++;
            }
        }
        System.out.println(count);
    }
}
