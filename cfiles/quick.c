#include<stdio.h>

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j= high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1) i++;

        while(arr[j]>pivot && j>=low+1) j--;

        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[],int start, int end){
    if(start<end){
        int pIndex = partition(arr,start,end);
        quickSort(arr,start,pIndex-1);
        quickSort(arr,pIndex+1,end);
    }
}
int main(){

printf("Enter no. of elements to be sorted : ");
int size;
scanf("%d",&size);
int arr[size];

//input part
int i;
for(i=0; i<size; i++){
printf("\nEnter value of arr[%d] : ",i);
scanf("%d",&arr[i]);
}

quickSort(arr,0,size-1);

i=0;
printf("\nSORTED ELEMENTS AFTER QUICK SORT\n");
for(i=0; i<size; i++){
printf("\narr[%d] : %d",i,arr[i]);
}

return 0;
}
