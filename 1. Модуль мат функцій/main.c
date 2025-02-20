#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* array = createArray(size);
    if (array == NULL) {
        return -1;
    }
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
