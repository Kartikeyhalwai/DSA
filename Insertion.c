#include<stdio.h>
#include<stdlib.h>
void insertion(int arr[], int size){

    for(int i = 1; i<size; i++)
    {
        int j = i;
        int key = arr[i];
        while(arr[j-1] >= key && j>=1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
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

    insertion(arr,size);

    printf("Sorted array: \t");
   
    for(int i = 0 ; i<size; i++)
    {
        printf("%d \t", arr[i]);
    }
}