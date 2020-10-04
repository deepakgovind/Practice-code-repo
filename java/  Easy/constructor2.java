
class Main {
  public static void main(String[] args) {
    // Create a new Person instance with "Kate Jones" as an argument
    Person person1 = new Person("Kate Jones");
    person1.hello();

    // Create a new Person instance with "John Christopher Smith" as an argument
    Person person2 = new Person("John Christopher Smith");
    person2.hello();
  }
}




//Person Class


class Person {
  public String name;

  // Allow the constructor to take a String type argument

  Person(String name) {

    System.out.println("Created an instance of the Person class.");
    // Set the instance field name using the value of the argument
    this.name = name;
    
  }

  public void hello() {
    System.out.println("Hello, my name is " + this.name + ".");
  }
}

