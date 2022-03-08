if [ -e $1 ]
then
set -- `ls -ld $1`
echo "permission are $1"
echo "file lines count is $2"
echo "username is  $3"
echo "groupname is $4"
echo "filesize is  $5"
echo "month is $6"
echo "modification is done $6 $7 $8"
else
echo "file doesnot exist"
fi
