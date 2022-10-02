main.h - a header file that contains all prototypes
libmy.a - static library containing many functions
How to create a static Library
- To create a static library, the compiler needs to be specified.
( gcc compiler is used for c files) using this command:
gcc -c -Wall -Werror -Wextra *.c
- The command above will generate an object file with'.o' extension for each of the '.c' file.
- after which an archive needs to be created for the object files using the command: ar -rc libmy.a *.o (note libmy is the library name).
- in order to list the names of object files in the library, we use the command: ar -t libmy.a 
 
