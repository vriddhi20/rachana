var n=prompt("enter the number");
n1=0;
n2=1;
document.write("the fib series of" + n +"<br/>" );
document.write(n1 + "<br/>" + n2 +"<br/>");
for(i=3;i<=n;i++)
{
f3=n1+n2;
document.write(f3 + "<br/>");
n1=n2;
n2=f3;
}
