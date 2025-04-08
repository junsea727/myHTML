#include <stdio.h>

int main() {
    int choice;

    printf("=== 가위 바위 보 게임 ===\n\n");
    printf("숫자를 입력하세요.\n");
    printf("0 : 가위\n");
    printf("1 : 바위\n");
    printf("2 : 보\n\n");
    printf("당신의 선택 : ");
    
    scanf("%d", &choice);

    printf("\n결과 : ");

    switch(choice) {
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
            printf("잘못된 입력입니다. (0 ~ 2 사이의 숫자만 입력하세요)\n");
            break;
    }

    return 0;
}
