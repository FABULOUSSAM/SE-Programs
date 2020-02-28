echo “Top 10 processes in descending order are:”
ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%mem |head

echo “Processes with highest memory usage are:”
ps aux |sort -nk +4 |tail

echo “current logged in users and logname are:”
logname

echo “current shell is:”
echo $SHELL

echo “home directory is:”
$HOME

echo “Current path is:”
echo $PATH

echo “current working directory is”
pwd

echo “current OS version, release number, kernel version are:”
uname -a
