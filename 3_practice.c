    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        int *ptr = (int*)malloc(5 * sizeof(int));

        for (int i = 0; i < 5; i++){
            scanf("%d",ptr+i);
        }
        printf("%d %d %d\n",ptr[0],ptr[2],ptr[4]);
    }