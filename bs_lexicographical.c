#include<stdio.h>
#include<string.h>

int bsLex(int n,char arr[][20],char target[20]){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int cmp=strcmp(arr[mid],target);
        if(cmp==0){
            return mid;
        } else if(cmp<0){
            low=mid+1;
        } else if(cmp>0){
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char arr[n][20];
    for(int i=0;i<n;i++){
        fgets(arr[i],sizeof(arr[i]),stdin);
        arr[i][strcspn(arr[i],"\n")]='\0';
    }
    char target[20];
    fgets(target,sizeof(target),stdin);
    target[strcspn(target,"\n")]='\0';
    int result=bsLex(n,arr,target);
    if(result!=-1){
        printf("Target element is at index no.%d\n",result);
    } else{
        printf("Target element not found\n");
    }
    return 0;
}