///* 
// * File:   Practika4GL4.cpp
// * Author: Туров Виталий
// *
// * Created on 3 Июль 2015 г., 10:20
// */
//
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
//void clear();
//
//int main() 
//{
//    char login1[100], login2[100], login3[100], login4[100], login[100];
//    int pass1, pass2, pass3, pass4, pass;
//    int vibor;
//    
//    cout << "Система проверки пароля!" << endl;
//    do
//    {
//    cout << "Установка пароля!" << endl;
//    cout << "Логин первого пользователя: ";
//    cin >> login1;
//    cout << endl << "Пароль первого пользователя: ";
//    cin >> pass1;
//    
//    clear();
//    
//    cout << "Логин второго пользователя: ";
//    cin >> login2;
//    cout << endl << "Пароль второго пользователя: ";
//    cin >> pass2;
//    
//    clear();
//    
//    cout << "Логин третьего пользователя: ";
//    cin >> login3;
//    cout << endl << "Пароль третьего пользователя: ";
//    cin >> pass3;
//    
//    clear();
//    
//    cout << "Логин четвёртого пользователя: ";
//    cin >> login4;
//    cout << endl << "Пароль четвёртого пользователя: ";
//    cin >> pass4;
//    
//    clear();
//    
//    cout << "Форма входа" << endl;
//    cout << "Введите логин: ";
//    cin >> login;
//    cout << endl << "Введите пароль: ";
//    cin >> pass;
//    
//    clear();
//    
//    if (login == login1 && pass == pass1) cout << "Вы успешно вошли в систему первого пользователя!";
//    else if (login == login2 && pass == pass2) cout << "Вы успешно вошли в систему второго пользователя!";
//    else if (login == login3 && pass == pass3) cout << "Вы успешно вошли в систему третьего пользователя!";
//    else if (login == login4 && pass == pass4) cout << "Вы успешно вошли в систему четвёртого пользователя!";
//    else cout << "Вы не вошли в систему, какого либо пользователя!";
//    
//    cout << endl << "Повторить программу? (да - 1, нет - любую): ";
//    cin >> vibor;
//    }while(vibor == 1);    
//    
//    return 0;
//}
//
//void clear()
//{
//    for (int i = 0; i < 1000; i++) cout << endl;
//}