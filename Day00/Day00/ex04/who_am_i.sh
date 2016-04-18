ldapwhoami -Q | tail -n 1 | sed 's/\,ou\=johannesburg//g' | cut -c 4-
