
var n1 = 0,  n2 = 1, next_num, i;  
var num = parseInt (prompt (" Enter the Fibonacci Series "));  
document.write( "Fibonacci Series are");  
for ( i = 1; i <= num; i++)  
{ 
    document.write (" <br> " +  n1);  
    next_num = n1 + n2;  
      
    n1 = n2;
    n2 = next_num; 
}  
  