class Shape{
    String color;

    // for single Inheritance ek function likha hai 
    public void area(){
        System.out.println("Display area");
    }

}

class Triangle extends Shape{
    public void area(int l,int h){
        System.out.println(1/2*l*h);
    }
}

// for multiple Inheritance
@SuppressWarnings("unused")
class EquilateralTriangle extends Triangle{
    @SuppressWarnings("override")
    public void area(int l,int h)
    {
        System.out.println(1/2*l*h);
    }
}

// for Hierarchial Inheritance
@SuppressWarnings("unused")
class Circle extends Shape{
    public void area(int r)
    {
        System.out.println(3.14*r*r);
    }
}
/* 
Inheritance - ka matlab hota hai  ki ek class dusre class ki properties ko inherit kar sakta hai. 
from class kis se properties li jati hai usse bolta hai base class ya fir parent class and 
class jo properties aquire karta hai ya fir lata hai usse bolta hai sub class ya fir child class.


iska 4 type hota hai 
->  Single Inheritance - yaha ek class ek hi class se inherit karta hai. isma 
          base class ---> derived class
->  Multiple Inheritance - yaha ek class do ya do se zyada class se inherit karta hai . isma 
          base class ---> derived class ---> derived class
->  Hierarchial Inheritance - yaha ek class ek se zyada class se inherit karta hai . isma
          base class ---> derived class
                   |----> derived class
->  
 */
public class Inheritance {
    public static void main(String args[])
    {
        Triangle t1 = new Triangle();
        t1.color = "Red";
        System.out.println(t1.color);
    }
}
