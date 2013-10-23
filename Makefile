all: Generate

Generate: GeneratePi.cpp
	g++ -g -Wall -o GeneratePi GeneratePi.cpp

clean:
	rm GeneratePi *.o *~ *.gch
