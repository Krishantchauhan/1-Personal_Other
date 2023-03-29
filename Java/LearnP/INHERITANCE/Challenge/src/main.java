public class main {
    public static void main(String[] args) {

        Employee krish = new Employee("Krish","20/08/2000","01/08/2019");
        System.out.println(krish);

        System.out.println("Age = " + krish.getAge());
        System.out.println("Pay = " + krish.collectPay());

        Employee Siya = new Employee("Siya","20/09/2003","01/09/2018");
        System.out.println(Siya);
    }
}
