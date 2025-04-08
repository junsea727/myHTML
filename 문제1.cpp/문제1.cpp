#include <stdio.h>

int main() {
    int choice;

    printf("가위바위보 게임\n");
    printf("숫자를 입력하세요\n");
    printf("0: 가위\n1: 바위\n2: 보\n\n");
    printf("당신의 선택: ");

    scanf("%d", &choice);

    switch (choice) {
        case 0:
            printf("당신은 '가위'를 선택했습니다.\n");
            break;
        case 1:
            printf("당신은 '바위'를 선택했습니다.\n");
            break;
        case 2:
            printf("당신은 '보'를 선택했습니다.\n");
            break;
        default:
            printf("잘못된 입력입니다. 0, 1, 2 중에서 선택해주세요.\n");
            break;
    }

    return 0;
}
