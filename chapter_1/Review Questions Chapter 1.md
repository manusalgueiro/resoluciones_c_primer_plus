# Review Questions:

1. What does portability means in terms of programming? That you can take the source code of your program and compile it to various platforms, without having to think about if it will
   work in one system or another.

2. Explain the difference between source code file, object code file, and executable file.

   ​	The _source code file_ is the set of instructions that you wrote to make the program. Such instructions resemble the design you previously made to give shape to your idea of what
   the program will do, but the computer won't be able to interpret such words and symbols.

   ​	The _object code file_ is the translation of our source code file into machine code. It is
   a set of instructions that a computer would be able to comprehend, but it lacks the adaptation to a platform.

   ​	The _executable file_ is the final product of the linker. The object code file, the library
   functions and the starting code for the platform in which the program will execute are put
   togheter in one package, the executable file. It depends of the platform (*.exe for windows
   systems, *.out for Linux).

3. What are the seven mayor steps in programming?

   1. Define the program directives (a general idea about what the program will do).
   2. Design the program (How should the program be organized, Who will the target user
      be, which tasks will be performed by the program to give proper results).
   3. Write the code (Translate into C language what you designed previously).
   4. Compile (Review the code for syntax errors and make and executable).
   5. Run the program
   6. Test and Debug the program (Test the program for design errors and unexpected behaviour).
   7. Mantain and modify the program (Corrections and adjustments for other platforms and users).

4. What does a compiler do?

   ​	The _compiler_ converts your source code to an intermediate code (translation into machine code, but it is
   not an executable yet). It makes a file which contains machine language code (object code file).

5. What does a linker do?

   ​	The _linker_ puts togheter three elements: the object code, the startup code for a given system and the
   library code (library functions called in the source code file). The output of this set is the executable file, which will run only in the system set by the startup code.