public class main {
    public static void main(String[] args) {
        Customer ob1 = new Customer(5000,"Krish","@Siya.com");
        System.out.println(ob1.getCredit_limit());
        System.out.println(ob1.getEmail());
        System.out.println(ob1.getName());

        Customer obj2= new Customer();
        System.out.println(obj2.getCredit_limit());
        System.out.println(obj2.getEmail());
        System.out.println(obj2.getName());

    }
}

