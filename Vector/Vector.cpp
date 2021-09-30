#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector <int> vect(10);
    cout << "ВЕКТОР: " << endl;
    for (int i = 0; i < vect.size(); i++) {
        vect[i] = 0 + rand() % 20;
    }
    for (auto iter = vect.begin(); iter!=  vect.end(); iter++) {
        cout << *iter<<" ";
    }
    cout << endl;
    cout << "Минимальный элемент: ";
    auto min = min_element(vect.begin(), vect.end());
    cout << *min;
    cout << endl;
    cout << "Максимальный элемент: ";
    auto max = max_element(vect.begin(), vect.end());
    cout << *max;
    cout << endl;
    cout << "Сортировка по убыванию: ";
    sort(vect.begin(), vect.end(), greater<int>());
    for (auto iter = vect.begin(); iter != vect.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "Сортировка по возрастанию: ";
    sort(vect.begin(), vect.end());
    for (auto iter = vect.begin(); iter != vect.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "На какое число увеличить значения: ";
    const int n = 3;
    for (int i = 0; i < vect.size(); i++) {
        vect[i]+=n ;
    }
    cout << "Вектор после увеличения значений: ";
    for (auto iter = vect.begin(); iter != vect.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "На какое число уменьшить значения: ";
    for (int i = 0; i < vect.size(); i++) {
        vect[i] -= n;
    }
    cout << "Вектор после уменьшения значений: ";
    for (auto iter = vect.begin(); iter != vect.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    cout << "Введите искомое значение: ";
    int f = 0;
    cin >> f;
    for (vector<int>::iterator iter = vect.begin(); iter != vect.end(); iter++) {
        if (*iter == f) {
            if(iter!=vect.begin()){
                vect.erase(iter--);
            }
            else {
                vect.erase(iter);
                iter = vect.begin();
            }
        }
    }
    cout << "Вектор после удаления искомого значения:";
    for (auto iter = vect.begin(); iter != vect.end(); iter++) {
        cout << *iter << " ";
    }
}

