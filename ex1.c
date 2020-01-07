#include <stdio.h>
int main()
{
    char c;
    int x,y;
    x=y=0;
    printf("put in:");
    while ((c=getchar ())!='\n'){
        if (c=='a'||c=='A')++x;
        else if(c=='0')++y;
    }
    printf("The number of a is :%d and the number of 0is :%d\n",x,y);
    return 0;
}
