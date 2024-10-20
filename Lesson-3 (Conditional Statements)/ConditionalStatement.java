import java.util.Scanner;
public class ConditionalStatement {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);

        
        /* Q1. Is Adult or not */
        // int age = sc.nextInt();
        // if(age>18)
        // {
        //     System.out.println("Adult");
        // }
        // else
        // {
        //     System.out.println("Minor");
        // }

        /* Q2. Is Even or not */
        // int x = sc.nextInt();
        // if(x%2==0){
        //     System.out.println("Even");
        // }
        // else{
        //     System.out.println("Odd");
        // }

        /* Q3. Check if a is greater than b or equal or small than b */
        // int a = sc.nextInt();
        // int b = sc.nextInt();
        // if(a == b){
        //     System.out.println("a is equal to b");
        // }else{
        //     if(a > b){
        //         System.out.println("a is greater than b");
        //     }else{
        //         System.out.println("a is smaller than b");
        //     }
        // }

        /* Q4. Print the greeting using nested if-else*/
        // int button = sc.nextInt();
        // if (button == 1)
        // {
        //     System.out.println("Hello");
        // }
        // else if(button == 2)
        // {
        //     System.out.println("Namaste");
        // }
        // else if(button == 3)
        // {
        //     System.out.println("Bonjour");
        // }
        // else
        // {
        //     System.out.println("Invalid Button");
        // }

        /* Q5. Print the greeting using switch case */
        int button = sc.nextInt();
        switch(button){
            case 1 -> System.out.println("Hello");
            case 2 -> System.out.println("Namaste");
            case 3 -> System.out.println("Bonjour");
            default -> System.out.println("Invalid Button"); 
        }
    }
}

