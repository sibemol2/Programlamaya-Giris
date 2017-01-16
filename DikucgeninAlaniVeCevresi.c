 #include <stdio.h>

 int main () {
 
 int kenar1, kenar2,kenar3,cevre;
 float alan;

 printf("Birinici Kenari Giriniz: ");
 scanf("%d",&kenar1);
 printf("Ikinci Kenari Giriniz: ");
 scanf("%d",&kenar2);

 kenar3=sqrt(kenar1*kenar1+kenar2*kenar2);
 cevre=kenar1+kenar2+kenar3;
 alan=(float)kenar1*(float)kenar2/2;

 printf("Ucgenin alani = %.2f\n",alan);
 printf("Ucgenin cevresi = %d\n",cevre);

return 0;


 }
