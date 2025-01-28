all: build
	./clox

build:
	gcc *.c -o clox
