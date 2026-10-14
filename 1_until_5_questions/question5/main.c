#include <stdio.h>

#define SIZE 1000


int main(){

   char aString[SIZE], *characterP = aString;
   int count;


    printf("type a sentence");
    fgets(characterP, SIZE, stdin);


    //-1 to desconsider \n
    for(count = -1; *(characterP + count) !=  '\0' ; count++){}

    printf("String size : %d\n", count);
}
