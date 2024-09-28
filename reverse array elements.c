#include<stdio.h>
int main(){
    int i,temp,n;
    printf("Input number of array elements:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(i=0; i<(n/2); i++){
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }

    printf("Reversed array is:\n");
    for(i=0; i<n; i++){
        printf("%d\n",array[i]);
    }
    return 0;

}
