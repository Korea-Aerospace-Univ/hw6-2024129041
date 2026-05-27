#include <stdio.h>

int main(void)
{
    char *p=nullptr, *q=nullptr;
    int maxcount=0, charcount=0;
    int N=10;
    char arr[10]={};
    for(p=arr;p<arr+N;p++){
        scanf("%c", p);
    }
    char maxchar=arr[0];
    for(p=arr;p<arr+N;p++){
        for(q=arr;q<arr+N;q++){
            if(*p==*q){
                charcount++;
            }
        }
        if(charcount>maxcount){
            maxcount=charcount;
            maxchar=*p;
        }
    charcount=0;
    }
    printf("%c %d", maxchar, maxcount);
    return 0;
}
