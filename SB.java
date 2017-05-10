import java.util.*;
import java.lang.*;
class A 
{
    public static void main(String[] args)
    {
        StringBuffer Name1=new StringBuffer();
        Scanner in=new Scanner(System.in);
        System.out.println("Enter a string: ");
        Name1.append(in.nextLine());
        System.out.println("Your name is: " + Name1);
    }
}