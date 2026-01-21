#include <stdio.h>

char board[9];

void init() {
    for (int i = 0; i < 9; i++)
        board[i] = '1' + i;
}

void display() {
    printf("\n %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[6], board[7], board[8]);
}

int checkWin() {
    int win[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };

    for (int i = 0; i < 8; i++)
        if (board[win[i][0]] == board[win[i][1]] &&
            board[win[i][1]] == board[win[i][2]])
            return 1;

    for (int i = 0; i < 9; i++)
        if (board[i] != 'X' && board[i] != 'O')
            return 0;

    return -1;
}

int main() {
    int player = 1, pos, status;
    char mark;

    do {
        init();
        player = 1;

        do {
            display();
            mark = (player == 1) ? 'X' : 'O';
            printf("\nPlayer %d enter position: ", player);
            scanf("%d", &pos);

            if (pos < 1 || pos > 9 || board[pos-1] == 'X' || board[pos-1] == 'O') {
                printf("Invalid Move\n");
                continue;
            }

            board[pos-1] = mark;
            status = checkWin();
            player = (player == 1) ? 2 : 1;

        } while (status == 0);

        display();

        if (status == 1)
            printf("\nPlayer %d wins\n", (player == 1) ? 2 : 1);
        else
            printf("\nGame Draw\n");

        printf("\nPlay Again? (1/0): ");
        scanf("%d", &status);

    } while (status);

    return 0;
}
