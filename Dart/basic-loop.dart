void main() {
  
  var loop = 10;
  List<int> listLoop = [1,2,3,4,5];
  
  /* 
   * Definite loop
   * 
   * */
  
  // For loop
  // Doing definite number of loop for a spesific number of times.
  
  print('[ For Loop ]\n');
  
  // Iterate from 0 to less than loop = 10 
  for (int i = 0; i < loop; i++) {
    print('For loop ${i + 1}');
  }
  print('\n');
  
  // Iterate through item in list of object
  for (var i in listLoop){
    print('For loop by item in listLoop $i');
  }
  print('\n');
  
  /* 
   * Indefinite loop
   * 
   * */
  
  // While Loop
  // Doing indefinite number of loop until spesific condition evaluate to true
   
  print('[ While Loop ]\n');
  
  // Iterate check the condition first and then execute the code inside iteration
  var index = 0;
  while(index<loop){
    print('While loop ${index+1}');
    index++;
  }
  print('\n');
  
  // Run the code inside iteration and then check the condition after that
  index = 0;
  do{
    print('Do while loop $index');
    index++;
  }while(index<loop);
  
  
  // Continue and break
  // Continue loop to next loop and not executing the next line of code inside loop when the condition meets
  print('[ Continue ]\n');
  
  outerloop: // This is label name
  for(int i = 0; i<loop; i++){
    print('Outter loop $i');
    innerloop: // This is label name
    for(int j = 0; j<loop; j++){
      if(j==5) continue;
      print('  Inner loop $j');
    }
  }
  print('\n');
  
  // Break
  // To end a loop when the condition meets
  print('[ Break ]\n');
  outerloop: // This is label name
  for(int i = 0; i<loop; i++){
    print('Outter loop $i');
    innerloop: // This is label name
    for(int j = 0; j<loop; j++){
      if(j==5) break;
      print('  Inner loop $j');
    }
  }
}
