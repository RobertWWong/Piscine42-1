stat -t %Y bomb.txt | awk '{$0 --} END {print $0}'
