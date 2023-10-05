// Вариант 1
// Дано число. Проверить является ли число положительным и двухзначным

#include <iostream>
#include<cmath>
using namespace std;
int main(){
    setlocale(LC_ALL, "rus");
    int num;
    cout << "Введите положительное двузначное число: ";
    cin >> num;
    if (num < 100 && num>9) cout << "Истина\n";
    else cout << "Ложь\n"; 
    system("pause");
 }