package localRepo.java.oops;

class Calculator{
    public int Add(int num1, int num2){
        return num1+num2;
    }
    public int Minus(int num1,int num2){
        return num1-num2;
    }
    public int Prod(int num1,int num2){
        return num1*num2;
    }
    public int Mod(int num1, int num2){
        return num1%num2;
    }
    public int Div(int num1,int num2){
        return num1/num2;
    }
}


public class Main {
    public static void main(String[] args){
        Calculator calci = new Calculator();
        int sum = calci.Add(5,6);
        int diff = calci.Minus(34,2);
        int prod  = calci.Prod(34,2);
        int mod = calci.Mod(30,6);
        int div = calci.Div(45, 15);
        System.out.println(sum);
        System.out.println(diff);
        System.out.println(prod);
        System.out.println(mod);
        // System.out.println(prod);
        System.out.println(div);


    }
}

// object oriented programming
// object - will have its own properties and behaviour
// in order to create an object you need to first create a class.
// jvm creates the object in java using blueprint(class).