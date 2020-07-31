#include<stdio.h>

int main()
{
    int x,y;
    int b,i,j,sum,mul;
    while(1)
    {
        scanf("%d %d",&x,&y);
        for(b=2;b<=10;b++)
        {
            if((y%10)>=b)continue;
            sum = y%10;
            j= y/10;
            mul = b;
            for(;j>0;)
            {
               if((j%10)>=b)break;
               sum += (j%10)*mul;
               mul = mul *b;
               j/=10;
            }
            if(sum==x)
            {
                printf("%d ",b);
            }
        }
        printf("\n");
    }
    return 0;
}
