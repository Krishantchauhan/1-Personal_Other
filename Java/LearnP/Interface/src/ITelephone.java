public interface ITelephone {
     void powerOn();
     void dial(int phoneNumber);
     void ans();
     boolean callPhone(int phoneNumber);
     boolean isRinging();
}

 class DeskPhone implements ITelephone{
    private int myNumber;
    private boolean isRinging;

     public DeskPhone(int myNumber) {
         this.myNumber = myNumber;
     }

     @Override
    public void powerOn() {
        System.out.println("No Power");
    }

    @Override
    public void dial(int phoneNumber) {
        System.out.println("Now ringing "+ phoneNumber);
    }

    @Override
    public void ans() {
        if(isRinging){
            System.out.println("Answering the desk phone");
            isRinging=false;
        }
    }

    @Override
    public boolean callPhone(int phoneNumber) {
        if(phoneNumber == myNumber){
            isRinging = true;
            System.out.println("Ring ring");
        }else
            isRinging = false;
        return isRinging;
    }

    @Override
    public boolean isRinging() {
        return isRinging;
    }
}