/* 
 * File:   Practika3GL9.cpp
 * Author: Туров Виталий
 *
 * Created on 6 Июль 2015 г., 13:19
 */

#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
int n;
string s;
cin >> n;
if(n==1000){
    s="тысяча";
    }else{
    s="";
    switch(n/100){
        case 1:s="сто";break;
        case 2:s="двести";break;
        case 3:s="триста";break;
        case 4:s="четыреста";break;
        case 5:s="пятьсот";break;
        case 6:s="шестьсот";break;
        case 7:s="семьсот";break;
        case 8:s="восемьсот";break;
        case 9:s="девятьсот";break;
    }switch((n%100)/10){
        case 2:s=s+" двадцать";break;
        case 3:s=s+" тридцать";break;
        case 4:s=s+" сорок";break;
        case 5:s=s+" пятьдесят";break;
        case 6:s=s+" шестьдесят";break;
        case 7:s=s+" семьдесят";break;
        case 8:s=s+" восемьдесят";break;
        case 9:s=s+" девяносто";break;
    }
    if(n%100>=10&n%100<20){
        switch(n%100){
            case 10:s=s+" десять";break;
            case 11:s=s+" одиннадцать";break;
            case 12:s=s+" двенадцать";break;
            case 13:s=s+" тринадцать";break;
            case 14:s=s+" четырнадцать";break;
            case 15:s=s+" пятнадцать";break;
            case 16:s=s+" шестнадцать";break;
            case 17:s=s+" семнадцать";break;
            case 18:s=s+" восемнадцать";break;
            case 19:s=s+" девятнадцать";break;
        }
        }else{
            switch(n%10){
            case 1:s=s+" один";break;
            case 2:s=s+" два";break;
            case 3:s=s+" три";break;
            case 4:s=s+" четыре";break;
            case 5:s=s+" пять";break;
            case 6:s=s+" шесть";break;
            case 7:s=s+" семь";break;
            case 8:s=s+" восемь";break;
            case 9:s=s+" девять";break;
            }
        }
    }
cout << s << endl;
return 0;
}