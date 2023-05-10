// Hazrat Ali
// University Of Scholars
#include<stdio.h>
int main()
{
    int n,i;
    int count=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("\nNo");
    }
    else if(n==2)
    {
        printf("\nYes");
    }
    else
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }

        }
        if(count==0)
        {
            printf("\nYes");
        }
        else
        {
            printf("\nNo");
        }
    }
    return 0;
}
