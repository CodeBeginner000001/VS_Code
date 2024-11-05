/*
 * Interfaces ma constructor nhi ho skta hai
 * Interfaces ko implement karta hai 
 * Interface ma value fix and static rahegi and publically accessable rahegi by default
 * Interface ma methods or functions by default public hota hai.
 * 
 */
interface Animal1{
    int eyes = 2;
    void walk();
}
// multiple inheritence
interface Carnivorse{
    
}
class Shark implements Animal1,Carnivorse{
    @SuppressWarnings("override")
    public void walk(){
        System.out.println("Don't  walk, swim");
    }
}
public class Interface {
    public static void main(String args[])
    {
        Shark s1 = new Shark();
        s1.walk();   // Don't  walk, swim
    }
}

