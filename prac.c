#include<stdio.h>
void SelectionSort(int arr[],int n){
    int min,i,j;
    for( i=0;i<n-1;i++){
        min =i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    printf("Enter number of elements you want\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("after sorting\n");
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}