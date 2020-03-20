#include <stdio.h>
#include <math.h> //오차법위 주의할것! round사용하기!
// #include <cmath> c++할때 사용 오차법위 없음!!

int main()
{
    int n, k=0, count, j=0;
    int total=0,num=0, tmp;
    scanf("%d",&n);
    count = n;
    while (count != 0){
        count=count/10;
        j++;
     }

    for (int i=j-1; i>=0; i--) {

        tmp = (int)round(pow(10, i));
        num = n / tmp;
        total += num*round(pow(10, k++));
        n = n % tmp;
    }
     printf("%d\n",total);
}
