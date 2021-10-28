import java.util.Scanner;
public class a_instancess 	 {
    public static void main(String[] args) 
    {
    
        Scanner sc = new Scanner(System.in);

        a obj1 =new a();

        System.out.println("Enter Your name here:  ");
        String temp =sc.nextLine();

        obj1.setName(temp);
        obj1.saying();

        
    
    }
}

class a{
    private String girlName;

    public void setName(String name)
    {
        girlName=name;
    }
    public String getName()
    {
        return girlName;
    }
    public void saying()
    {
        System.out.printf("Your  name is  %s ",getName());
        
    }
}