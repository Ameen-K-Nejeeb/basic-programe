public class pattern1 {
    
    public static void main(String arg[]){

        

        String[] array = {"A","B","C","D","E"};

        for(int i=0; i <= array.length;i++){
            for(int j=0;j<=i;j++){
                System.out.print(array[i]+" ");  
            }
            System.out.println("\n");
        }

    }

}
