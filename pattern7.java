

public class pattern7 {
    
    public static void main(String arg[]){

       int num=5;
        
        for(int i=1;i<=num;i++){
            
            for(int j=i;j<=num;j++){
                System.out.print(" ");
            }
            for(int k=i;k<=(i*2-1);k++){
                System.out.print(k+" ");
            }
            System.out.print("");
            for(int k=(2*i-2);k>=i;k--){
                System.out.print(k+" ");
            }
            System.out.print("\n");
        }
        

    }
}

