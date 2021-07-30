moon : main.o swap_func.o
	gcc -o moon main.o swap_func.o
	
main.o : main.c swap.h
	gcc -c main.c
	
swap_func.o : swap_func.c swap.h
	gcc -c swap_func.c
