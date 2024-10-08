This C program reads a file specified by the user and counts the number of lines that are comments. The program handles both single-line (//) and multi-line (/* */) comments and outputs the total number of comment lines.

Key Features:
File Handling:

The program asks the user to enter the file name and attempts to open the specified file in read mode ("r").
If the file cannot be opened (e.g., it doesn't exist), the program prints an error message and exits.
Comment Line Detection:

The program reads each line of the file using fgets(), which safely reads a line of text up to 50 characters.
For each line, it checks if the first two characters are either // (single-line comment) or /* (multi-line comment).
If a line starts with these characters, it is considered a comment line, and the commentlines counter is incremented.
Output:

After reading the entire file, the program outputs the total number of comment lines found in the file.
