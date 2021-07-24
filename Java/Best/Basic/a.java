import java.util.Scanner;

public class a {

    public static void main(String[] args) 
    {
    
        int a=5;
        int b=3;
        int sum=0;
        sum=(int)Math.pow(a, b);

        System.out.println("the cube is = "+sum);

        System.out.println("Enter the Power \n");
        Scanner sc =new Scanner(System.in);
        int power =sc.nextInt();

        int check=0;
        check=(int)Math.pow(a,power);
        
        System.out.println("The Number is Now "+check);
        
        
    
    }
    
}
