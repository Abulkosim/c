### Learning C Language

#### Just random notes

-- 

#define name replacement list - symbolic constant 

#define LOWER 0

-- 

getchar() - reads a character from the standard input
putchat() - writes a character to the standard output

--

EOF - end of file
Example: 
```c
while ((c = getchar()) != EOF)
    putchar(c);
```

--

#### Data types in C Language 
- char a single byte, capable of holding one character in the local character set
- int an integer, typically reflecting the natural size of integers on the host machine
- float single-precision floating point
- double double-precision floating point 

#### Pointers in C language
- A pointer is a variable that contains the address of a variable
- The unary operator * is the indirection or dereferencing operator
- The & operator is the address operator
- The value of a variable can be changed by using the * operator
- Pointer Declaration: int *ptr;
- Assign Address: ptr = &var;
- Dereference Pointer: *ptr to access or modify the value.

#### Character Pointers and Functions 
- A string constant is an array of characters
- A string in C is a sequence of characters ending in '\0'

```c
printf("hello, world\n");
```

When a character string like this appears in a program, access to it is through a pointer to its first element. In the example above, the character pointer p is initialized to point to the first character of the string. 

