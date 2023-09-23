<h1> 0x18. C - Dynamic libraries </h1>
<hr />
<h2> How to create a Dynamic Library in C </h2>
<p> The way to create a Dynamic Library in Linux is with the gcc command using the -c to generate the object files (.o) from the source files (.c) and the -fPIC to make the code position independent. Thus, the following command makes a bunch of .o files from each .c file in the current directory (You can select which functions you want for your library)</p>
<code> gcc -c -fPIC *.c </code>
<p> Next, we are going to put together those objects files into one library. To do this as a Dynamic Library we also use gcc but with the -shared option. The -o is to specify the name of the file you want it to have.</p>

<p> gcc -shared -o liball.so *.o </p>
 <p> you have successfully created a dynamic library </p>
