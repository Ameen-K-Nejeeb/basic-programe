import java.util.Scanner;

class IfStatement {
    public static void main(String ar[]) {
        System.out.println("Enter a number to check +ve, -ve, or zero:");

        Scanner s = new Scanner(System.in); // Scanner object

        int number = s.nextInt();

        if (number == 0) {
            System.out.println("Entered value is zero");
        } else if (number < 0) {
            System.out.println("Entered value is -ve");
        } else {
            System.out.println("Entered value is +ve");
        }

        s.close();
    }
}
