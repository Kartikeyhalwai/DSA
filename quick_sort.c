#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int left, int right)
{
    int lb = left;
    int ub = right;
    int pivot = arr[left];

    while(lb<ub){
        while(arr[lb]<=pivot && lb<right)
        {
            lb++;
        }
        while(arr[ub] > pivot)
        {
            ub--;
        }
        if(lb<ub)
        {
            swap(&arr[lb], &arr[ub]);
        }
    }
    swap(&arr[left], &arr[ub]);
    return ub;
}
void quick_sort(int arr[], int left, int right){
   
   if(left<right){

    int pi = partition(arr, left, right);
    quick_sort(arr,left,pi-1);
    quick_sort(arr, pi+1, right);

   }
    
}
int main(){
    int n;

    printf("\nEnter the number of elements to store in the array: ");
    scanf("%d",&n);
    
    int arr[n];

    printf("\nEnter the elements: \n");
    for(int i =0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Unsorted array: ");

    for(int i =0; i<n ; i++){
        printf("%d \t", arr[i]);
    }

    quick_sort(arr,0,n-1);

    printf("\nSorted array: \n");
    for(int i =0; i<n ; i++){
        printf("%d \t", arr[i]);
    }
}