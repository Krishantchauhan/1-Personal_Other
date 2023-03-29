public class Customer {
    private int credit_limit;
    private String name;
    private String Email;


    public Customer() {
        this("No one", "no@emal.com");
    }

    public Customer(String name,String email){
        this(6900,"Siya","@KRish.com");
    }


    public Customer(int credit_limit, String name, String email) {
        this.credit_limit = credit_limit;
        this.name = name;
        Email = email;
    }

    public int getCredit_limit() {
        return credit_limit;
    }

    public String getName() {
        return name;
    }

    public String getEmail() {
        return Email;
    }


}
