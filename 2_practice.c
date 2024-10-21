#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr1 = (int*)malloc(sizeof(int));
    int *ptr2 = (int*)malloc(4);

    scanf("%d %d",ptr1,ptr2);
    printf("%d + %d = %d\n",*ptr1, *ptr2, *ptr1 + *ptr2);
    printf("%d - %d = %d\n",*ptr1, *ptr2, *ptr1 - *ptr2);
    printf("%d * %d = %d\n",*ptr1, *ptr2, *ptr1 * *ptr2);
    printf("%d / %d = %d\n",*ptr1, *ptr2, *ptr1 / *ptr2);
}