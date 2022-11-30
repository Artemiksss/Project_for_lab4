all:
	g++ -std=c++17 algorithms_1.cpp -o algorithms_1

test:
	chmod +x algorithms_1

clean:
	$(RM) algorithms_1
