# Hello, world

#### Compile
```
cc -o hello.out hello.c
```
#### Run
```
./hello.out

=> Hello, world
```
---
- The `cc` command will invoke the compiler to compile the hello.c file and output an executable file.
- `cc` invokes the default C compiler on an operating system. Use `cc -v` to check:
  ```
  > cc -v
    Apple LLVM version 9.1.0 (clang-902.0.39.2)
    Target: x86_64-apple-darwin17.7.0
    Thread model: posix
    InstalledDir: /Library/Developer/CommandLineTools/usr/bin
  ```
- A C program consists of functions and variables.
- The `main` function is special, it is where a program begins executing. The `main` function can call other functions to perform the its job.
- By including the standard library in code we can utilise functions such as `printf`.
