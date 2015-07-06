/* 
 * File:   Practika3GL9.cpp
 * Author: Туров Виталий
 *
 * Created on 6 Июль 2015 г., 13:09
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char *itonumeral_ru( int n, size_t size, char *buf );
 
int main()
{
    char *str;
    char *buf;
    int choice;
    while(1)
    {
        printf("Vvedite chislo:\t");
        scanf("%u", &choice);
        str = itonumeral_ru(choice, 256, buf);
        printf("%s\n", str);
    }
    return 0;
}
 
char *itonumeral_ru( int n, size_t size, char *buf )
{
    char *one[] = {"","один ","два ","три ","четыре ","пять ","шесть ","семь ","восемь ","девять ",
                  "десять ","одиннадцать ","двенадцать ","тринадцать ","четырнадцать ","пятнадцать ",
                  "шестнадцать ","семнадцать ","восемнадцать ","девятнадцать " };
    char *ten[] = {"","", "двадцать ", "тридцать ", "сорок ", "пятьдесят ", "шестьдесят ", "семьдесят ", 
                  "восемьдесят ", "девяносто " };
    char *hundred[] = {"","сто ","двести ", "триста ", "четыреста ", "пятьсот ", "шестьсот ", 
                      "семьсот ", "восемьсот ", "девятьсот " };
    char *thouOne[] =  {"","одна ","две ","три ","четыре ","пять ","шесть ","семь ","восемь ","девять ",
                  "десять ","одиннадцать ","двенадцать ","тринадцать ","четырнадцать ","пятнадцать ",
                  "шестнадцать ","семнадцать ","восемнадцать ","девятнадцать " };                     
    char *thousand[] = {"тысяч ", "тысяча ", "тысячи ", "тысячи ", "тысячи ", "тысяч " ,"тысяч ", "тысяч ",
                "тысяч ","тысяч ","тысяч ","тысяч ","тысяч ","тысяч ","тысяч ","тысяч ","тысяч ","тысяч ","тысяч "
                "тысяч "};
    buf = malloc(size);
    sprintf(buf, "%u", n);
    int len = strlen(buf);
    int temp, temp2;
        switch(len)
{
    case 1:
        sprintf(buf,"%s", one[n]);
        break;
    case 2:
        if(n < 20)
        {
            sprintf(buf,"%s", one[n]);
        }
        else if(n < 100)
        {
            if((n%10)==0) sprintf(buf,"%s", ten[n/10]);
            else sprintf(buf,"%s%s", ten[n/10], one[n%10]);
        }
        break;
    case 3:
        temp = n/100;
        n -= (n/100)*100;
        if(n < 20)
        {
            sprintf(buf,"%s%s", hundred[temp], one[n]);
            
        }
        else if(n < 100)
        {
            if((n%10)==0) sprintf(buf,"%s%s", hundred[temp], ten[n/10]);
            else sprintf(buf,"%s%s%s", hundred[temp], ten[n/10], one[n%10]);
        }
        break;
    case 4:
        temp = n/1000;
        n -= (n/1000)*1000;
        sprintf(buf,"%s%s", thouOne[temp], thousand[temp]);
        temp = n/100;
        n -= (n/100)*100;
        if(n < 20)
        {
            strncat(buf, hundred[temp], 30);
            strncat(buf, one[n], 15);
        }
        else if(n < 100)
        {
            if((n%10)==0){
                 strncat(buf, hundred[temp], 30);
                 strncat(buf, ten[n/10], 30); 
             }
            else {
                strncat(buf, hundred[temp], 30);
                strncat(buf, ten[n/10], 30); 
                strncat(buf, one[n%10], 30);
            }
        }
        break;
    case 5:
        temp = n/1000;
        n -= (n/1000)*1000;
        if(temp<20){
            sprintf(buf,"%s%s", thouOne[temp], thousand[temp%10]);
        }
        else if(temp < 100)
        {
            if((temp%10)==0) sprintf(buf,"%s%s", ten[temp/10], thousand[temp%10]);
            else sprintf(buf,"%s%s%s", ten[temp/10], thouOne[temp%10], thousand[temp%10]);
        }
        temp = n/100;
        n -= (n/100)*100;
        if(n < 20)
        {
            strncat(buf, hundred[temp], 30);
            strncat(buf, one[n], 30);
            
        }
        else if(n < 100)
        {
            if((n%10)==0){
                 strncat(buf, hundred[temp], 30);
                 strncat(buf, ten[n/10], 30); 
             }
            else {
                strncat(buf, hundred[temp], 30);
                strncat(buf, ten[n/10], 30); 
                strncat(buf, one[n%10], 30);
            }
        }
        break;
    case 6:
        temp2 = n/1000;
        n -= (n/1000)*1000;
        
        temp = temp2/100;
        temp2 -=temp*100;
        
        if(temp2<20){
            sprintf(buf,"%s%s%s", hundred[temp], thouOne[temp2], thousand[temp2]);
        }
        else if(temp2 < 100)
        {
            if((temp%10)==0) sprintf(buf,"%s%s%s",hundred[temp], ten[temp2/10], thousand[temp2%10]);
            else sprintf(buf,"%s%s%s%s", hundred[temp],ten[temp2/10], thouOne[temp2%10], thousand[temp2%10]);
        }
        temp = n/100;
        n -= (n/100)*100;
        if(n < 20)
        {
            strncat(buf, hundred[temp], 30);
            strncat(buf, one[n], 30);
            
        }
        else if(n < 100)
        {
            if((n%10)==0){
                 strncat(buf, hundred[temp], 30);
                 strncat(buf, ten[n/10], 30); 
             }
            else {
                strncat(buf, hundred[temp], 30);
                strncat(buf, ten[n/10], 30); 
                strncat(buf, one[n%10], 30);
            }
        }
        break;
}
    
    
    return buf;                                
}