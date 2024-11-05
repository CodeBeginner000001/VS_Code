// package bank;
/*
 * Access Modifiers are of 4 types and in c++ we have 3 types of access modifiers
 * -> Public - which is accessed by everyone
 * -> default - already defined
 * -> private - which is only accessible to it's class only even it's subclass can't access it
 * -> protected - which is it can be accessed in its package and only subclass can use it which the package is imported.
 */
class Account{
    public String name; // public
    @SuppressWarnings("unused")
    int age ; // default
    protected String email; // protected
    private  String password; // private

    // To access private things in class we have getters and setters
    /*
     * Getters - give the value of the private things in the class.
     * Setters - set the value of the private things in the class.
     */

     public String getpassword(){
        return this.password;
     }

     public void setPassword(String pass){
        this.password = pass;
     }
}

public class bank {
    public static void main(String args[])
    {
       Account ac1 = new Account();
       ac1.name = "Rahul";
       ac1.age = 25;
       ac1.email = "rahul@gmail.com";
       //ac1.password = "rahul123"; // error
       ac1.setPassword("dbc");
       System.out.println(ac1.getpassword());
    }
}

