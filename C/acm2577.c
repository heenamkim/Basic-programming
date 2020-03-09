#include <stdio.h>

int main()
{
int a[3]={0};
int num[10]={0};
int list[100]={0};
int total=0;
//int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
for(int i=0;i<3;i++){
  scanf("%d\n",&a[i]);
  total=list[0]*list[1]*list[2];
  for (int j=0;j<10;j++){
    if (num[j+1]==list[j])
      num[j+1]++;
  printf("%d\n",num[j]);
    }
  }
}
