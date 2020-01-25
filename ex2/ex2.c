#include <stdio.h>
int main()
{
    float a,b,d;

    char c;

    a=0;
    b=0;

    while ((c=getchar())!=' '){
        a=a * 10 + c - '0';
    }

    while ((c=getchar())!=' '){
        b=b * 10 + c - '0';
    }

    c=getchar();
    switch(c){
        case'+':
        d=a+b;
        printf("The expression has a number of %.1f\n",d);
        break;
        case'-':
        d=a-b;
        printf("The expression has a number of %.1f\n",d);
        break;
        case'*':
        d=a*b;
        printf("The expression has a number of %.1f\n",d);
        break;
        case'/':
        if(b==0){
            printf("Error:connot divide a number by 0");
            break;
        }
        else
        {
            d=a/b;
            printf("The expression has a number of %.1f\n",d);
        }
        
}
return 0;
}
