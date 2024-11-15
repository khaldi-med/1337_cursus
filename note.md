### Libft

* A Makefile is a special file that helps you automate the process of compiling and linking programs.

* The #define symbol, like the #include symbol for file inclusion, is a preprocessor command.

* **NULL**, which is a special value that represents a null pointer (a pointer that does not point to any valid memory location

* the \* in char\* is used to declare the function's return type as a pointer to a character 

* return (char\*)str;
This returns a pointer to the character at the current position in the string. The cast (char\*) is necessary because the function takes a const char\* parameter, but it needs to return a non-const char\* pointer. This allows the caller to modify the character at the returned location, if needed.

* Type conversion is used to convert variable from one data type to another data type

* The strlcpy() and strlcat() functions return the total length of the string they tried to create.
	- For strlcpy() that is simply the length of the source; 
	- for strlcat() that means the length of the destination (before concatenation) plus the length of the source.

> gcc -Wall -save-temps filename.c –o filename. to see all files that compline make. 

* There are four phases for a C program to become an executable: 
	* Pre-processing
	* Compilation
	* Assembly
	* Linking

* Key Differences:
	* Expression	Meaning	When to Use
		* (char *)	Cast to a pointer to char	When you need to treat a pointer as a char *
		* (char)*	Dereference a pointer and cast the value to char	When you need the value pointed to by a pointer as a char

* A function pointer is a variable that stores the address of a function. 

* return_type (\*pointer_name)(parameter_types);

* A file descriptor is a low-level integer handle used by the operating system to access files and other input/output resources, such as pipes and sockets. In C, file descriptors are primarily used in UNIX-like operating systems.

* A file descriptor is a non-negative integer that uniquely identifies an open file within a process. It acts as an index into a per-process file descriptor table maintained by the operating system.

* Include Guards (#ifndef, #define, #endif): Prevent multiple inclusions of the same header file, which can cause compilation errors.

> $(VAR:pattern=replacement)

```
target-pattern: dependency-pattern
The % symbol is a wildcard matching any stem (the common part of the filenames).
%.o: %.c libft.h:

%.o: Any object file (e.g., ft_strlen.o).
%.c: Corresponding source file (e.g., ft_strlen.c).
libft.h: Additional dependency indicating that changes in libft.h should trigger recompilation.
```
* $<: Automatic variable representing the first prerequisite (%.c file).
* $@: Automatic variable representing the target (%.o file).


