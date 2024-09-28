#include<stdio.h>
int main(){
    int a0=0,a1=0,a2=0,i;
    int a[10]={1,1,0,1,2,0,1,2,2,1};
    for(i=0;i<10;i++){
        if(a[i]==0){
            a0++;
        }
        else if(a[i]==1){
            a1++;
        }
        else if(a[i]==2){
            a2++;
        }
    }
    int n=0;
    for(i=0;i<a0;i++){
        a[n++]=0;
    }
     for(i=0;i<a1;i++){
        a[n++]=1;
    }
     for(i=0;i<a2;i++){
        a[n++]=2;
    }
    printf("Sorted array elements are:");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
return 0;

}
