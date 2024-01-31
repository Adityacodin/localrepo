import java.util.Scanner;

class fibo{

    static int nthFibo(int n){
        if(n<=1){
            return n;
        }
        int last = nthFibo(n-1);
        int slast = nthFibo(n-2);

        return last+slast;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(nthFibo(n));
        sc.close();
    }
}