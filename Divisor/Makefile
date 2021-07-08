moon : main.o divisor_func.o print_func.o
	gcc -o moon main.o divisor_func.o print_func.o
main.o : main.c divisor.h
	gcc -c main.c
divisor_func.o : divisor_func.c divisor.h
	gcc -c divisor_func.c
print_func.o : print_func.c divisor.h
	gcc -c print_func.c
