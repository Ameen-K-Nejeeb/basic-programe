
public class pattern_11 {

    public static void main(String arg[]){

        //searching a value in array

        int[] array = {10,20,30,40,50};

        int search = 30;

        int found = 0;

        for(int i=0;i<=array[i];i++){
            if(array[i]==search){
                System.out.print("Element found at position "+(i+1)+" \n");
                found =1;
                break;
            }
        }
        if(found == 0){
            System.out.print("Element not found !");
        }
        


    }
}
