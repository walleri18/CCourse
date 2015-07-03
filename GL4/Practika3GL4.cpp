///* 
// * File:   Practika3GL4.cpp
// * Author: Туров Виталий
// *
// * Created on 3 Июль 2015 г., 9:59
// */
//
//#include <cstdlib>
//#include <iostream>
//#include <math.h>
//
//using namespace std;
////Прототипы
//double summa(double args1, double args2);
//double delition(double args1, double args2);
//double mult(double args1, double args2);
//double raznost(double args1, double args2);
//
//int main()
//{
//    char operation;
//    double args1, args2, result;
//    int vibor;
//        
//    cout << "Добро пожаловать в калькулятор!!!" << endl;
//    do
//    {
//    cout << "Введите арифметическую операцию: ";
//    cin >> operation;
//    
//    cout << endl << "Введите первый аргумент: ";
//    cin >> args1;
//    
//    cout << endl << "Введите второй аргумент: ";
//    cin >> args2;
//    
//    if (operation == '+') result = summa(args1, args2);
//    else if (operation == '-') result = raznost(args1, args2);
//    else if (operation == '*') result = mult(args1, args2);
//    else if (operation == '/') result = delition(args1, args2);
//    
//    cout << endl << "Результат выполнении операции: " << args1 << " " << operation << " " << args2 << " = " << result << endl;
//    
//    cout << "Повторить? (да - 1, нет - любая): ";
//    cin >> vibor;
//    }while(vibor == 1);
//    
//    return 0;
//}
//
//double summa(double args1, double args2)
//{
//    double summa = (args1 + args2);
//    return summa;
//}
//
//double raznost(double args1, double args2)
//{
//    double raznost = (args1 - args2);
//    return raznost;
//}
//
//double mult(double args1, double args2)
//{
//    double mult = (args1 * args2);
//    return mult;
//}
//
//double delition(double args1, double args2)
//{
//    while (args2 == 0) 
//    {
//        cout << "ОШИБКА!!! (ДЕЛЕНИЕ НА НОЛЬ!!!)" << endl << "Введите второй аргумент заново: ";
//        cin >> args2;
//    }
//    double delition = (args1 / args2);
//    return delition;
//}