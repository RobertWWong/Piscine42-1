grep -i "\(^\|\s\)nicolas\s" $1 | grep -i "\(^\|\s\)bauer" | grep -Eow "[0-9-]+" | grep "-"
