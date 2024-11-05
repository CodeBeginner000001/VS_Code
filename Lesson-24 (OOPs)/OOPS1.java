// import java.util.*;
// import bank;
@SuppressWarnings("unused")
class Pen{
    String color;
    String type;

    public void write()
    {
        System.out.println("Write something");
    }

    public void peninfo()
    {
        System.out.println(this.color);
        System.out.println(this.type);
    }
}
class Student{
    String name ;
    int age;

    public void studentInfo()
    {
        System.out.println(this.name);
        System.out.println(this.age);
    }
    // non parametric constructor
    // Student()
    // {
    //     System.out.println("Constructor is called");
    // }

    // Parametric constructor
    // Student(String name, int age){
    //     this.name = name;
    //     this.age = age;
    // }

    // copy constructors
    Student(Student s2)
    {
        this.name = s2.name;
        this.age  = s2.age;
    }
    Student()
    {

    }

}

public class OOPS1{
    public static void main(String args[])
    {
        // Pen pen1 = new Pen();
        // pen1.color = "Blue";
        // pen1.type = "gel";

        // // calling a funtion aur method
        // pen1.write();

        // Pen pen2 = new Pen();
        // pen2.color = "Black";
        // pen2.type = "Ballpoint";

        // // using this - a keyword , this tells ki iss function ko kis object se call karna hai
        // pen1.peninfo();
        // pen2.peninfo();

        // Student s1 = new Student();
        // s1.name = "Rahul";
        // s1.age = 35;


        // for non parametric constructor
        // Student s1 = new Student();
        // s1.name = "Rahul";
        // s1.age = 35;
        // s1.studentInfo();


        // for parametric constructor
        // Student s1 = new Student("Rahul",24);
        // s1.studentInfo();


        Student s1 = new Student();
        s1.name = "Rahul";
        s1.age = 24;

        Student s2 = new Student(s1);
        s2.studentInfo();

        /* Accessing outside package class */
        // bank.Account account1 = new bank.Account();
        // account1.name = "Customer1";
    }
}