# Section 1

## Section 1.1

While the hello-world example is quite usual, I was suprised that it worked, as there was no return type given with the main function.

It throws a warning, but that's it:

```
hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~

```

The result of using c as an escape sequence is:

```
ex1-2.c: In function ‘main’:
ex1-2.c:5:26: warning: unknown escape sequence: '\c'
    5 |   printf("hello, world\c");
      |                          ^

```

But even then, the program still compiles and gives this output:

```
hello, worldc%  

```

When looking into what is happening [inside the program](./1_hello_c) using *strace*, I find that there is a lot more going on as in a comparable hello-world program written in [assembly](./1_hello_asm).


