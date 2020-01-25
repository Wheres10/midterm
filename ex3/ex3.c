#include <stdio.h>
int main()
{
    unsigned long long int x;
    int a;
    unsigned long long int max;
    unsigned long long int min;
    x=1;
    a=0;
    while(x!=0)
    {
        x=x<<1;
        a=a+1;
    }
    min=0;
    max=~min;
    printf ("unsigned long long int is size of :%d\n",a);
    printf("the max is:%llu\n",max);
    printf("the min is:%llu\n",min);
}
