#include <stdio.h>
int main(){
 int watt; 
 int lumens;
 printf("Enter your watts:");
 scanf("%d",&watt);
 switch(watt){
 	case 15:
 	lumens=125;
 	break;
 	case 25:
 	lumens=215;
 	break;
  	case 40:
 	lumens=500;
 	break;
 	case 60:
 	lumens=880;
 	break;
 	case 75:
 	lumens=1000;
 	break;
 	case 100:
 	lumens=1675;
 	break;
 	default:
 printf("Enter Valid watts");
 }
 printf("The watt is %d and lemens is %d",watt,lumens);
 }
