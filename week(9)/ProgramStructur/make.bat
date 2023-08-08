REM 
@gcc -c main.c -o main.o
@gcc -c str.c -o str.o
@gcc -c stat.c -o stat.o
@gcc -c cal.c -o cal.o

REM link (execute file)
@gcc main.o str.o stat.o cal.o -o ProgramStructur.exe

@echo Making done...