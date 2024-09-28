#include<stdio.h>
int main(){
    int i,n,j,temp;
    printf("Input number of array elements:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j]= temp;
            }
    }
    }
    printf("The sorted array in ascending order is given below:\n");
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }


    return 0;

}
