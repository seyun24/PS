import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer(br.readLine());
        int N= Integer.parseInt(st.nextToken());
        int M=Integer.parseInt(st.nextToken());
        long sum=0;
        long cnt[]=new long[M];
        long ans;
        st=new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++){
            sum+=Integer.parseInt(st.nextToken());
            cnt[(int)(sum%M)]++;
        }
        ans=cnt[0];
        for(int i=0; i<M;i++)
            ans+=cnt[i]*(cnt[i]-1)/2;


        System.out.println(ans);
    }
}
