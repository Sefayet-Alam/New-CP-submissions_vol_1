package CSE1203;

import java.util.function.Supplier;

class Calculator{
    static int s;
    public static int r=5;
    String d="sbg";
    public Calculator(){
        System.out.print("\nCalculator is called");
        r=0;
    }
    public Calculator(int k){
        r=k;
    }
    public static int add(int x,int y) {
    s=x+y;
    return s;
    }
    public static int add(int x,int y,int z) {
        s=x+y+z;
        return s;
    }
    public int sub(int x,int y) {
    s=x-y;
    return s;
    }
    public void display_r(){
        System.out.println(r);
    }
}
//static methods cant use super
class subclass extends Calculator{
    subclass(){
       // super();
        System.out.print("\nsubclass is called");
    }
    //void Display(){System.out.println(super.d);}
    //super
    //super(6);
}
public class test2 extends Calculator{
    public static void main(String[] args) {
        System.out.print("\nWelcome to test2\n");
       
        System.out.println(add(5,3));
        
        //subclass sub=new subclass();
        Calculator calc=new subclass();
        //sub.Display();

        //new Calculator().display_r();
       // new subclass().Display();
        
        System.out.println("\nTest 2 ends\n\n");
        }
}
