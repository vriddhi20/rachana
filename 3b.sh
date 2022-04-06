echo -n "Enter the password:"
stty -echo
read p1
stty echo
echo -n "Confirm the password:"
stty -echo
read p2
stty echo
while [ "$p1" != "$p2" ]
do
echo -n "password dosenot match.renter the password:"
stty -echo
read p2
stty echo
done
clear
echo "--------Terminal locked--------:"
echo -n "Enter the password to unlock:"
stty -echo
read p3
stty echo
while [ "$p1" != "$p3" ]
do
clear
echo -n "password dosenot match.renter the password:"
stty -echo
read p3
stty echo
done
echo "--------Terminal unlock--------"
