/* 
 * File:   Practika2GL8.cpp
 * Author: Туров Виталий
 *
 * Created on 6 Июль 2015 г., 12:47
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int vibor;
    do
    {
    srand(time(NULL));
    
    int chisloKomp = rand() % 101;
    int chelovek, popitka = 1;
    cout << "Добро пожаловать в игру угадай число! (от 1 до 100)" << endl;
    cout << "Введите задуманное число: ";
    cin >> chelovek;
    while (chisloKomp != chelovek)
    {
        if (chisloKomp > chelovek) cout << endl << "Побольше" << endl;
        else cout << endl << "Поменьше";
        cout << endl << "Неправильно. Введите заново: ";
        cin >> chelovek;
        popitka++;
    }
    cout << "Ура вы угадачи число: " << chisloKomp << " с попытки №" << popitka << endl;
    cout << "Хотите продолжить? ( да - 1, нет - 0 ): ";
    cin >> vibor;
    }while(vibor == 1);
    return 0;
}

