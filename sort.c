#include <stdio.h>

void shift_element (int *arr, int i)
{
    int* j;
    for (j = (arr+i-1); j >=arr; j--) {
       *(j+1) = *(j);
    }
}

void insertion_sort(int* arr, int len){
    int i, j, element;
    for (i = 1; i < len; i++)
    {
        element = *(arr+i);
        j = i-1;
        while (j>=0 && *(arr+j)>element)
        {
            j--;
        }
        if(j!=i-1){
            shift_element(arr+j+1, i-j-1);
            *(arr+j+1) = element;
        }
    }
}