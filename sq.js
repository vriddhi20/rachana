
var n=prompt ("Enter the limit 'n' to generate the table of numbers from 1 to n:","");
var msg="";
var res= "0";
 
for(var x= 1; x<=n;x++)
{
res = x * x;
msg = msg + " " + x + " * "+ x + " = " + res + "\n";
}
 
alert(msg);
