Tower: main.o game.o menu.o character.o space.o emptySpace.o enemySpace.o itemSpace.o 
	g++ main.o game.o menu.o character.o space.o emptySpace.o enemySpace.o itemSpace.o -o Tower

main.o: main.cpp
	g++ -c main.cpp

game.o: game.cpp
	g++ -c game.cpp

menu.o: menu.cpp
	g++ -c menu.cpp

character.o: character.cpp
	g++ -c character.cpp
	
emptySpace.o: emptySpace.cpp
	g++ -c emptySpace.cpp

enemySpace.o: enemySpace.cpp
	g++ -c enemySpace.cpp

space.o: space.cpp
	g++ -c space.cpp

itemSpace.o: itemSpace.cpp
	g++ -c itemSpace.cpp

clean:
	rm *.o Tower
