cat /etc/passwd | grep -v "#" | sed -n "n;p" | cut -f1 -d ":" | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | sed -e ':a' -e 'N' -e '$! ba' -e  's/\n/, /g' | sed 's/$/./g' | tr -d "\n"
