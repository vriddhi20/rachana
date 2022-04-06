if [ $# -eq 3 ]
then
if [ -f $1 ]
then
l=`wc -l $1`
head -n $3 $1 | tail +$2
else
echo "enter the available $i is not a file"
fi
else
echo "Enter the required arguments"
echo "Usage:Filename storing in ending Line"
fi
