#include<stdio.h>
int main() {
float entrytest, fscpercent, combinedscore;
printf("\nenter entry test no \nfsc percentage:");
scanf("%f %f", &entrytest,&fscpercent);
printf("combined score: %.2f\n", combinedscore = (entrytest * 0.50)+(fscpercent * 0.50));
if (combinedscore>=80) {
  printf("you got computer science");
}
else if(combinedscore>=65 && combinedscore<=79) {
  printf("you got software engineering");
}
else if (combinedscore>=50 && combinedscore<=64) {
  printf("you got information technology");
}
else {
  printf("you're rejescted");
}
return 0;
}
