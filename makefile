build:
	@g++ main.cpp -O2 -o main
buildandrun:
	@g++ main.cpp -O2 -o main
	@./main
run:
	@./main

default: build
