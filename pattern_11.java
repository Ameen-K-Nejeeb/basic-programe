
public class pattern_11 {

    public static void main(String arg[]){

        
        int num=7;

        
        for(int i=1;i<=num;i++){
            for(int j=1;j<=num-i;j++){
                System.out.print(" ");
            }
            for(int j=1;j<=(2*i-1);j++){
                if(j==1 || j==(2*i-1) || i==num){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
                
            }System.out.print("\n");
        }
        


    }
}
