# Character Input Output

## Input Output
#### Compile
```
cc -o input-output.out input-output.c
```
#### Run
Type a number or character and the program should print it out, enter `ctrl + C` to quit.
```
./input-output.out

    1
=>  1
    2
=>  2
    ABCD
=>  ABCD
```

## Character counting
#### Compile
```
cc -o character-counting.out character-counting.c
```

#### Run
Type characters and enter `ctrl + D` to terminate. It should print the number of characters typed.
```
./character-counting.out

    123456
=>  6
```

## Line counting
#### Compile
```
cc -o line-counting.out line-counting.c
```

#### Run
Type characters on many lines and enter `ctrl + D` to terminate. It should print the number of lines typed.
```
./line-counting.out

    first line
    another line
    third line
=>  3
```

## Word counting
#### Compile
```
cc -o word-counting.out word-counting.c
```

#### Run
Type characters on many lines and enter `ctrl + D` to terminate. It should print the number of lines typed, number of words followed by number of characters.
```
./line-counting.out

    first line
    another line
    third line
=>  3 6 25
```
---
