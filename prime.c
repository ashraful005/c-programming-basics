#include <stdio.h>
int main() {

  int n=1,i;
  for(i=1;i<=2500;i++){
    if(n%1==0&&n%2==0&&n%3==0&&n%4==0&&n%5==0&&n%6==0&&n%7==0){
        printf("%d",n);
    }
    else{
        n++;
    }
    return 0;
  }





  return 0;
}

