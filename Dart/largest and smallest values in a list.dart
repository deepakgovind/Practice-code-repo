void main() { 
    
  // Creating a list of elements called mylist
  var mylist = [52, 76, 1, 778, 32, 6]; 
    
  // Declaring and assigning the largestvalue and smallesvalue variables
  var largestvalue = mylist[0]; 
  var smallesvalue = mylist[0]; 
  
  for (var i = 0; i < mylist.length; i++) 
  { 
      
    // Checking for largest value in the list 
    if (mylist[i] > largestvalue) { 
      largestvalue = mylist[i]; 
    } 
     
      
    // Checking for smallest value in the list 
    if (mylist[i] < smallesvalue) { 
      smallesvalue = mylist[i]; 
    } 
  } 
  
  
  // Printing the values 
  print("Smallest value in the list : $smallesvalue"); 
  print("Largest value in the list : $largestvalue"); 
}