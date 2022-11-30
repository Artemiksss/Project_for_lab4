all:
	g++ -std=c++17 hello.cpp -o algorithms_1

test:
	chmod +x algorithms_1

clean:
	$(RM) hello
