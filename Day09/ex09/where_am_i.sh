var=$(ifconffig | grep "inet " | cut -d ' ' -f2)
if test "$var" = ''
then
	echo "Je suis perdu !"
else
	echo "$var"
fi
