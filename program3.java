import java.util.Scanner;

public class program3 {
    public static void main(String args[])
    {

        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String st = sc.next();
        StringBuffer sb1=new StringBuffer(st);
        StringBuffer sb2=new StringBuffer(" ");
        System.out.println("Capacity is: "+sb1.capacity());
        for(int i=sb1.length()-1,j=0;i>=0;i--,j++)
        sb2.insert(j,sb1.charAt(i));
        String st2=sb2.toString().toUpperCase();
        System.out.println("Reverse content is :"+sb2);
        System.out.println("Uppercase:"+st2);
        System.out.println("enter the String");
        sb2=new StringBuffer(st2);
        st=sc.next();
        sb2.append(st);
        System.out.println("Appended is: "+sb2);


    }
    
}
