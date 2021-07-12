moon : main.o decimal_func.o 
	gcc -o moon main.o decimal_func.o
	
main.o : main.c decimal.h
	gcc -c main.c
	
decimal_func.o : decimal_func.c decimal.h
	gcc -c decimal_func.c
