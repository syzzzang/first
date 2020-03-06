#include <stdio.h>

void ascendingselectionsort(int *arr, int length){
    int temp=0;
    int min=0;
    for(int j=0;j<length-1;j++){
        min=j;
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
}
void descendingselectionsort(int *arr, int length){
    int temp=0;
    int max=0;
    for(int i=0;i<length-1;i++){
        max=i;
        printf("%d번째\n",max);
        for(int j=i+1;j<length;j++){
            if(arr[max]<arr[j]){
                max=j;
                printf("max: %d\n",arr[max]);
            }
        }
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
        printf("swap\n");
        for(int i=0;i<length;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}


int main(){
    int arr[6]={5,2,4,6,1,3};
    int length=sizeof(arr)/sizeof(int);
    ascendingselectionsort(arr,length);
    printf("----------");
    printf("\n");
    descendingselectionsort(arr,length);
    
}