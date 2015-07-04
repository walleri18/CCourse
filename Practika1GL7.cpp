/* 
 * File:   Practika1GL7.cpp
 * Author: Туров Виталий
 *
 * Created on 4 Июль 2015 г., 20:58
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

//Рабочие методы
void spisok(); //Вывод списка
void list(int n); //Выбор пользователя
void clear();// метод для очистки
//Творческие методы
void song(); //метод вызова песни 99 бутылок пива на столе
void calculate();//метод простого калькулятора
//Прототипы калькулятора
double summa(double args1, double args2);
double delition(double args1, double args2);
double mult(double args1, double args2);
double raznost(double args1, double args2);

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
    
    if (menu > 2 || menu < 1) spisok();
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
    if (n == 1) calculate();
    else if (n == 2) song();
}

void clear()
{
    for (int i = 0; i < 1000; i++) cout << endl;
}

void song()
{
    cout << endl << "Песня 99 бутылок пива на столе:"<< endl;
    
    for (int i = 99; i >= 2; i--)
    {
        cout << i << " bottles of beer on the wall" << endl;
        cout << i << " bottles of beer!" << endl;
        cout << "Take one down, pass it around" << endl;
        cout << (i - 1) << " bottles of beer on the wall!" << endl;
    }
}

double summa(double args1, double args2)
{
    double summa = (args1 + args2);
    return summa;
}

double raznost(double args1, double args2)
{
    double raznost = (args1 - args2);
    return raznost;
}

double mult(double args1, double args2)
{
    double mult = (args1 * args2);
    return mult;
}

double delition(double args1, double args2)
{
    while (args2 == 0) 
    {
        cout << "ОШИБКА!!! (ДЕЛЕНИЕ НА НОЛЬ!!!)" << endl << "Введите второй аргумент заново: ";
        cin >> args2;
    }
    double delition = (args1 / args2);
    return delition;
}

void calculate()
{
    char operation;
    double args1, args2, result;
    
    cout << "Добро пожаловать в калькулятор!!!" << endl;
    cout << "Введите арифметическую операцию: ";
    cin >> operation;
    
    cout << endl << "Введите первый аргумент: ";
    cin >> args1;
    
    cout << endl << "Введите второй аргумент: ";
    cin >> args2;
    
    if (operation == '+') result = summa(args1, args2);
    else if (operation == '-') result = raznost(args1, args2);
    else if (operation == '*') result = mult(args1, args2);
    else if (operation == '/') result = delition(args1, args2);
    
    cout << endl << "Результат выполнении операции: " << args1 << " " << operation << " " << args2 << " = " << result << endl;
}