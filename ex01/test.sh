#!/bin/bash

# Create a temporary file to hold the input
temp_input=$(mktemp)

# Write the test commands and inputs to the temporary file
cat <<EOL > $temp_input
ADD
John
Doe
Johnny
1234567890
Loves coding
ADD
Jane
Smith
Janey
0987654321
Secret agent
SEARCH
1
SEARCH
2
EXIT
EOL

# Run the phonebook program with the temporary file as input
./phonebook < $temp_input

# Clean up the temporary file
rm $temp_input
