///* 
// * File:   Practika7GL5.cpp
// * Author: Туров Виталий
// *
// * Created on 3 Июль 2015 г., 12:28
// */
//
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
//void list();
//void clear();
//
//int main()
//{
//    int N1 = 0, N2 = 0, N3 = 0, input;
//    cout << "Добро пожаловать в программу опроса." << endl;
//    list();
//    cout << "Введите ваш ответ: ";
//    cin >> input;
//    while(input > 0 && input < 4)
//    {
//        if (input == 1) N1++;
//        else if (input == 2) N2++;
//        else N3++;
//        clear();
//        list();
//        cin >> input;
//    }
//    cout << "Результаты опроса: " << endl << "За ННГУ им. Лобачевского проголосовало: " << N1 << endl << "За Политех им. Алексеева проголосовало: " << N2 << endl << "За строительную академию проголосовало: " << N3 << endl;
//    cin >> input;//для красоты
//    return 0;
//}
//
//void list()
//{
//    cout << endl << "Какой университет вы предпочитаете?" << endl;
//    cout << "1. ННГУ им. Лобачевского" << endl << "2. Политех им. Алексеева" << endl << "3. Строительная академия" << endl;
//}
//
//void clear()
//{
//    for (int i = 0; i < 1000; i++) cout << endl;
//}