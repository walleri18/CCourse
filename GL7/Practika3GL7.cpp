///* 
// * File:   Practika3GL7.cpp
// * Author: Туров Виталий
// *
// * Created on 5 Июль 2015 г., 16:17
// */
//
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
//struct Board
//{
//	char pusto = '_'; //переменная для обозначения пустоты в клетки
//	char nolik = '0'; //переменная для обозначения присутствия нолика в клетке
//	char krestik = 'x'; //переменная для обозначения присутствия крестика в клетке
//};
//
//struct Doska
//{
//	char kletka1 = '_';
//	char kletka2 = '_';
//	char kletka3 = '_';
//	char kletka4 = '_';
//	char kletka5 = '_';
//	char kletka6 = '_';
//	char kletka7 = '_';
//	char kletka8 = '_';
//	char kletka9 = '_';
//};
//
//struct Player
//{
//	char fisrt = ' ';
//	char second = ' ';
//};
//
//void BoardList(Doska doska);
//
//int main()
//{
//	setlocale(0, "");
//
//	Board board;
//	Doska doska;
//	Player player;
//
//	cout << "Добро пожаловать в игру крестики нолики для двух игроков!!!" << endl;
//	BoardList(doska);
//	cout << "Первый игрок, чем вы будите ходить? ";
//	cin >> player.fisrt;
//	if (player.fisrt == board.krestik)
//	{
//		player.second = '0';
//	}
//	else player.second = 'x';
//	cout << player.second << " " << player.fisrt;
//
//
//	cin.get();
//	cin.get();
//	return 0;
//}
//
//void BoardList(Doska doska)
//{
//	cout << endl << "Вид доски" << endl;
//	cout << doska.kletka1 << " " << doska.kletka2 << " " << doska.kletka3 << endl;
//	cout << doska.kletka4 << " " << doska.kletka5 << " " << doska.kletka6 << endl;
//	cout << doska.kletka7 << " " << doska.kletka8 << " " << doska.kletka9 << endl;
//}
