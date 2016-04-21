cat phonebook.txt | grep -i "Nicolas" | grep -i "Bomber" | tr '\t' ' ' | grep -i -v "Bernhard" | grep -i "-" | cut -d ' ' -f 3

