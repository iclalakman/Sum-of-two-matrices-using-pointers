#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *array1,*array2;

    printf("How many elements you have? ");
    scanf("%d",&n);

    //Creating array 1 and 2//
    array1 = malloc(n*sizeof(int));
    if (array1 == NULL){
        printf("Failed to allocate memory.");
        exit(1);
    }
    array2 = malloc(n*sizeof(int));
    if (array2 == NULL){
        printf("Failed to allocate memory.");
        exit(1);
    }

    //Printing arrays//
    int i=0;
    for (i=0; i<n; i++){
        printf("Enter array-1 element [%d]: ",i+1);
        scanf("%d",&array1[i]);
    }
    for (i=0; i<n; i++){
        printf("Enter array-2 element [%d]: ",i+1);
        scanf("%d",&array2[i]);
    }
    for (i=0; i<n; i++){
        printf("%d\n",array1[i]+array2[i]);
    }

    free(array1);
    free(array2);

    return 0;
}