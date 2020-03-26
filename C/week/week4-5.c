#include <stdio.h>
#include <math.h> //오차법위 주의할것! round사용하기!
// #include <cmath> c++할때 사용 오차법위 없음!!

int main()
{
    int n, k=0, count, j=0;
    int total=0,num=0, tmp;
    scanf("%d",&n);
    count = n; //count 는 n
    while (count != 0){ //count가 0이 아니면 반복
        count /=10; //count는 count/10
        j++; //j값 1씩 증가
     }

    for (int i=j-1; i>=0; i--) {
        // 정수 i는 j-1 부터 0보다 크보다 같을때 까지 1씩 감소
        tmp = (int)round(pow(10, i)); //tmp은 10의 i승
        num = n / tmp; //num는 n/tmp
        total += num*round(pow(10, k++)); //total은 num*10의 k승 만큼 더하기
        n = n % tmp; // n는 n 에 tmp 나눈 값의 나머지
    }
     printf("%d\n",total);
}
