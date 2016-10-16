all: proj1.c Shape.c Alphabet.c Number.c BaseShape.c proj1

Sources		 = proj1.c Shape.c Alphabet.c Number.c BaseShape.c
Objects		 = $(Sources:.c=.o)

.c.o:
	gcc -c -Wall $< -o $@

proj1: proj1.o Shape.o Alphabet.o Number.o BaseShape.o
	gcc $(Objects) -lGL -lGLU -lglut -lm -o $@

clean: 
	-rm *.o
	-rm proj1

