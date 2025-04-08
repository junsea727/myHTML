#include <stdio.h>

int main() {
    char ch;

    printf("문자 하나를 입력하세요 : ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a':
            printf("a를 입력하셨군요\n");
            break;
        case 'b':
            printf("b를 입력하셨군요\n");
            break;
        case 'c':
            printf("c를 입력하셨군요\n");
            break;
        default:
            printf("그 이외의 문자\n");
            break;
    }

    return 0;
}
