#include<stdio.h>
int main() {
int membership_type; 
int time_slot, base_rate, final_fees, discount;
printf("enter membership type number");
printf("1=student, 2=regular, 3=senior citizen");
scanf("%d", &membership_type);
printf("enter time slot");
printf("1=morning, 2=evening");
scanf("%d", &time_slot);

switch(membership_type) {
    case 1:
    // student
    base_rate=2000;
    break;
    case 2:
    // regular
    base_rate=3500;
    break;
    case 3:
    // senior citizens
    base_rate=2500;
    break;
    default:
    printf("invalid membership type");
    return 0;
}

switch(time_slot) {
    case 1: 
    // morning
    discount= base_rate*0.15;
    final_fees= base_rate - discount;
    printf("\ntime slot: morning - 15%% discount applied");
    break;
    case 2:
    // evening
    discount=0;
    final_fees= base_rate;
    printf("\ntime slot: evening - no discount");
    break;
    default:
    printf("invalid time slot");
    return 0;

}


    return 0;
}
