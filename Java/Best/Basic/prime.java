import java.util.Scanner;

public class prime 	 {
    public static void main(String[] args) 
    {
    
        Scanner sc = new Scanner(System.in);

        int a;

        System.out.println("Enter the Number to check Number is Even or odd");
        a=sc.nextInt();

        check obj1 = new check();

        obj1.primeNo(a);
        

    
    }
}

class check{
    public void primeNo(int a)
    {
        for(int i=2;i<=a;i++)
        {
            if(a%i==0)
            {
                System.out.println("Number is not Prime");
                break;
            }
            else
            {
                System.out.printf("Number %d is Prime \n",a);
                break;
            }    
        }
    }
}