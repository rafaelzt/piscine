cat /etc/passwd | grep -v "^#" | cut -d ":" -f 1 | awk "(NR%2==0)" | rev | sort -r | sed -n "${FT_LINE1:=7},${FT_LINE2:=15}p" |  tr "\n" "," | sed "s/,/, /g" | sed "s/, $/./g" | tr -d "\n"
