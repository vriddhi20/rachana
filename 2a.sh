echo -n "enter a filename1 :"
read f1
if [ -e $f1 ]
then
 set -- 'ls -ld $f1'
 file1perm=$1
else
 echo "file does not exit"
 exit
fi

echo -n "enter a filename2"
read f2
if [ -e $f1 ]
then
 set -- 'ls -ld $f1'
 file1perm=$1
else
 echo "file does not exit"
 exit
fi

if [ $file1perm = $file2perm ]
then
 echo "file permission are identical"
 echo "permission is $file1perm"
 else
  echo "file permission are not identical"
  echo "$f1 permission is $file1perm"
  echo "$f2 permission is $file2perm"
 fi
