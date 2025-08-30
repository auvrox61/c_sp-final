#include<stdio.h>

int rotatedSA(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        } else if(arr[low]<=arr[mid]){
            if(arr[low]<=target&&target<arr[mid]){
                high=mid-1;
            } else{
                low=mid+1;
            }
        } else if(arr[mid]<=arr[high]){
            if(arr[mid]<=target&&target<arr[high]){
                low=mid+1;
            } else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int result=rotatedSA(n,arr,target);
    if(result!=-1){
        printf("Element is at index no. %d\n",result);
    } else{
        printf("Error\n");
    }
    return 0;
}