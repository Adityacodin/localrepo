#include<stdio.h>
// #include<stdlib.h>

void printArr(int arr[], int low, int high){
    int i;
    printf("\n");
    for(i=low; i<=high; i++){
        printf("%d ",arr[i]);
    }
}

void merge(int arr[], int low, int mid, int high){
    int temp[high-low+1];
    int left = low;
    int right = mid+1;
    int k = 0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++] = arr[right++];
        }
    } 

    while(left<=mid){
        temp[k++] = arr[left++];
    }

    while(right<=high){
        temp[k++] = arr[right++];
    }

    int i;
    for(i=0;i<k; i++){
        arr[low+i] = temp[i];
    }

    printArr(arr,low,high);
}

void mergeSort(int arr[],int low, int high){
    if(low==high) {
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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

mergeSort(arr,0,size-1);

i=0;
printf("\nSORTED ELEMENTS AFTER MERGE SORT\n");
for(i=0; i<size; i++){
printf("\narr[%d] : %d",i,arr[i]);
}

return 0;
}
