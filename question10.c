#include<stdio.h>
int main() {
int heart_rate;
float temperature;
printf("enter heart rate:");
scanf("%d", &heart_rate);
printf("enter body temperature:");
scanf("%f",&temperature);
if(heart_rate>120|| temperature>39) {
    printf("triange level: critical-immediate attension\n");
}
else if(heart_rate>=100 && heart_rate<=120 && temperature>=37.7 && temperature<=39) {
    printf("triange level: urgent\n");
}
else {
    printf("triange level: normal");
}

    return 0;
}
