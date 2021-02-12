#include<stdio.h>
int main()
{
    int i,j,num1=1,num2=1,sum=0;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);


        if(n<3)
        {
            printf("%d %d ",num1,num2);
        }
        if(n>=3){
                printf("%d %d ",num1,num2);
           sum=num1+num2;
        num1=num2;
        num2=sum;
        printf("%d %d",num1,num1);
        }

        printf("\n");


}
