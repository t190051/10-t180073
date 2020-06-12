all: kadai10-1 kadai10-2
kadai10-1: kadai10-1.c
	clang -lm -o kadai10-1 kadai10-1.c
kadai10-2: kadai10-2.c
	clang -o kadai10-2 kadai10-2.c