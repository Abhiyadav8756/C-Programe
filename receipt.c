#include<stdio.h>
int main(){
float  total_purches;
float discount;
float total_discount;
float sales_tax;
float total_paid;
int choice;
printf("Case 1 for Teacher:");
printf("Case 2 for student:");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:

printf("Enter value of teacher total purches:");
scanf("%f",&total_purches);
if(total_purches>=100){
discount=0.12*total_purches;
discount=((discount*100)+0.5)/100;
total_discount=total_purches-discount;
total_discount=((total_discount*100)+0.5)/100;
sales_tax=0.05*total_discount;
sales_tax=((sales_tax*100)+0.5)/100;
total_paid=total_discount+sales_tax;
total_paid=((total_paid*100)+0.5)/100;
printf("\ntotal discount is:$%f",discount);
printf("\n Discounted amount is:$%f",total_discount);
printf("\n Sales tax is:$%f",sales_tax);
printf("\n Total paid amount is:$%f",total_paid);
}

else
{
discount=0.10*total_purches;
discount=((discount*100)+0.5)/100;
total_discount=total_purches-discount;
total_discount=((total_discount*100)+0.5)/100;
sales_tax=0.05*total_discount;
sales_tax=((sales_tax*100)+0.5)/100;
total_paid=total_discount+sales_tax;
total_paid=((total_paid*100)+0.5)/100;
printf("\ntotal discount is:$%f",discount);
printf("\n Discounted amount is:$%f",total_discount);
printf("\n Sales tax is:$%f",sales_tax);
printf("\n Total paid amount is:$%f",total_paid);
}

case 2:


scanf("$%f",&total_purches);
sales_tax=0.05*total_discount;
sales_tax=((sales_tax*100)+0.5)/100;
total_paid=total_discount+sales_tax;
total_paid=((total_paid*100)+0.5)/100;
printf("\n Sales tax is:$%f",sales_tax);
printf("\n Total paid amount is:$%f",total_paid);

}
return 0;
}

