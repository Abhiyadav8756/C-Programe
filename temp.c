//Program of calculating temperature
#include<stdio.h>
#include<math.h>
int main()
{
	float T;
	float hour;
	float min;
	float t;
	float totalmin;
			//Decler all the vairable
	printf("Enter no. of hours");
	scanf("%f",&hour);
	
	printf("Enter no. of min");
	scanf("%f",&min);
					//this is the formula
		totalmin=(hour*60)+min;
		t=totalmin/60;
		T=((4*(t*t))/(t+2))-20;
		
	printf("The Expected temp is%f\n",T);
	return 0;
}

 
