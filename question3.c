#include<stdio.h>
int main() {
int account_type;
float bank_balance, interest, annual_interest;
printf("enter account type");
printf("\n1=savings, 2=current, 3= fixed deposite");
scanf("%d", &account_type);

printf("enter account balance");
scanf("%f", &bank_balance);
switch(account_type) {
  case 1: if (bank_balance>100000) {
    interest= 0.04; 
  } 
  else {
    interest= 0.02;
  }
  printf("account type: savings\n");
  break;
    
  case 2:
  interest= 0;
  printf("account type: current\n");
  break;
  case 3:
  interest= 0.08;
  printf("account type: fixed deposite\n");
  break;
  default:
  printf("invalid account type!");
}
  annual_interest= interest * bank_balance;
  printf("annual interest earned : Rs.%.2f\n", annual_interest);
  return 0;
}