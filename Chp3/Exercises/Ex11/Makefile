coins.o: coins.cpp
	g++ -o coins.o coins.cpp

run: coins.o
	./coins.o

test: coins.o
	echo "----STARTING TEST 1----" 
	echo 1 1 1 2 1 | ./coins.o
	echo "----STARTING TEST 2----" 
	echo 2 134 24242 23423 23423 0 | ./coins.o
	echo "----STARTING TEST 3----" 
	echo 2314 14231412 1241414  12414 12421421 214124 | ./coins.o
