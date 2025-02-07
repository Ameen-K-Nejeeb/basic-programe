
import java.util.Scanner;




public class pattern_11 {

    public static void main(String arg[]){

        //searching a value in array
        System.out.println("enter array limit :");

        @SuppressWarnings("resource")
        Scanner limi=new Scanner(System.in);
        int limit = limi.nextInt();   
        
        int array[]=new int[limit];
        
        System.out.println("Enter array values");
        
           

        for(int i=0;i<limit;i++){
             array[i] = limi.nextInt();
        }

        System.out.print("Entered value is :");
        for(int i=0;i<limit;i++){
            System.out.print(array[i]+",");
       }
        
       System.out.print("\n Pleace enter your search key :");

       Scanner scanner = new Scanner(System.in);
       int search = scanner.nextInt();
       int flag=0;

       for(int i=0;i<limit;i++){
            if(array[i]==search){
                System.out.print("search key found at position :"+(i+1)+"\n");
                flag =1;
                break;
            }
          }
          
          if(flag==0){
            System.out.println("search key not found !");
            

       }
       
        
        

       


    }
}
