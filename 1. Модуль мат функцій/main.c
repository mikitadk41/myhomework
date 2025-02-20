#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"

int main() {
    int size;
    
    printf("Size of Arr: ");
    scanf("%d", &size);

    int* array = createArray(size);
    
    printArray(array, size);


    int* remixedArray = remixArray(array, size);
    if (remixedArray == NULL) {
        free(array);
        return -1; 
    }
    
    printArray(remixedArray, size);
    free(array);
    free(remixedArray);

    return 0;
}
