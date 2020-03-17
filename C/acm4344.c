#include <stdio.h>

int main(){
int test;
scanf("%d",&test);
for (int i=0;i<test;i++){
  int avg=0,total=0;
  int people;
  scanf("%d",&people);
  int num[people];
  for (int j=0;j<people;j++){
    scanf("%d",&num[j]);
    total+=num[j];
    }
    avg=total/people;
    int count=0;
  for (int k=0;k<people;k++){
    if (avg<num[k])
        count++;
      }
      printf("%.3f%%\n",(double)count*100/people);
    }
}
