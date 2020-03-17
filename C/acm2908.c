#include <stdio.h>

int main(){
int A,B;
int a,b,c,d;
int total1=0,total2=0;
scanf("%d %d",&A,&B);
a=A%10;
b=A/10;
c=b%10;
d=b/10;
total1=d+(c*10)+(a*100);
a=B%10;
b=B/10;
c=b%10;
d=b/10;
total2=d+(c*10)+(a*100);
if (total1>total2)
  printf("%d",total1);
else if(total1<total2)
  printf("%d",total2);

}
