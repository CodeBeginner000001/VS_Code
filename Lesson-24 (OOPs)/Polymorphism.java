class Student{
    String name;
    int age;
    /*This is polymorphism:  a method that can be called in different ways. it is made up of two word "poly"- many and
     "morph" - form. So, it is a method that can be called in many methods.
     It is two types
     -> function Overloading :  it is a function with the same name but different parameters.(Compile time polymorphism)
     -> function overriding : a derived class to provide a specific implementation of a base 
        class method with the same name and signature.(Runtime polymorphism).
     */

    // 1. This is function overloading
    public void printInfo(String  name){
        System.out.println(name);
    }
    public void printInfo(int age){
        System.out.println(age);
    }
    public void printInfo(String name,int age){
        System.out.println(name+" "+age);
    }
}

public class Polymorphism {
    public static void main(String args[])
    {
        Student s1 = new Student();

        s1.name = "Rahul";
        s1.age = 35;
        s1.printInfo(s1.age);
        s1.printInfo(s1.name,s1.age);
        s1.printInfo(s1.name);

    }

}
