abstract class Animal{
    @SuppressWarnings("unused")
    abstract void walk();
    Animal(){
        System.out.println("Creating an Animal....");
    }
    public void eats(){
        System.out.println("Animal Eats....");
    }
}
@SuppressWarnings("unused")
class Horse extends Animal{
    Horse(){
        System.out.println("Created a Horse....");
    }
    @SuppressWarnings("override")
    public void walk(){
        System.out.println("Walk on 4 legs");
    }
}
@SuppressWarnings("unused")
class Hen extends Animal{
    @SuppressWarnings("override")
    public void walk(){
        System.out.println("Walks on 2 legs");
    }
}
// This use of constructor is called  constructor chaining
/*
 * Abstraction - mean ki ek concept hai jo exist karta hai and usko real ma lana ka required nhi hai 
 * Abstraction - Abstraction is a fundamental concept in object-oriented programming 
 *               that involves hiding complex implementation details and exposing only 
 *               the essential features of an object. It allows developers to interact 
 *               with objects at a higher level, simplifying code management and enhancing usability.
 * 
 */
public class Abstraction {
    public static void main(String args[])
    {
        Horse horse = new Horse();
        horse.walk();
        horse.eats();
        // Animal animal = new Animal();
        // animal.walk();
        /* the above two line will cause run time error */
    }
}
