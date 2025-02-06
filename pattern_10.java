

public class pattern_10 {

    public static void main(String arg[]){

        
        int num=5;

        
        for(int i=0;i<=num;i++){
            for(int j=i;j<=num;j++){
                System.out.print(" ");
            }
            for(int k=1;k<=i*2-1;k++){
                System.out.print("*");
            }System.out.print("\n");
        }

        for(int i=0;i<=num;i++){
            for(int j=0;j<=i;j++){
                System.out.print(" ");
            }
            for(int k=i*2;k<=num*2-2;k++){
                System.out.print("*");
            }System.out.print("\n");
        }
        


    }
}
