/* 
 * File:   Practika3GL9.cpp
 * Author: Туров Виталий
 *
 * Created on 6 Июль 2015 г., 13:09
 */

#include <stdio.h>
#include <iostream>
 static char *sot[]={"сто","двести","триста","четыреста",
             "пят","шест", "сем","восем","девят" };
 static char *desiat[]={" двадцать"," тридцать"," сорок"," пят"," шест",
                " сем"," восем"," девяносто" };
 static char *edm[]={""," один"," два"," три"," четыре"," пять"," шесть",
             " семь"," восемь",
             " девять"," десять"," один"," две"," три",
             " четыр"," пят"," шест"," сем"," восем"," девят" };
 static char *edw[]={" одна"," две" };
 static char *nmtr[]={" тысяч"," миллион"," миллиард", " триллион",
               " квадриллион", " квинтиллион", " сектиллион", " септаллион", NULL };
         // дальше не знаю, м.б. товарищи подскажут ...
 static char *nokm[]={"а","ов" };
 static char *nokt[]={"а","и","" };
/* ------------------ */
Propis2(unsigned long L, int n, char *s) // Число прописью
{ int R, ns, nd, r; char *p; unsigned long M;
 
   M = L / 1000;
   R = L % 1000;
   if (M != 0) Propis2(M, n+1, s);  // Рекурсия!
   if (R==0) return;
   ns = R / 100;
   if (ns)    sprintf(s+strlen(s), " %s", sot[ns-1]);
   if (ns>=5) strcat(s, "ьсот");
   R = R % 100;  // < 100
   nd = R / 10;  // Десятки
   if (nd >= 2) {
      strcat(s, desiat[nd-2]);
      if (nd>=5 && nd<=8) strcat(s, "ьдесят");
      R = R % 10;
   }
   r = sklon(R);
   if (n==1 && R>0 && R<3) p = edw[R-1];
   else                    p = edm[R];
   strcat(s, p);
   if (R > 10) strcat(s, "надцать");
   if (n > 0) {
     strcat(s, nmtr[n-1]);
     if     (n==1) strcat(s, nokt[r]);
     else if (r>0) strcat(s, nokm[r-1]);
   }
}
/*********************/
sklon(int dd)    /* Определение склонения числа */
{ int n, r;
 
    r = 2;
    n = dd % 100;
    if (n>4 && n<20) return(r);
    n = n % 10;
    if      (n==1)       r = 0;
    else if (n>1 && n<5) r = 1;
    return(r);
}
/* ------------------ */
long atol(char *b);
main()
{ char b[200], s[1000]; unsigned long L;
 
a: printf(">");
   gets(b);
   if (strlen(b)==0) return;
   s[0] = '\0';
   L = atol(b);
   Propis2(L, 0, s);
   printf("%s\n", s);
   goto a;
}
/**********************/