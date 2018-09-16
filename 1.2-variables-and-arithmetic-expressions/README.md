# Variables and Arithmetic Expressions

#### Compile
```
cc -o temperature-v1.out temperature-v1.c
```
#### Run
```
./temperature-v1.out

F	C
0	-17
20	-6
40	4
60	15
80	26
100	37
120	48
140	60
160	71
180	82
200	93
220	104
240	115
260	126
280	137
300	148
```
---
- Start with `/*` and end with `*/` to write comments.
- Using `while` and `for` loops.
- Integer division truncates the value, e.g `1/2 => 0`. Using at least one float will return a float value, e.g `1.0/2 => 0.5` or `1/2.0 => 0.5` or `1.0/2.0 => 0.5`.
- `%3f` - print as floating point, at least 3 characters wide
- `%3.0f` - print as floating point, at least 3 characters wide, no decimal points
- `%3.2f` - print as floating point, at least 3 characters wide, 2 decimal points
- `%3d` - print as decimal integer, at least 3 characters wide
- `\n` - new line
- `\t` - tab
- `\b` - backspace
