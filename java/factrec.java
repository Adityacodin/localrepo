import java.util.Scanner;

class factrec{
    
    static int factorialOf(int i){
        if(i==1){
            return i;
        }

        return i*factorialOf(i-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int fact = factorialOf(n);
        System.out.println(fact);
        sc.close();
    }
}