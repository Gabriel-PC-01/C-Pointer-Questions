#include <stdio.h>



int main(){

    int smallest, currentValue;
    int *smallestP = &smallest, *currentValueP = &currentValue;
    
    printf("Type a negative number to finish program\n");

        printf("Choice a value:");
        scanf("%d", smallestP);
        *currentValueP= *smallestP;

    do {

        if(*smallestP > *currentValueP ){ *smallestP = *currentValueP; }
        printf("Choice a value:");
        scanf("%d", currentValueP);

    } while (*currentValueP!= -1);

    printf("The smallest value typed : %d ", *smallestP); 

    return 0;

}
