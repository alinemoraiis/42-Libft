# 42-Libft
- This project is about coding my own C library. It is compound by a set of functions based on Libc library, some additional functions and a bonus part that manipulates linked list.

## :bowtie: Files
- **Makefile**: defines set of tasks (compile all functions) to be executed.
- **libft.h**: header file with all declarated functions.

## :bowtie: Libc functions
- **ft_isalpha**: check if the character is an unsigned char.
- **ft_isdigit**: check if the character is a decimal digit.
- **ft_isalnum**: tests if the character is an alpha or a decimal digit.
- **ft_isascii**: check if the character is an ASCII.
- **ft_isprint**: check if the character is a printable character.
- **ft_strlen**: return the lenght of the string s, excluding the NULL character.
- **ft_memset**: writes len bytes of value c to the string b.
- **ft_bzero**: writes zeroed bytes to the string s.
- **ft_memcpy**: copies n bytes from memory src to dst. ft_memcpy can't handle overlapping memory.
- **ft_memmove**: copies n bytes from string src to string dst. ft_memmove can handle overlapping memory.
- **ft_strlcpy**: copies up to n - 1 characters from string src to dest. Return the length of src.
- **ft_strlcat**: appends string src to the end of dst. Return the total length of the created string.
- **ft_toupper**: converts a lower-case letter to the corresponding upper-case letter.
- **ft_tolower**: converts an upper-case letter to the corresponding lower-case letter.
- **ft_strchr**: locates the first occurence of c in the string s and return a pointer to the located character.
- **ft_strrchr**: locates the last occurrence of c in the string s and return a pointer to the located character.
- **ft_strncmp**: compare, not more than n characters the strins s1 and s2.
- **ft_memchr**: locates the first occurrence of c in string s. Returns a pointer to the byte loacted.
- **ft_memcmp**: compares byte string s1 against byte string s2.
- **ft_strnstr**: locates the first occurrence of the string needle in the string haystack.
- **ft_atoi**: converts the string str to int.
- **ft_calloc**: allocates enough space for count object that are size bytes of memory each. Return a pointer to the allocated memory.
- **ft_strdup**: allocates sufficient memory for a copu of the string s1, does the copy, and returns a pointer to it.

## :bowtie: Additional functions
- **ft_substr**: allocates memory and returns a new substring from the string s. The substring begins at index start and is of maximum size len.
- **ft_strjoin**: allocates memory and returns a new string, which is the result of the concatenation of s1 and s2.     
- **ft_strtrim**: allocates memory and returns a copy of s1 with the characters specified in set removed from the beginning and the end of the string.
- **ft_split**: allocates memory and returns an array of strings obtained by splitting s using the character c as a delimiter.    
- **ft_itoa**: allocates memory and convert the int received as an argument to string.
- **ft_strmapi**: applies the function f to each character of the string s. Returns a new string resulting from application of f.
- **ft_striteri**: applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.
- **ft_putchar_fd**: outputs the character c to the given file descriptor.
- **ft_putstr_fd**: outputs the string s to the given file descriptor.
- **ft_putendl_fd**: outputs the string s to the given file descriptor followed by a newline.
- **ft_putnbr_fd**: outputs the integer n to the given file descriptor.

## :bowtie: Bonus functions (linked list)
- **ft_lstnew**: allocates memory and returns a new node.
- **ft_lstadd_front**: adds the node new at the beginning of the list.
- **ft_lstsize**: counts the number of nodes in a list.
- **ft_lstlast**: returns the last node of the list.
- **ft_lstadd_back**: adds the node new at the end of the list.
- **ft_lstdelone**: takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node.
- **ft_lstclear**: deletes and frees the given node and every successor of that node, using the function del and free(3).
- **ft_lstiter**: iterates the list lst and applies the function f on the content of each node.
- **ft_lstmap**: iterates the list lst and applies the function f on the content of each node.

## :bowtie: Used tests
- [libftTester](https://github.com/Tripouille/libftTester)
- [libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)
- [libft-unit-tests](https://github.com/alelievr/libft-unit-test)
