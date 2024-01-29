import java.util.Scanner;

public class parameterisedREC {
    static int sumOf(int i){
        if(i==0){
            return 0;
        }
        return i+sumOf(i-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = sumOf(n);
        System.out.println(sum);
        sc.close();
    }
}