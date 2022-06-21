import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

        int N= Integer.parseInt(bf.readLine());
        String number=bf.readLine();
        int sum=0;

        for(int i=0; i<N; i++)
            sum+=number.charAt(i)-48;
        
        System.out.println(sum);

    }
}
