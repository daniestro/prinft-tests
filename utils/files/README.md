# Functions to work with stdout and file descriptors

</br>

## file_to_string.c
Reads the file and gives a file content as a string. Uses constant FILE_NAME to open the file.

</br>

## redirect_to_file.c
Redirects a stdout to the file. Uses constant FILE_NAME to open the file.

</br>

## stdout_to_file.c
Uses the functions mentioned before and pens a session for a given function redirecting the standard output to a file during its execution. After the function completes, restores the original output back to the terminal. Uses constant FILE_NAME to open the file.
