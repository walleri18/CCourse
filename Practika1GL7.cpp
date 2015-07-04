/* 
 * File:   Practika1GL7.cpp
 * Author: Туров Виталий
 *
 * Created on 4 Июль 2015 г., 20:58
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void spisok();
void list(int n);
void clear();

int main() 
{
    int menu, vibor;
    
    cout << "Добро пожаловать в программу меню-списки!" << endl;
    spisok();
    while(true)
    {
    cout << endl << "Введите номер списка: ";
    cin >> menu;
    cout << endl;
    
    if (menu > 5 || menu < 1) spisok();
    else list(menu);
    
    cout << endl << "Хотите выйти? (да - 1, нет - любая): ";
    cin >> vibor;
    if (vibor == 1) break;
    else clear();
    }   
       
    return 0;
}

void spisok()
{
    cout << "1. Калькулятор" << endl;
    cout << "2. 99 бутылок пива на столе" << endl;
}

void list(int n)
{
    if (n == 1) cout << "Вы выбрали Саров";
    else if (n == 2) cout << "Вы выбрали Москву";
    else if (n == 3) cout << "Вы выбрали Нижний Новгород";
    else if (n == 4) cout << "Вы выбрали Санкт-Петербург";
    else if (n == 5) cout << "Вы выбрали университет ННГУ им. Лобачевского";
}

void clear()
{
    for (int i = 0; i < 1000; i++) cout << endl;
}