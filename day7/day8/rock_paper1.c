/*
    10  34  50  2   5  ---> min 3
*/
#include<stdio.h>
int main(){
    int arr[10]={10,34,50,2,5};
    int equals = 3;

    for(int i=0;i<5;i++){
        if(arr[i]<equals){
            equals=arr[3];
        }
    }
    printf("The position of element is %d",equals);
    return 0;
}