import java.util.Scanner;

class Main{
  public static void main(String[] args ){
    System.out.print("First name:");
    Scanner name = new Scanner(System.in);
    String firstName = name.next();
    
    
    System.out.print("Last name:");
    Scanner lastname = new Scanner(System.in);
    String lastName = lastname.next();
    
    
    System.out.print("Age:");
    Scanner aage = new Scanner(System.in);
    int age = aage.nextInt();
    
    
    System.out.println("My name is " + firstName + " " + lastName + ".");
    System.out.println("I am" + age  + "years old.");
    
      if (age>=18){
        System.out.println("I am an adult.");
        
      }
      else{
        System.out.println("I am not an adult.");
      }
  }
}
