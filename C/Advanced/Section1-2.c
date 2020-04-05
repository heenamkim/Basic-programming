#include <stdio.h>

int main()
{ // scanf 함수를 사용한 경우
    char name[30];

    scanf("%[^\n]s",&name);
    // 공백을 인식 하지 못하여 입력 할때 공백을 두면 그 전까지만 출력 한다
    // 공백도 포함 하여 출력 하고 싶을땐 [^\n]를 사용하면 출력 가능하다

    printf("%s",name);


}
int main()
{ // gets 함수를 사용한 경우
    char name[30];
    gets(name); // gets안에 입력받을 변수값을 넣어준다
    fflush(stdin); // 출력버퍼를 지워주는 함수


    printf("%s",name);


}
