#include<stdio.h>
#include<stdlib.h>
void cyclic(int arr[], int size){

    int j = 0;

        // Cyclic sort for numbers 0 to n
        while (j < size) {
            int correct_idx = arr[j];  // Direct index for 0 to n
            if (arr[j] < size && arr[j] != arr[correct_idx]) {
                int temp = arr[j];
                arr[j] = arr[correct_idx];
                arr[correct_idx] = temp;
            } else {
                j++;
            }
        }
}
int main()
{
    int size;
    printf("Enter the Number of elements in the array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter The Elements: \n ");
    for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array: \t");
    for(int i =0; i<size; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");

    cyclic(arr,size);

    printf("Sorted array: \t");
   
    for(int i = 0 ; i<size; i++)
    {
        printf("%d \t", arr[i]);
    }
}