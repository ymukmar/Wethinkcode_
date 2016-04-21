touch -A -000001 bomb.txt | stat -s bomb.txt | cut -d " " -f 9 | cut -c 10-
