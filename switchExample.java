import java.util.Scanner;

public class switchExample {
    public  static void main(String agr[]){
        System.out.println("the number to 1 to 7 display corresponding day");
        Scanner s=new Scanner(System.in);

        int value=s.nextInt();

        switch (value) {
            case 1:System.out.println("monday");
            break;
            case 2:System.out.println("tuesday");
            break;
            case 3:System.out.println("wednesday");
            break;
            case 4:System.out.println("thusday");
            break;
            case 5:System.out.println("friday");
            break;
            case 6:System.out.println("saturday");
            break;
            case 7:System.out.println("sunday");
            break;
            default:System.out.println("not a number enter No 1 to 7 !");
            break;
        }
     s.close();   
    }
}