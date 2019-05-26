test: vs
	./vs 321

vs: interp.o main.o
	g++ -o $@ $^

main.o: main.c
	gcc -c -o $@ $^

interp.o: interp.c++
	g++ -c -o $@ $^
