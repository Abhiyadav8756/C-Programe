//Predicts the score whith the following condition
#include<stdio.h>
int main()
{
char grade;
float min_avg;
float curnt_avg;
float count;
float sc;


	printf("Enter your disired grade> \n");
scanf("%c",&grade);	
	printf("Enter minimum average requride > \n");
scanf("%f",&min_avg);
	printf("Enter current average in course>  \n");
scanf("%f",&curnt_avg);	
	printf("Enter how much the final counts as a percentage of the course grade> \n");
scanf("%f",&count);	
	sc=(min_avg-((1-(count/100))*curnt_avg))/(count/100);	
	printf("You need a score fo %f on the final to geat a B.%c \n",sc,grade);
	return 0;
	



}



