/* 
 * File:   Practika3GL7.cpp
 * Author: Туров Виталий
 *
 * Created on 5 Июль 2015 г., 16:17
 */

#include <cstdlib>
#include <iostream>

using namespace std;

enum Board
{
    pusto = 0, //переменная для обозначения пустоты в клетки
    nolik = 1, //переменная для обозначения присутствия нолика в клетке
    krestik = 2 //переменная для обозначения присутствия крестика в клетке
};

enum Doska
{
    kletka1 = Board.pusto,
    kletka2 = Board.pusto,
    kletka3 = Board.pusto,
    kletka4 = Board.pusto,
    kletka5 = Board.pusto,
    kletka6 = Board.pusto,
    kletka7 = Board.pusto,
    kletka8 = Board.pusto,
    kletka9 = Board.pusto
};

enum Player
{
    fisrt = 0,
    second = 0
};

void BoardList();

int main()
{
    cout << "Добро пожаловать в игру крестики нолики для двух игроков!!!" << endl;
    
    BoardList();
    
    
    
    
    return 0;
}

void BoardList()
{
    cout << endl << "Вид доски" << endl;
    cout << Doska.kletka1 << " " << Doska.kletka2 << " " << Doska.kletka3 << endl;
    cout << Doska.kletka4 << " " << Doska.kletka5 << " " << Doska.kletka6 << endl;
    cout << Doska.kletka7 << " " << Doska.kletka8 << " " << Doska.kletka9 << endl;
}