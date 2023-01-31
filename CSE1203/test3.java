package CSE1203;

//abstraction
abstract class Shape {
    String name = "Shape";

    public abstract void Display();
    public abstract int add(int x,int y);
}

class Circle extends Shape {
    String name = "Circle";

    public void Display() {
        System.out.println("in class " + name);
    }
    public  int add(int x,int y){
        return x+y;
    }
}
//class rectangle extends Shape,extends Circle-Error
abstract class rectangle extends Shape {
   // String name = "rectange";
   
    // public void Display() {

    //     System.out.println("in class " + name);
    // }
}

class rectangle2 extends rectangle {
   // String name = "rectange2";

    public void Display() {

        System.out.println("in class " + name);
    }
    public  int add(int x,int y){
        return x+y;
    }
}

interface FI {
    public void myMethod(); // interface method
}

interface SI {
    
    public void myOtherMethod(); // interface method
}

class DemoClass implements FI, SI {
    public void myMethod() {
        System.out.println("From FI");
    }

    public void myOtherMethod() {
        System.out.println("From SI");
    }
}

public class test3 {
    public static void main(String[] args) {
        Circle c = new Circle();
       rectangle2 r=new rectangle2();
       r.Display();
       // c.Display();


    //     DemoClass myObj = new DemoClass();
    // myObj.myMethod();
    //myObj.myOtherMethod();
    }
}
