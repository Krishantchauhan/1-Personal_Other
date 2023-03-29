public class Worker {
    String name;
    String dob;
    String endDate;




    public Worker(String name, String dob) {
        this.name = name;
        this.dob = dob;
    }

    public int getAge(){
        int currYear = 2023;
        int birthYear = Integer.parseInt(dob.substring(6));
        return (currYear-birthYear);
    }

    public double collectPay(){
        return 0.0;
    }

    public void terminate(String endDate){
        this.endDate = endDate;
    }

    @Override
    public String toString() {
        return "Worker{" +
                "name='" + name + '\'' +
                ", dob='" + dob + '\'' +
                ", endDate='" + endDate + '\'' +
                '}';
    }
}
