#include <stdio.h>

int* selectionsort(int *arr, int length){
    int temp=0;
    int loc=0;
    for(int j=0;j<length-1;j++){
        int min=j;
        printf("%d번째\n",j+1);
        for(int i=j+1;i<length;i++){
            if (arr[min]>arr[i]){
                min=i;
                printf("min: %d\n", arr[i]);
            }   
        }
        printf("swap\n");
        temp=arr[j];
        arr[j]=arr[min];
        arr[min]=temp;
        for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
        }
        printf("\n");

    }
    return arr;
}


int main(){
    int arr[6]={5,2,4,6,1,3};
    selectionsort(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}