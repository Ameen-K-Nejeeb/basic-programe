

public class pattern {

    public static void main(String arg[]){

        
        int num=7;

        
        for(int i=0;i<=num;i++){
            for(int j=1;j<=i;j++){
                System.out.print(" ");
            }
            for(int k=i;k<=num;k++){
                System.out.print("*");
            }
            System.err.print(" \n");
        }


    }
}
