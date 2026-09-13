#include<stdio.h>
int main() {
int plan_choice;
int minutes;
float total_bill;
printf("enter plan choice plan 1-4:");
scanf("%d", &plan_choice);
if(plan_choice != 3) {
printf("enter minute used");
scanf("%d",&minutes);
} 
switch(plan_choice) {
case 1: total_bill=500; 
    if(minutes>1000)  {
    total_bill = total_bill + (minutes-1000)*2;
printf("\ntotal bill: Rs. %.2f", total_bill);
    }
break;
case 2: total_bill=800;
if(minutes>2000) {
total_bill= total_bill + (minutes-2000)*2;
printf("\ntotal_bill: Rs.%.2f", total_bill);
break;

case 3: total_bill=1200;
printf("\ntotal_bill: Rs.%.2f", total_bill);
break;

case 4: total_bill= minutes*1;
printf("\ntotal_bill: Rs.%.2f", total_bill);
break;
default:
printf("\ninvalid plan choice");
}
return 0;
}
