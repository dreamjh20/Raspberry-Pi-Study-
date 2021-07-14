moon : main.o make_func.o solve_func.o
	gcc -o moon main.o make_func.o solve_func.o
main.o : main.c password.h
	gcc -c main.c
make_func.o : make_func.c password.h
	gcc -c make_func.c
solve_func.o : solve_func.c password.h
	gcc -c solve_func.c
