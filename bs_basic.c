#include<stdio.h>

int bs(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
            break;
        } else if(arr[mid]<target){
            low=mid+1;
        } else if(arr[mid]>target){
            high=mid-1;
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

    int result=bs(n,arr,target);

    if(result!=-1){
        printf("%d found at index no.%d\n",target,result);
    } else{
        printf("Target element not found\n");
    }
    return 0;
}