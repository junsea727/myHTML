#include <stdio.h>

int main() {
    int num;

    printf("숫자를 입력하세요.\n");
    printf("0 : 가위\n");
    printf("1 : 바위\n");
    printf("2 : 보\n\n");
    printf("입력 >> ");
    
    scanf("%d", &num);

    switch(num) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
        default:
            printf("잘못된 입력입니다.\n");
            break;
    }

    return 0;
}
