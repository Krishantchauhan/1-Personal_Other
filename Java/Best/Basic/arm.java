import java.util.Scanner;

public class arm {
    public static void main(String[] args) 
    {
    
        int a;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Number to check ArmStrong or Not \n");
        a=sc.nextInt();

        arml obj1 =new arml();
        obj1.armstrong(a);
    }
}

class arml{
    public void armstrong(int a)
    {
        int store=a;
        int sum=0;
        int temp=0;
        while(a>0){
            temp=a%10;
            // sum=sum+(temp*temp*temp);
            sum = sum + (int)Math.pow(temp,3);
            a/=10;
        }
        if(store==sum)
        {
            System.out.println("Armstrong");
        }
        else
        {
            System.out.println("Not Armstrong");
        }
        
    }
}