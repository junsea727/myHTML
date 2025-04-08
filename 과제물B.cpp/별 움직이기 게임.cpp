#include <stdio.h>

int main() {
    int w = 5, h = 5;
    int x = 2, y = 2;  
    char move;

    while (1) {
        
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (i == y && j == x)
                    printf("* ");
                else
                    printf("O ");
            }
            printf("\n");
        }

        printf("\n이동(w↑ a← s↓ d→, q:종료) : ");
        scanf(" %c", &move);

        
        if (move == 'q') {
            printf("게임 종료!\n");
            break;
        }

        
        if (move == 'w' && y > 0) y--;
        else if (move == 's' && y < h - 1) y++;
        else if (move == 'a' && x > 0) x--;
        else if (move == 'd' && x < w - 1) x++;
        else printf("이동 불가!\n");

        printf("\n");
    }

    return 0;
}
