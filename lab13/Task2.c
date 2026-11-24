#define _CRT_SECURE_NO_WARNINGS
#define UTF_8
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

char* greeting(char* name) {

	char greet[99];
	char* a, b;
	int last_ind;

	last_ind = strlen(name) - 1;
	a = &name[last_ind];

	// только заглавные (первая строчная)
	for (int i = 0; i <= last_ind; i++) {
		if (i == 0)
			name[i] = tolower(name[i]);
		else 
			name[i] = toupper(name[i]);
	}

	// замена местами первого и второго символа
	b = name[1];
	name[1] = name[0];
	name[0] = b;

	strcpy(greet, "Добро пожаловать, ");
	strcat(greet, name);
	strcat(greet, a); // удвоенная последняя буква
	strcat(greet, "_"); // добавление подчёркивания в конце

	return greet;
}

int main() {

	setlocale(LC_CTYPE, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name[49];

	printf("\nО таинственный незнакомец, поведайте нам своё величавое имя -> ");
	scanf("%49s", name);
	printf("\nНеужели это вы?.. После стольких лет? Ну что же. %s\n", greeting(name));

	return 0;
}
