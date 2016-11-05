all: proj2.c Shape.c Alphabet.c Number.c BaseShape.c proj2

Sources		 = proj2.c Shape.c Alphabet.c Number.c BaseShape.c
Objects		 = $(Sources:.c=.o)

.c.o:
	gcc -c -Wall $< -o $@

proj2: proj2.o Shape.o Alphabet.o Number.o BaseShape.o
	gcc $(Objects) -lGL -lGLU -lglut -lm -o $@

clean: 
	-rm *.o
	-rm proj2

