#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Sort.h"

void bubblesort(int size, int *data){
    int i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size - i - 1; j++){
            if(data[j] > data[j+1]){
                swap(&data[j], &data[j+1]);
            }
        }
        printarray(size, data);
    }
}

void main(){

    int size = 10;
    int *data = (int*)malloc(sizeof(int) * size);

    //generate random array
    generate_random_array(size, data);
    printf("original:\n");
    printarray(size, data);

    //sorting
    printf("sorting:\n");
    bubblesort(size, data);

    //result
    printf("result:\n");
    printarray(size, data);
}