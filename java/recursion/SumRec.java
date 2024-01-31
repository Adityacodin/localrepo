import java.util.Scanner;

class SumRec{
    
    static void sum(int k, int sum){
        if(k==0){
            System.out.println(sum);
            // System.exit(1);
        }
        sum(k-1,sum+k);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        sum(n,0);
        sc.close();
    }
}