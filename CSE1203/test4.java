// package CSE1203;
// //swing and gui

// import javax.swing.JFrame;
// import javax.swing.*;

// public class test4 {
//     JFrame frame;

//     test4()
//     {
//         frame=new JFrame("first way");
//     // setting close operation
//     frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 
//     // sets 500 width and 600 height
//     frame.setSize(500, 600);

//     // makes the frame visible
//     frame.setVisible(true); 
//     }

//     public static void main(String[] args) {
//         new test4(); // anonymous object
//         // First f=new First() is similar
//     }
// }

///way 2
// package CSE1203;
// import javax.swing.*;

// public class test4 extends JFrame {

// test4()
//     {
//         setTitle("this is also a title");
// // setting close operation
//   setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 
//         setSize(400, 500);
//         setVisible(true);
//     }   
//     public static void main(String[] args)
//     {
//         test4 f=new test4() ;//is similar
//     }
// }

package CSE1203;
import javax.swing.JFrame;

import java.awt.*;

import javax.swing.*;
public class test4 {
public static void main(String[] args) {
JFrame frame=new JFrame("CSE 1203");
frame.setSize(600,400);
frame.setResizable(false);

frame.setLocation(400,100);
//frame.setBounds(200,100,200,300);
frame.setVisible(true);
frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
Container c=frame.getContentPane();
c.setBackground(Color.white);
Font font=new Font("Arial",Font.PLAIN,12);

JLabel label=new JLabel("Username:");
        //label.setText(“User Name:”); 
        label.setBounds(50,70,100,30);
        c.add(label);

     label.setFont(font);

//create color object
//Color color=new Color(255,0,0)
//c.setBackground(color);


    ImageIcon icon=new ImageIcon("C:\\Users\\ASUS\\OneDrive\\Desktop\\sasuke.png");
        JLabel label2=new JLabel("Apple",icon,JLabel.LEFT);
        label2.setBounds(50,70,500,200);
        c.add(label2);
        frame.setVisible(true);
 }
}