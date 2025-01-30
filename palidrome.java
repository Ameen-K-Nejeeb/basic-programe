import java.util.Scanner;

public class palidrome {
    public static void main(String ar[]){
        System.out.println("enter 3 number to check it is palidrome or not");

        Scanner scanner=new Scanner(System.in);
        
        int number=scanner.nextInt();

        int n=number;
        int digit=0,rev=0;

        if(number<0){
            System.out.println("it is not palidrome");
        }
        while(number>0){
            digit = number % 10;
            rev = (rev*10)+digit;
            number = number / 10;
        }
        System.out.println("reverce :"+rev);

        if(rev==n){
            System.out.println("the number is palidrome");
        }else{
            System.out.println("the number is not palidrome");
        }

    }
}
