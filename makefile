compile:./main.cpp
	g++ -c ./main.cpp ./source/*.cpp
	g++ *.o -o app -lsfml-graphics -lsfml-window -lsfml-system
	rm -f *.o

run:
	./app

clear:
	rm -f app