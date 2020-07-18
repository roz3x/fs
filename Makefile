
gen:
	gcc -o bin  --std=c99 main.c 
debug:
	gcc -g -o bin  --std=c99 main.c -Wall
clean:
	rm ./bin
