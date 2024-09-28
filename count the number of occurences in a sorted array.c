#include<stdio.h>
#define max 1000
int main(){
    int i,x,count =0;
    int arr[max] = {1,1,2,2,2,2,3,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Input the number which has to be counted occurrence:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]== x){
            count++;
        }
    }
    printf("%d occurs %d times",x,count);


return 0;
}
