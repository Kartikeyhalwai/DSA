#include<stdio.h>
#include<stdlib.h>
void bubble(int arr[], int size){

    for(int step =1; step<size; step++)
    {
        for(int i = 0; i<=size-step-1; i++)
        {
            if(arr[i]>=arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
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

    bubble(arr,size);

    printf("Sorted array: \t");
   
    for(int i = 0 ; i<size; i++)
    {
        printf("%d \t", arr[i]);
    }
}