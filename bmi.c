#include<stdio.h>
int main(){
float weight;
float height;
{
float bmi=calculatebmi(weight,height);
bmi=(703*weight)/(height*height);
return bmi;
}
printf("Enter your weight in pound:");
scanf("%f",&weight);
printf("Enter your height in inches:");
scanf("%f",&height);
float bmi=calculatebmi(weight,height);
printf("BMI: is %.1lf\n",bmi);
if(bmi<18.5){
printf("Weight status is : Underweight\n");
}
else if(bmi<25.0){
printf("Weight status is : Normal\n");
}
else if(bmi<30.0){
printf("Weight status is : overweight\n");
}
else{
printf("Weight status is: obese\n");
}
}


