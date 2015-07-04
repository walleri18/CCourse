///* 
// * File:   Practika2GL5.cpp
// * Author: Туров Виталий
// *
// * Created on 3 Июль 2015 г., 11:09
// */
//
//#include <cstdlib>
//#include <iostream>
//
//using namespace std
//
//void spisok();
//void list(int n);
//
//int main() 
//{
//    int menu;
//    
//    cout << "Добро пожаловать в программу списков!" << endl;
//    spisok();
//    while(true)
//    {
//    cout << endl << "Введите номер списка: ";
//    cin >> menu;
//    cout << endl;
//    
//    if (menu > 5 || menu < 1) spisok();
//    else list(menu);
//    }   
//       
//    return 0;
//}
//
//void spisok()
//{
//    cout << "1. Саров" << endl;
//    cout << "2. Москва" << endl;
//    cout << "3. Нижний Новгород" << endl;
//    cout << "4. Санкт-Петербург" << endl;
//    cout << "5. ННГУ им. Лобачевского" << endl;
//}
//
//void list(int n)
//{
//    if (n == 1) cout << "Вы выбрали Саров";
//    else if (n == 2) cout << "Вы выбрали Москву";
//    else if (n == 3) cout << "Вы выбрали Нижний Новгород";
//    else if (n == 4) cout << "Вы выбрали Санкт-Петербург";
//    else if (n == 5) cout << "Вы выбрали университет ННГУ им. Лобачевского";
//}