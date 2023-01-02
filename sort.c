#include <stdio.h>

#define LENGTH 50

void shift_element(int *arr, int i);

void insertion_sort(int *arr, int len);

int main(){
    int i;
    int arr[LENGTH];
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, LENGTH);
    for (i = 0; i < LENGTH; i++)
    {
        if (i == LENGTH-1)
        {
            printf("%d", *(arr+i));
        }
        else{
            printf("%d,", *(arr+i));
        }
    }
    return 0;
}
void shift_element (int *arr, int i)
{
    int* j;
    for (j = (arr+i-1); j >=arr; j--) {
       *(j+1) = *(j);
    }
}

void insertion_sort(int *arr, int len){
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