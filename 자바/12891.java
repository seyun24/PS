import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int checkArr[];
    static int arr[];
    static int checkCnt;
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer(br.readLine());
        int S= Integer.parseInt(st.nextToken());
        int P=Integer.parseInt(st.nextToken());

        int ans=0;

        checkArr =new int[4];
        arr =new int[4];
        checkCnt =0;

        String str=br.readLine();
        st=new StringTokenizer(br.readLine());

        for(int i=0; i<4; i++) {
            checkArr[i]=Integer.parseInt(st.nextToken());
            if (checkArr[i]==0) checkCnt++;
        }

        for(int i=0; i<P; i++) check(str.charAt(i));
        if (checkCnt ==4)ans++;
        int startIdx=0, endIdx=P-1;
        while (endIdx!=S-1){
            startIdx++;
            endIdx++;
            check(str.charAt(endIdx));
            slide(str.charAt(startIdx-1));
            if (checkCnt ==4)ans++;
        }
      

        System.out.println(ans);
    }
    static void check(char c){
        if(c=='A'){
            arr[0]++;
            if(arr[0]== checkArr[0])
                checkCnt++; 
        }else if(c=='C'){
            arr[1]++;
            if(arr[1]== checkArr[1])
                checkCnt++;
        }else if(c=='G'){
            arr[2]++;
            if(arr[2]== checkArr[2])
                checkCnt++;
        } else if (c == 'T') {
            arr[3]++;
            if(arr[3]== checkArr[3])
                checkCnt++;
        }
    }
    static void slide(char c) {
        if(c=='A'){
            if(arr[0]== checkArr[0])
                checkCnt--;
            arr[0]--;
        }else if(c=='C'){
            if(arr[1]== checkArr[1])
                checkCnt--;
            arr[1]--;
        }else if(c=='G'){
            if(arr[2]== checkArr[2])
                checkCnt--;
            arr[2]--;
        } else if (c == 'T') {
            if(arr[3]== checkArr[3])
                checkCnt--;
            arr[3]--;
        }
    }
}
