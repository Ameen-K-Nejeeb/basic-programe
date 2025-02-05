

public class pattern1 {
    
    public static void main(String arg[]){


        float  rows=5;



        for(float i=1;i<= rows ;i++){
            for(float j=1;j<= rows - i;j++){
                System.out.print(" ");
            }
            for(float k=1;k<=(2 * i -1);k++){
                System.out.print("*");
            }System.out.println();
        }
        

    }
}

