public class samplethread extends Thread {

    int a;
    

    public samplethread(int a) {
        this.a=a;
    }
    @Override
    public void run() {
        super.run();

        for(int i=0;i<10;i++){
            System.out.println("count"+i+"threads"+a);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
            }
    }
    

    
    }

}
