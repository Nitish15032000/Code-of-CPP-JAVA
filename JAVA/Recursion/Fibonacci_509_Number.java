

/**
 * 509_Fibonacci_Number
 */
public class Fibonacci_509_Number {
    public static void main(String[] args) {
        int num = 7;
        int ans = fib(num);
        System.out.println(ans);
    }

    public static int fib(int n) {
        if(n<2){
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }   
}