public class Car {

    private String brand="Tesla";
    private String color="Black";
    private int doors=2;
    private boolean convertible;

    // after this we can access the the private items
    //Getter
    public String getBrand(){
        return brand;
    }
    public String getcolor(){
        return color;
    }
    public int getdoors(){
        return doors;
    }

    //Setter
    public void setbrand(String brand){
        this.brand = brand;
    }

    public void setcolor(String color){
        this.color = color;
    }

    public void describeCar(){
        System.out.println(doors + "- Door " +
                            color + " " +
                            brand + " " +
                            (convertible ? "Convertiable" : ""));
    }

    
}
