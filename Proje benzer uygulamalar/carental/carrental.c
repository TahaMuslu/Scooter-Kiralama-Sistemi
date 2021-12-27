#include<stdio.h>

#include<conio.h>

int gun,km,tutar;

char secim;

int main(){

    printf("Arabaniz Hangi Guruba Giriyor..\n");

    printf("(A veya a) => Arazi\n(B veya b) => Binek\n(S veya s) => Station\n(K veya k) => Spor\n");

    printf("********__________********\n");

    printf("Araba Tipi = ");

    scanf("%c",&secim);

    switch (secim)

    {

           case 'A' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*20+km*18;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 'a' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*20+km*18;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 'B' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*32+km*22;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 'b' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*32+km*22;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 'S' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*43+km*28;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 's' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*43+km*28;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 'K' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*51+km*36;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           case 'k' : printf("Arabayi Kac Gun Kullandiniz = "); scanf("%d",&gun);

           printf("Arabayla Kac Km Yol Gittiniz = "); scanf("%d",&km); tutar=gun*51+km*36;

           printf("********__________********\n"); printf("Odemeniz Gereken Tutar = %d TL’dir",tutar);break;

           }

           getch();

           return 0;

    }
