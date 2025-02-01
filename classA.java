public class classA extends classB {
    int a;
    void display(){
        System.out.println("class A");

        a=80;
        super.a=20;

        int sum=a+super.a;

        System.out.println("Result is :"+sum);

    }

    void hello(){
        super.display();
    }



    public static void main(String arg[]){

        classA bew=new classA();
        bew.display();
        bew.hello();
    }
}
