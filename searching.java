
import java.util.Scanner;






public class searching {

    public static void main(String arg[]){

      //programe to sorting

      System.err.println("enter array limit :");

    Scanner n=new Scanner(System.in);
    int limit=n.nextInt();

    int array[] = new int[limit];

    System.out.println("enter array values :");

    for (int i = 0; i < limit; i++) {
        array[i]=n.nextInt();
    }
    System.out.print("before sorting\n");
    for(int i=0;i<limit;i++){
        System.out.print(array[i]+",");
    }
    System.out.println("\n");





    for(int i=0;i<limit-1;i++){
        for(int j=i+1;j<limit;j++){
            if(array[i]>array[j]){
                int temp;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    System.out.print("\nater sorting :\n");

    for(int i=0;i<limit;i++){
        System.out.print(array[i]+",");
    }




    }
}
