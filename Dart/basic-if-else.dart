void main() {
  var x = 1;
  var y = 2;
  
  // if([contidion]) meets, then run code inside bracket, if not go through else line
  print('X is $x and Y is $y');
  if(x==y){
    print('X is equals to Y');
  } else {
    print('X is not equals to Y');
  }
  print('\n');
  // Simple if else condition 
  /* 
   * syntax:
   * [condition] ? [if true meets] : [if false meets]
   * 
   * */
  
  x = 10;
  y = 10;
  print('X is $x and Y is $y');
  x==y ? print('X is equals to Y') :  print('X is not equals to Y');
  
}
