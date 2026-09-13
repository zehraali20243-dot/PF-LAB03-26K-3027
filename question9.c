#include<stdio.h>
int main() {
int hours, membership_status;
float bill_amount, payable_bill, discount;
printf("enter bill amount");
scanf("%f",&bill_amount);
printf("enter hours");
scanf("%d", &hours);
printf("enter membership satus (1 or 2)");
scanf("%d", &membership_status);
if (hours >= 15 && hours <= 17) {
discount= discount + 20;
}
if (membership_status == 1) {
discount= discount + 10;
}
if (discount > 25) {
discount = 25;
}
discount = bill_amount *discount / 100;
payable_bill= bill_amount - discount;
printf("\nFinal Bill Rs. %.2f\n", payable_bill);
return 0;
}

