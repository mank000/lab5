// ЛР 5. Одномерные массивы.
#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int MAX = 10;
/*
12. Дан массив A размера N.Вывести вначале его элементы с четными
номерами(в порядке возрастания номеров), а затем — элементы с нечетными номерами(также в порядке возрастания номеров) :
*/
void solution_1() {
	int array[MAX];
	int arr_size;
	cout << "Введите число: ";
	cin >> arr_size;
	if (arr_size == 0 or arr_size > MAX) { 
		cerr << "error"; exit(1);
	};
	for (int i = 0; i < arr_size; i++) { 
		array[i] = rand();
	};
	for (int i = 0; i < arr_size; i += 2) { 
		cout << array[i] << '\t'; 
	};
	cout << "\n";
	for (int i = 1; i < arr_size; i += 2) { 
		cout << array[i] << '\t';
	};
}

void dynamic_solution_1() {
	//+
	int arr_size;
	cout << "Введите размер массива";
	cin >> arr_size;
	if (arr_size <= 0) {
		cerr << "error";
		exit(1);
	};
	int* numbers = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
		numbers[i] = rand();
	}
	for (int i = 0; i < arr_size; i += 2) {
		cout << numbers[i] << '\t';
	}
	cout << "\n";
	for (int i = 1; i < arr_size; i += 2) {
		cout << numbers[i] << '\t';
	}
	delete[] numbers;
}
/*
12. Дан массив размера N (N — четное число). Поменять местами первую и вторую половины массива.
*/
void solution_2() {
	int array[MAX];
	int arr_size;
	cout << "Введите чётное число: ";
	cin >> arr_size; 
	if (arr_size % 2 != 0 or arr_size <= 0) { 
		cerr << "не правильный ввод"; 
		exit(1);
	};
	for (int i = 0; i < arr_size; i++) {
		array[i] = rand();
	};
	for (int i = 0; i < arr_size; i++) {
		cout << array[i] << '\t';
	};
	for (int i = 0; i <= arr_size / 2 - 1; i++) {
		int saved;
		saved = array[i];
		array[i] = array[arr_size/2 + i];
		array[arr_size/2 + i] = saved;
	}
	cout << "\n";
	for (int i = 0; i < arr_size; i++) { 
		cout << array[i] << '\t';
	};
}
void dynamic_solution_2() {
	int arr_size;
	cout << "Введите чётное число: ";
	cin >> arr_size;
	if (arr_size % 2 != 0 or arr_size <= 0) { cerr << "не правильный ввод"; exit(1); };
	int* array = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
		array[i] = rand();
	};
	for (int i = 0; i < arr_size; i++) { 
		cout << array[i] << '\t';
	};
	for (int i = 0; i <= arr_size / 2 - 1; i++) {
		int saved;
		saved = array[i];
		array[i] = array[arr_size / 2 + i];
		array[arr_size / 2 + i] = saved;
	}
	cout << "\n";
	for (int i = 0; i < arr_size; i++) { 
		cout << array[i] << '\t'; 
	};
	delete[] array;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0)); //seed for random generator
	int UserChoise;
	while (true) {
		cout << "Здравствуйте, напишите номер подпрограммы, в которую хотите попасть\n(1, 2, а для выхода введите -1)\n";
		cin >> UserChoise;
		if (UserChoise == 1) { solution_1(); }
		else if (UserChoise == 2) { solution_2(); }
		else if (UserChoise == 3) { dynamic_solution_1(); }
		else if (UserChoise == 4) { dynamic_solution_2(); }
		else if (UserChoise == -1) { break; }
		else { cout << "Неправильная цифра!"; };
		cout << "\n";
	}
	return 0;
}
