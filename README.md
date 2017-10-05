# System Programming Lab 2 - fork+exec, wait
## Task A
Write a program `domath.c` and compile it as `domath`. The program should accept two arguments, create four child processes and pass the arguments to the child processes. Each of the child processes will perfom an arithmetic operation over the arguments (like addition, subtraction, multiplication or division) as shown below. File `domath.c` should contain code of parent process and all its child processes.

```
$ gcc domath.c -o domath
$ ./domath 3 5
child1: 3+5=8
child3: 3*5=15
child2: 3-5=-2
child4: 3/5=0
parent: done.
```
## Task B
Write a program `mathdo.c` that will take the same arguments as in **Task A** and create four child processes. Unlike Task A in this task the parent process does not contain code for all it child processes. Instead the parent process spawns child processes written in other programming languages. Let `python` script do addition, a `java` program do subtraction, `nodejs` script do multiplication and a `bash` script do division.

```
$ gcc mathdo.c -o mathdo
$ ./mathdo 3 5
python: 3+5=8
java: 3-5=-2
nodejs: 3*5=15
bash: 3/5=0
parent: done.
```



## Task C
Task B goes here
## Task D
Task B goes here
## Task E
Task B goes here
