package CSE1203;

import java.awt.Color;
import java.awt.Container;
import java.awt.Cursor;
import java.awt.Font;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.List;

import javax.swing.*;

class MyFrame extends JFrame {
    Container c;
    JButton btn1, btn2;
    JLabel label;

    public MyFrame() {
        c = this.getContentPane();
        c.setLayout(null);
        btn1 = new JButton("Submit");
        btn1.setBounds(100, 50, 100, 30);
        btn2 = new JButton("Cancel");
        btn2.setBounds(210, 50, 100, 30);
        label = new JLabel();
        label.setBounds(110, 110, 400, 30);
        label.setText("Output Displays here");
        btn1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                label.setText("Submit is pressed");
            }
        });

        JTextField text=new JTextField();
        text.setText("type here");
        text.setBounds(50,30,100,20);
        text.setForeground(Color.blue);
        text.setBackground(Color.cyan);
        text.setEditable(true);
        c.add(text);

        
        btn2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                label.setText("Cancel is pressed");
            }
        });
        c.add(btn1);
        c.add(btn2);
        c.add(label);
    }
}

public class First {
    public static void main(String[] args) {
        MyFrame frame = new MyFrame();
        frame.setBounds(200, 100, 400, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}