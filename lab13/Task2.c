#define _CRT_SECURE_NO_WARNINGS
#define UTF_8
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

char* greeting(char* name) {

	char* greet[99];

	// только заглавные
	for (int i = 0; i < 49; i++) {
		name[i] = toupper(name[i]);
	}

	strcpy(greet, "Добро пожаловать, ");
	strcat(greet, name);
	strcat(greet, "!");

	return greet;
}

int main() {

	setlocale(LC_CTYPE, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* name[49];

	printf("\nО таинственный незнакомец, поведайте нам своё величавое имя -> ");
	scanf("%49s", name);
	printf("\nНеужели это вы?.. После стольких лет? Ну что же. %s\n", greeting(name));

	return 0;
}
