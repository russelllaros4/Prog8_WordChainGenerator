 OBJ= main.o sec.o pair.o chain.o
OPTS= -g -c -Wall -Werror

sec: $(OBJ)
	g++ -o sec $(OBJ)
main.o: main.cc sec.h 
	g++ $(OPTS) main.cc
sec.o: sec.cc pair.h chain.h
	g++ $(OPTS) sec.cc
pair.o: pair.cc
	g++ $(OPTS) pair.cc
chain.o: chain.cc
	g++ $(OPTS) chain.cc
clean:
	rm -f *.o sec *~
