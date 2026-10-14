#include <stdio.h>

#define VECTOR_SIZE 4


int main(){

    int vectorInt[VECTOR_SIZE] = {1, 2, 3, 4}, *integerP = vectorInt;
    char vectorChar[VECTOR_SIZE] = {'h', 'o', 'm', 'e'}, *characterP = vectorChar;
    long vectorLong[VECTOR_SIZE] = {10, 20, 30, 40}, *longP = vectorLong;

    for(int i = 0; i < VECTOR_SIZE; i++ ){

        printf("vector char position %d : %c\n", i, *(characterP+ i) );
        printf("position %d address : %d\n", i, characterP+  i );
    }

    puts("\n");

    for(int i = 0; i < VECTOR_SIZE; i++ ){

        printf("vector int position %d : %d\n", i, *(integerP + i) );
        printf("position %c address : %d\n", i, integerP +  i );
    }

    puts("\n");

    for(int i = 0; i < VECTOR_SIZE; i++ ){

        printf("vector long position %d : %d\n", i, *(longP+ i) );
        printf("position %ld address : %d\n", i, longP+  i );
    }

    puts("\n");

    printf("Each pointer have a adress jump equal size of that pointer points to\n");
    return 0;
}
