import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner sc=new Scanner(System.in);

        int N= sc.nextInt();
        int M= sc.nextInt();

        long sum[]=new long[N+1];
        long s=0;
        long arr[]=new long[N];

        for(int i=0; i<N; i++) {
            arr[i] = sc.nextInt();
            s+=arr[i];
            sum[i+1]=s;
        }
        for(int i=0; i<M; i++){
            int j=sc.nextInt();
            int k=sc.nextInt();
            System.out.println(sum[k]-sum[j-1]);
        }
    }
}
