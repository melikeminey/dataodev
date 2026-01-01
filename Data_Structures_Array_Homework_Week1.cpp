// traversal, inserting, deleting in array

#include <stdio.h>
#include <stdlib.h>


void printArray(int array[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void reverse(int array[], int n)
{
	int temp;
    for(int i = 0; i < n / 2; i++) 
	{
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}

int insertElement(int array[], int n, int index, int value) {
    int i;

    if (n >= 10) {
        printf("Array is full\n");
        return n;
    }

    if (index < 0 || index > n) {
        printf("invalid value\n");
        return n;
    }

    for (i = n; i > index; i--) {
        array[i] = array[i - 1];
    }

    array[index] = value;
    return n + 1;
}


int deleteElement(int array[], int n, int index) {
    int i;

    if (n <= 0) {
        printf("Arrau is empty\n");
        return n;
    }

    if (index < 0 || index >= n) {
        printf("invalid value\n");
        return n;
    }

    for (i = index; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    return n - 1;
}

int main()
{
	int array[10] = {1,8,9,12,5};
	int n = 5;
	
	printf("First form of Array");
	printArray(array, n);
	
	reverse(array, n);
	printf("Reverse form of Array");
	printArray(array,n);
	
	
	n = insertElement(array, n, 2, 99);
    printf("Element inserting in Array");
    printArray(array, n);
    
    n = deleteElement(array, n, 3);
    printf("element deleting in Array");
    printArray(array, n);
	
	
	
	
	
	return 0;
}

