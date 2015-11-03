ldapsearch -Q uid='z*' | grep cn: | cut -d' ' -f2 -f3 | sort -r
