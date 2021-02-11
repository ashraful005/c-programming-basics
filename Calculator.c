#include<Stdio.h>
int main()
{
    int a=3,b=9;
    char sign;
    printf("Enter a sign:");
    scanf("%c",&sign);
    switch(sign){
    case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
    case '%':
        printf("%d % %d = %d",a,b,a%b);
        break;
    default:
        printf("Not a valid sign");

    }
    return 0;
}
