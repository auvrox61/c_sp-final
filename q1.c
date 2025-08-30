//First & last occurrence and count occurence in sorted array

#include<stdio.h>

int firstOcc(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            res=mid;
            high=mid-1;
        } else if(arr[mid]<target){
            low=mid+1;
        } else if(arr[mid]>target){
            high=mid-1;
        }
    }
    return res;
}

int lastOcc(int n,int arr[],int target){
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            res=mid;
            low=mid+1;
        } else if(arr[mid]<target){
            low=mid+1;
        } else if(arr[mid]>target){
            high=mid-1;
        }
    }
    return res;
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
    int first=firstOcc(n,arr,target);
    if(first!=-1){
        printf("First occurence is at index no.%d\n",first);
    } else{
        printf("System Error\n");
    }
    int last=lastOcc(n,arr,target);
    if(last!=-1){
        printf("Last occurence is at index no.%d\n",last);
    } else{
        printf("System Error\n");
    }
    int occurence=last-first+1;
    printf("%d\n",occurence);
    return 0;
}