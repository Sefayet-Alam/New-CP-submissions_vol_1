package CSE1203;

import java.util.*;

import CSE1203.test.newno2;

import java.awt.*;

public class test {
    //nested class
    public class newno2{
        private int y;
        public newno2() {
        }
        public newno2(int y) {
        this.y=y;
         }
    public static int[] getNumber() {
    return new int[] { 1, 2, 3, 4, 5 };// anonymous object
    }
    }

    public static void main(String[] args) {

        test2.main(null);

        Scanner input = new Scanner(System.in);
        String a = input.next();
        System.out.print(a + "\ninput 10 integers\n\n");
        int arr[] = new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i] = input.nextInt();
        }
        System.out.println("Input array:");
        Display(arr);

        newno obj = new newno();
        System.out.println("New array:");
        int newarray[] = obj.getNumber();

        Display(newarray);
        //using nested class's method
        newno2 obj2 = new test().new newno2();
        System.out.println("New array:");
        int newarray2[] = obj2.getNumber();

        Display(newarray2);

        Arrays.sort(newarray);
        System.out.println("after sort:");
        Display(newarray);

        int p = 5;
        System.out.println("position of " + p + ": " + Arrays.binarySearch(newarray, p));

        Arrays.fill(newarray, 5);
        System.out.println("after fill:");
        Display(newarray);

        int[][] array2D = new int[5][3];
        //use of arraylist
        ArrayList<String> fruits = new ArrayList<>();
        fruits.add("Apple");// insert at back
        fruits.add("Mango");// insert at back
        fruits.add("Orange");// insert at back
        System.out.println(fruits);
        fruits.add(0, "Banana");// insert at index 0
        System.out.println(fruits);
        System.out.println(fruits.get(0)); // get element of index 0
        fruits.set(1, "Guava"); // change value at index 1
        System.out.println(fruits);
        fruits.remove(2); // delete value at index 2
        System.out.println(fruits);
        fruits.remove("Orange"); // delete by value
        System.out.println(fruits.toString()); // same
        System.out.println(fruits.size()); // Totalelements
        fruits.sort(null); // sort elements
        Collections.sort(fruits); // Alternative sort
        fruits.clear(); // delete all elements
        System.out.println(fruits);

    }

    protected static void Display(int arr[]) {

        for (int it : arr) {
            System.out.print(it + " ");
        }
    }

}
//there can be only one public class in a file
class newno {
    public static int[] getNumber() {
       
        System.out.println("calling getNumber function of newno");
        return new int[] { 5, 4, 3, 2, 1 };// anonymous array object
    }
}