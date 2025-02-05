public class threads {

    public static void main(String[] args) {
        samplethread st1=new samplethread(1);
        samplethread st2= new samplethread(2);
        samplethread st3 = new samplethread(3);

        st1.start();
        st2.start();
        st3.start();
    }
    
}
