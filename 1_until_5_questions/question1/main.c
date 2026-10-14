#include <stdio.h>




int main(){

    int value1, value2, result;
    int *pointer1 = NULL, *pointer2 = NULL, *resultPointer = NULL;

    pointer1  = &value1;
    pointer2  = &value2;
    resultPointer = &result;


    printf("choice the value1 to be sum:");
    scanf("%d", pointer1);

    printf("choice the value2 to be sum:");
    scanf("%d", pointer2);

    *resultPointer  = (*pointer1) + (*pointer2);

    printf("The sum result : %d \n", *resultPointer );
    printf("The result vitual memory address : %p", resultPointer );

    return 0;

}
