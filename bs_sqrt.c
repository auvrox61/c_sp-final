#include <stdio.h>
int sqrtInt(int x) {
    if(x == 0 || x == 1) return x;
    int low=1, high=x, result=0;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(mid <= x/mid) {  // Avoid overflow vs mid*mid <=x
            result = mid;
            low = mid+1;
        } else high=mid-1;
    }
    return result;
}
int main() {
    printf("%d\n", sqrtInt(16));  // 4
    printf("%d\n", sqrtInt(17));  // 4
    return 0;
}