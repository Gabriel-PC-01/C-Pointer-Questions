 #include <stdio.h>


typedef unsigned char uchar;

int main(){

    uchar value1, value2;
    uchar *pointer1 = NULL, *pointer2 = NULL, *tmp  = NULL;

    pointer1 = &value1;
    pointer2 = &value2;

    printf("choice the value1 :");
    scanf("%hhu", pointer1);

    printf("choice the value2 :");
    scanf("%hhu", pointer2);

    //swap values
    tmp = pointer1;
    pointer1 = pointer2;
    pointer2 = tmp;

    printf("Value1 : %d\n", *pointer1);
    printf("value2 : %d", *pointer2);


    return 0;

} 

