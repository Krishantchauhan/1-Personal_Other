public class bank {
    
    private int ac_no;
    private int bal;
    private String name;

    public void setac_no(int ac_no){
         this.ac_no=ac_no;
    }
    public void setbal(int bal){
        this.bal=bal;
    }


    public void depositing(int depo_amt){
        bal += depo_amt;
        System.out.println("bal ="+bal);
    }

    public void withdrawing(int amt){
        if(bal-amt>0){
            bal-=amt;
            System.out.println("bal ="+bal);
        }
        else 
            System.out.println("You can't withdraw ="+bal);
    }

    public void disp(){
        System.out.println("bal ="+bal);
    }
    
}
