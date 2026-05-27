
#include <stdio.h>

int main(void) 
{
    int *p=nullptr, *q=nullptr;
    int arr1[20]={}, arr2[20]={};
    int N=0;
    scanf("%d", &N);
    for(p=arr1;p<arr1+N;p++){
        scanf(" %d", p);
    }
    for(p=arr2;p<arr2+N;p++){
        scanf(" %d", p);
    }
    q=arr2+N-1;
    for(p=arr1;p<arr1+N;p++){//forfor?
        printf("%d ", *p+*q);
        q--;
    }
    return 0;
}
