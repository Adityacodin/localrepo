#include <stdio.h>
//#include <conio.h>

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

for(i = 1; i<size;i++){
int key = arr[i];
int j = i-1;

while(j>=0 && arr[j]>key){
arr[j+1] = arr[j];
j--;
}
arr[j+1] = key;
}

//print part
i=0;
printf("\nSORTED ELEMENTS AFTER INSERTION SORT\n");
for(i=0; i<size; i++){
printf("\narr[%d] : %d",i,arr[i]);
}

return 0;
}
