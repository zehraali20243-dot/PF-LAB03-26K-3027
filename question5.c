#include<stdio.h>
int main() {
    int no_of_people;
    float total_weight;
    printf("enter total no of poeple");
    scanf("%d", &no_of_people);
    printf("enter total combined weight");
    scanf("%f", &total_weight);
    if(no_of_people<=10 && total_weight<=1000) {
        printf("\nelevator can operate normally");
    }
    else if(no_of_people>10 && total_weight>1000) {
        printf("\nentry denied: exceeding both people limit and weight limit.");
    }
    else if(no_of_people>10) {
        printf("\nentry denied: exceeding people limit");
    }
    else {
        printf("\nentry denied: overweight");
    }
    return 0;
}
