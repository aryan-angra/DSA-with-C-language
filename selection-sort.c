#include<stdio.h>
int main(){
    int arr[10];
    int i,j,temp,n;
    printf("Enter the number of elements to sort : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After sorting, array is : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}