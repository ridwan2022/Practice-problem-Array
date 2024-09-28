#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1+i;j<n;j++){
            if(a[i] == a[j]){
                printf("%d\n",a[i]);
                break;
            }
            break;
        }
    }
    return 0;
}
