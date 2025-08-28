#include<stdio.h>

int firstOcc(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    int val=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            val=mid;
            high=mid-1;
        } else if(arr[mid]<target){
            low=mid+1;
        } else if(arr[mid]>target){
            high=mid-1;
        }
    }
    return val;
}

int lastOcc(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    int val=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            val=mid;
            low=mid+1;
        } else if(arr[mid]<target){
            low=mid+1;
        } else if(arr[mid]>target){
            high=mid-1;
        }
    }
    return val;
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
    int res1=firstOcc(n,arr,target);
    int res2=lastOcc(n,arr,target);
    int res=res2-res1+1;
    printf("%d\n",res);
    return 0;
}