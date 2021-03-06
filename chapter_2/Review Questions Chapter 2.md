# Review Questions: Chapter 2

1. What are the basic modules of a C program called?

	​	C programs consist of one or more functions, the basic modules of a C program. Functions are a set of instructions that return a value, surrounded by the function name and the actual parameters, and the return statement.

2. What is a syntax error? Give an example of one in English and one in C.

	​	A syntax error happens when some word, character or symbol does not follow the rules of the language in which the statement is expressed. 

- Example in English: "Now I  to school" instead of "Now I go to school"

- Example in C: 

	```c
printf(Hello World!)		// Bad
	
	printf("Hello World!\n");	// Good
	```

3. What is a semantic error? Give an example of English and one in C.

	A semantic error occurs when every rule of the language is followed but the expected result
is different from the expected.

	An example in English: ???
	An example in C:

	```c
	int n = 100;
	int m = 4;
	float p = 0;
	
// which percentage of n is m?
	
	p = n % m; // This is not percentage, is the mod operator
	```

4) Indiana Sloth has prepared the following program and brought it to you for approval. Please
help him.

```c
include studio.h

int main{void} /* This prints the number of weeks of a year */
(
int s

s := 56;
print(There are s weeks in a year);
return 0;`
```

Corrections:

- Include sentence lacks of the symbol # and the library name is wrong. Also there are no

greater than/less than characters surrounding the header file *.h

- The main function parameters section has to be enclosed by parenthesis.
- Variable declaration has no semicolon at the end of the statement. Also the variable is
  not initialized, which is not recommended.
- Assignment operator is wrong. Colon and equal sign is used in languages like Pascal.
- To show any text on screen the name of the library function is 'printf', also the text
  has to be surrounded with double quotes. Once the name and double quotes are corrected, is necessary to use format specifiers, in this case %d for decimal values.
- The code block has to be surrounded between curly braces and not parenthesis.
- The final version of Indiana's program is like follows:

```c
#include <stdio.h>

int main(void)
{	
	int s = 56;
	printf("There are %d weeks in a year\n", s);
	return 0;
}
```

5. Assuming that each of the following examples is part of a complete program, what will
   each one print?

   ```c
   // a
   printf("Baa Baa Black Sheep.");
   printf("Have you any wool?\n");
   // Output
   Baa Baa Black Sheep. Have you any wool?
   
   // b
   printf("Begone!\nO creature of lard!\n");
   // Output
   Begone!
   O creature of lard!
   
   // c
   printf("What?\nNo/nfish?\n");
   // Output
   What?
   No/nfish?
   
   // d
   int num;
   	
   ```

	num = 2;
	printf("%d + %d = %d", num, num, num + num);

2 + 2 = 4

6) Which of the following are C keywords? 

​	main, int, function, char, =

​	With exception of '=' (it is not a keyword, it is an operator) and function, the rest are keywords.

7) How would you print the values of the variables 'words' and 'lines' so they appear
in the following form:

​	There were 3020 words and 350 lines.

Here, 3020 and 350 represent the values of the two variables.

```c
int words = 3020;
int lines = 350;

printf("There were %d words and %d lines,\n);
```

8) Consider the following program:

```c
#include <stdio.h>
int main(void)
{
	int a, b;
	a = 5;
	b = 2;	/* line 7 */
	b = a;	/* line 8 */
	a = b;	/* line 9 */
	printf("%d %d\n, b, a);
	return 0;
}
```
What is the state after line 7? Line 8? Line 9?

​	After line 7: a <- 5, b <- 2
​	After line 8: a <- 5, b <- 5
​	After line 9: a <- 5, b <- 5

9) Consider the following program:

```c
#include <stdio.h>
int main(void)
{
	int x, y;
	x = 10;
	y = 5;	/* line 7 */
	y = x + y;	/* line 8 */
	x = x * y;	/* line 9 */
	printf("%d %d\n, x, y);
	recturn 0;
}
```
What is the program state after line 7? Line 8? Line 9?

​	After line 7: x <- 10, y <- 5
​	After line 8: x <- 10, y <- 15
​	After line 9: x <- 150, y <- 15
