#include <stdio.h>

void insertionsort(int *arr,int length ){
    int i,j;
    int key;
    for(i=1;i<length;i++){
        key=arr[i];
            for(j=i-1;j>=0;j--){
                if(arr[j]>key){
                    arr[j+1]=arr[j];
                }else{
                    break;
                }
            }
            arr[j+1]=key;
    }
}

int main(){
    int arr[6]={5,2,4,6,1,3};
    int length=sizeof(arr)/sizeof(int);
    insertionsort(arr,length);
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }

}