///* 
// * File:   Practika4GL5.cpp
// * Author: Туров Виталий
// *
// * Created on 3 Июль 2015 г., 11:30
// */
//
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
//int main() 
//{
//    int popatka = 1, pass;
//    const int password = 12345;
//    
//    cout << "Добро пожаловать в программу проверки пароля с огранниченным числом попыток!" << endl;
//    
//    while (popatka <= 3)
//    {
//        cout << endl << "Попытка новер: " << popatka;
//        if (popatka == 3) cout << endl << "Эта последняя ваша попытка!!!" << endl;
//        
//        cout << endl << "Введите пароль от системы: ";
//        cin >> pass;
//        if (pass == password)
//        {
//            cout << endl << "Вы успешно вошли в систему" << endl;
//            break;
//        }
//        else cout << endl << "Неудачная попытка. Повтори заново." << endl;
//        
//        popatka++;
//    }
//    if (popatka > 3) cout << endl << "Вы неудачник!!! Система не взломана!" << endl;    
//    
//    return 0;
//}