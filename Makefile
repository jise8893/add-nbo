all: add-nbo
	
add-nbo :  addn.cpp
	g++ -o addn addn.cpp
clean: 
	rm -f add-nbo *.bin
