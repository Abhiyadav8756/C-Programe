//cgange to farenheit to celcius
#include<stdio.h>
int main()
{
float F;
float c;
printf("Etner the tempearture in degree or farenheit");
scanf("%f",&F);
c=(F-32)*(5.0/9.0);
printf("celcius is %f \n",c);
return 0;
}
