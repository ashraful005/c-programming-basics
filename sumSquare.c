
#include <stdio.h>
int main() {
int n,s, s1=0, s2, temp=0;
for(n=1;n<=100; n++)
{
    s1 = s1+ n*n;
    temp = temp + n;
}
s2=temp*temp;
s=s2-s1;
printf("%d",s);

return 0;
}

