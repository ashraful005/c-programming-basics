
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 1, t2 = 2,sum=0, temp;
  for(n=1;t2<=4000000;++n){
    printf("%d ",t2);
    temp=t1+t2;
    if(t2%2==0){
        sum=sum+t2;
    }
    t1=t2;
    t2=temp;
  }
  printf("%d", sum);
  return 0;


}
