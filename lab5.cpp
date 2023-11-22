// ЛР 5. Одномерные массивы.
//
#include <iostream>
#include <clocale>
using namespace std;
<<<<<<<<< Temporary merge branch 1

int main()
{
    setlocale(LC_ALL, "ru");
    const size_t MAX = 10;
    int array[MAX];
    size_t arr_size;
    cin >> arr_size;
    if (arr_size == 0 or arr_size > MAX) { cerr << "error"; return 1; };
=========
const size_t MAX = 10;
/*
12. Дан массив A размера N.Вывести вначале его элементы с четными
номерами(в порядке возрастания номеров), а затем — элементы с нечетными номерами(также в порядке возрастания номеров) :
*/
void solution_1() {
    int array[MAX];
    size_t arr_size;
    cin >> arr_size;
    if (arr_size == 0 or arr_size > MAX) { cerr << "error"; exit(1); };
>>>>>>>>> Temporary merge branch 2
    for (size_t i = 0; i <= arr_size; i++) array[i] = i;
    for (size_t i = 0; i <= arr_size; i = i + 2) cout << array[i];
    cout << "\n";
    for (size_t i = 1; i < arr_size; i = i + 2) cout << array[i];
}
/*
12. Дан массив размера N (N — четное число). Поменять местами первую и вторую половины массива.
*/
void solution_2() {
    int array[MAX];
    size_t arr_size;
    cin >> arr_size;
    if (arr_size % 2 != 0 or arr_size <=0 ) { cerr << "не правильный ввод"; exit(1); };
    for (size_t i = 0; i < arr_size; i++) array[i] = i;
    for (size_t i = 0; i < arr_size; i++) cout << array[i];
    for (size_t i = 0; i != arr_size / 2; i++) { 
        int saved; 
        saved = array[i];
        array[i] = array[arr_size - 1 - i];
        array[arr_size - 1 - i] = saved;
    }
    cout << "\n";
    for (size_t i = 0; i < arr_size; i++) cout << array[i];
}

int main(){
    setlocale(LC_ALL, "ru");
    int UserChoise;
    while (true) {
        cout << "Здравствуйте, напишите номер подпрограммы, в которую хотите попасть\n(1, 2, а для выхода введите -1)\n";
        cin >> UserChoise;
        if (UserChoise == 1) { solution_1(); }
        else if (UserChoise == 2) {solution_2(); }
        else if (UserChoise == -1) { break; }
        else { cout << "Неправильная цифра!"; };
        cout << "\n";
    }
    return 0;
}
