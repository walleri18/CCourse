/* 
 * File:   Practika2GL7.cpp
 * Author: Туров Виталий
 *
 * Created on 5 Июль 2015 г., 10:48
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout << "Добро пожаловать в программу: 12 Рождественских дней" << endl;
    
    for (int i = 1; i <= 12; i++)
    {
        cout << endl << "На ";
        switch(i)
        {
            case 1:
            {
                cout << "первый";
                break;
            }
            
            case 2:
            {
                cout << "второй";
                break;
            }
            
            case 3:
            {
                cout << "третий";
                break;
            }
            
            case 4:
            {
                cout << "четвёртый";
                break;
            }
            
            case 5:
            {
                cout << "пятый";
                break;
            }
            
            case 6:
            {
                cout << "шестой";
                break;
            }
            
            case 7:
            {
                cout << "седьмой";
                break;
            }
            
            case 8:
            {
                cout << "восьмой";
                break;
            }
            
            case 9:
            {
                cout << "Девятый";
                break;
            }
            
            case 10:
            {
                cout << "десятый";
                break;
            }
            
            case 11:
            {
                cout << "одиннацатый";
                break;
            }
            
            case 12:
            {
                cout << "двенадцатый";
                break;
            }         
        }
        cout << " день Рождества" << endl;
        cout << "Мой любимый прислал мне:" << endl;
        
        switch(i)
        {
            case 12:
            {
                cout << "Двенадцать барабанящих барабанов," << endl;
            }
            
            case 11:
            {
                cout << "Одиннадцать дудящих дудочников," << endl;
            }
            
            case 10:
            {
                cout << "Десять прыгающих лордов," << endl;
            }
            
            case 9:
            {
                cout << "Девять танцующих леди," << endl;
            }
            
            case 8:
            {
                cout << "Восемь доящих доярок," << endl;
            }
            
            case 7:
            {
                cout << "Семь плавающих лебедей," << endl;
            }
            
            case 6:
            {
                cout << "Шесть откладывающих яйца гусей," << endl;
            }
            
            case 5:
            {
                cout << "Пять золотых колец," << endl;
            }
            
            case 4:
            {
                cout << "Четыре щебечущих птицы," << endl;
            }
            
            case 3:
            {
                cout << "Три французских курицы," << endl;
            }
            
            case 2:
            {
                cout << "Два голубя" << endl;
            }
            
            case 1:
            {
                cout << "Куропатку на грушевом дереве." << endl;
            }
        }
    }
    
    
    
    
    
    
    return 0;
}