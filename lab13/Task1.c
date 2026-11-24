#include <stdio.h>
#include <string.h>

char* greeting(char* name) {

	char* greet[] = "Добро пожаловать, ";
	strcat(greet, name);

	return greet;
}

int main() {

	return 0;
}