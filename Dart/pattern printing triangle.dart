import 'dart:io';
 
void main(){
    //n is the number of lines of the pattern to be printed
    var n = 6;
    
    
    //Printing a new line    
    print('');
    
    
    //loop to print the pattern
    for(var row = 1; row <= n; row++) 
    {
        for(var column = 0; column < row; column++) 
        {
            stdout.write(' *');
        }
        print('');
    }
}