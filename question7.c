#include<stdio.h>
int main() {
int policy_status, age;
float claimed_amount, approved_amount;
printf("enter policy status and vehicle age");
scanf("%d,%d", &policy_status,&age);
printf("enter claimed amount");
scanf("%f", &claimed_amount);
if(policy_status==0) {
    printf("\nclaimed amount is rejected");
}
else if(age<10 && claimed_amount<=5000000) {
    approved_amount=claimed_amount;
    printf("\nclaimed amount is approved");
}
else if (age>=10 && age<=15) {
    approved_amount= claimed_amount*0.5;
    printf("\nclaimed amount is 50%% approved");
}
else{
    printf("\nclaimed amount is rejected");
}
return 0;
}
