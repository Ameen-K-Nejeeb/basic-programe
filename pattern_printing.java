
import java.util.Scanner;

public class pattern_printing {
    public static void main(String ar[]){

        Scanner n=new Scanner(System.in);        
        System.out.println("pattern print enter how much row you want :");

        int num=n.nextInt();

        for(int i=1;i<=num;i++){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }  
}
