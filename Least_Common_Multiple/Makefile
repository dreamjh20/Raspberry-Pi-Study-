moon : main.o lcm_func.o
	gcc -o moon main.o lcm_func.o
main.o : main.c lcm.h
	gcc -c main.c
lcm_func.o : lcm_func.c lcm.h
	gcc -c lcm_func.c
