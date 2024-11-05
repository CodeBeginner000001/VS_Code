class Student1{
    String name;
    static String school;
    public static void changename(){
        school = "TIHS";
    }
    /*
     * Jab hamare pass same information hota hai saare data ka liye toh memory ko save karna ka liye 
     * hum usko static bana data hai kyu ki static ko memory one time allocate hoti hai and object ko memory,
     * bar bar allocate hoti hai. toh isliye hum uss info ko static bana data hai object ka replace ma
     * 
     */
}
public class StaticOOPs {
    public static void main(String args[]){
        Student1.school="JMV";
        Student1 s1 = new Student1();
        s1.name = "Rahul";
        System.out.println(s1.school);
    }
}
