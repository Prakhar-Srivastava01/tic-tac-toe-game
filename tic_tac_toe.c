#include <stdio.h>
void showBoard(char board[]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", board[7], board[8], board[9]);
}

int checkWinner(char board[]) {

    if(board[1]==board[2] && board[2]==board[3] && board[1]!=' ') return 1;
    if(board[4]==board[5] && board[5]==board[6] && board[4]!=' ') return 1;
    if(board[7]==board[8] && board[8]==board[9] && board[7]!=' ') return 1;

    if(board[1]==board[4] && board[4]==board[7] && board[1]!=' ') return 1;
    if(board[2]==board[5] && board[5]==board[8] && board[2]!=' ') return 1;
    if(board[3]==board[6] && board[6]==board[9] && board[3]!=' ') return 1;

    if(board[1]==board[5] && board[5]==board[9] && board[1]!=' ') return 1;
    if(board[3]==board[5] && board[5]==board[7] && board[3]!=' ') return 1;

    return 0;
}

int main() {

    char board[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int player = 1, pos, moves = 0;
    char symbol;
    int win = 0;

    printf("===== TIC TAC TOE GAME =====\n");
    printf("Player 1 : X\n");
    printf("Player 2 : O\n");
    printf("Positions are from 1 to 9\n");

    while(win == 0 && moves < 9) {

        showBoard(board);

        symbol = (player % 2 == 1) ? 'X' : 'O';

        printf("Player %d, enter position (1-9): ", player);
        scanf("%d", &pos);

        if(pos >= 1 && pos <= 9 && board[pos] == ' ') {
            board[pos] = symbol;
            moves++;
        } else {
            printf("Invalid position! Try again.\n");
            continue;
        }

        win = checkWinner(board);
        player++;
    }

    showBoard(board);

    if(win == 1)
        printf("🎉 Player %d wins!\n", player - 1);
    else
        printf("🤝 Match Draw!\n");

    return 0;
}
