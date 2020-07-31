#include<stdio.h>

int main()
{
    int n,i;
    int sumodd,sumeven;
    int counteven,countodd;
    int muleven,mulodd;
    while(1)
    {
        sumodd=0;
        sumeven=0;
        counteven=0;
        countodd=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                counteven++;
                if(counteven==1)
                {
                    sumeven=2;
                    muleven=2;
                }
                else
                {
                    muleven *= counteven*(counteven+1);
                    sumeven += muleven;
                }
            }
            else
            {
                countodd++;
                if(countodd==1)
                {
                    sumodd=1;
                    mulodd=1;
                }
                else
                {
                    mulodd *= countodd*countodd;
                    sumodd += mulodd;
                }
            }
        }
        printf("%d\n",-sumodd+sumeven);

    }
    return 0;
}
