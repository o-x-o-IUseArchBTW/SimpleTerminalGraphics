build:
	@g++ main.cpp Library/STG.cpp -O2 -o main
buildandrun:
	@g++ main.cpp Library/STG.cpp -O2 -o main
	@./main
run:
	@./main

default: build
