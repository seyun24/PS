import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;


public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N= Integer.parseInt(br.readLine());


        long arr[]=new long[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++)
            arr[i] = Integer.parseInt(st.nextToken());

        Arrays.sort(arr);
        int count=0;
        for(int k=0; k<N; k++ ){
            int i=0, j=N-1;
            while(i<j){
                long sum=arr[i]+arr[j];
                if(sum==arr[k]) {
                    if(i!=k&&j!=k) {
                        count++;
                        break;
                    }else if (i == k)
                        i++;
                    else if (j == k)
                        j--;
                }
                else if(sum<arr[k])i++;
                else j--;
            }
        }
        System.out.println(count);
    }
}
