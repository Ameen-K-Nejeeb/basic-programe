
import java.util.Scanner;

public class prime_or_not {
    public static void main(String arg[]){
        System.out.println("check weather it is prime or not :");
        Scanner reg=new Scanner(System.in);

        boolean isprime = true;

        int num1=reg.nextInt();

        if(num1<0){
            isprime = false;
        }else{
            for(int i=0;i<num1-1;i++){
                if(num1 % 2 == 0){
                    isprime = false;
                }
            }
        }

        if(isprime){
            System.out.println("entered number is prime");
        }else{
            System.out.println("entered number is not prime");
        }

        




        reg.close();
    }   
}
