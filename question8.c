#include<stdio.h>
int main() {
int zone, speed_limit, fine, speed;
printf("enter zone type (1-school zone, 2=highway, 3=residential area)");
scanf("%d", &zone);
printf("enter speed");
scanf("%d", &speed);
switch (zone) {
case 1: // school zone
speed_limit=30;
break;
case 2: // highway
speed_limit=100;
break;
case 3: // residential area
speed_limit=50;
break;
}
if (speed- speed_limit>20) {
fine=2000;
printf("final fine: Rs.%d\n", fine);
}
else if (speed>speed_limit) {
fine=1000;
printf("final fine: Rs.%d\n", fine);
}
else {
printf("no violation no fine");
}
return 0;
}