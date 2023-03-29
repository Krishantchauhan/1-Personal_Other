public class Main {
    public static void main(String[] args) {

        Animal animal = new Animal("Genric Animal","Huge",500);
        doAnimalStuff(animal,"fast");

        Dog dog = new Dog();
        doAnimalStuff(dog,"fast");

        Dog yorki = new Dog("Yorki",15);
        doAnimalStuff(yorki,"fast");

        Dog retriever = new Dog("Labrador Retriever",65,"Floppy","Swimmer");
        doAnimalStuff(retriever,"slow");

        Dog wolf = new Dog("Wolf",40);
        doAnimalStuff(wolf,"slow");

        Fish goldy = new Fish("Goldfish",0.25,2,3);
        doAnimalStuff(goldy,"fast");

    }

    public static void doAnimalStuff(Animal animal,String speed){
        animal.makeNoise();
        animal.move(speed);
        System.out.println(animal);
        System.out.println("_ _ _ _");
    }
}
