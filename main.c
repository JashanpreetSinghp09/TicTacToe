#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkWinner();
void draw_board();

int main() {
    int player = 1,i,user_choice;

    char mark;  // O and X

    do{
        draw_board();
        player = (player % 2) ? 1: 2;
        printf("Player %d, enter your choice : ",player);
        scanf("%d",&user_choice);

        mark = (player == 1) ? 'X' : 'O';

        if(user_choice == 1 && square[1] == '1')
            square[1] = mark;
        else if(user_choice == 2 && square[2]== '2')
            square[2] = mark;
        else if(user_choice == 3 && square[3]== '3')
            square[3] = mark;
        else if(user_choice == 4 && square[4]== '4')
            square[4] = mark;
        else if(user_choice == 5 && square[5]== '5')
            square[5] = mark;
        else if(user_choice == 6 && square[6]== '6')
            square[6] = mark;
        else if(user_choice == 7 && square[7]== '7')
            square[7] = mark;
        else if(user_choice == 8 && square[8]== '8')
            square[8] = mark;
        else if(user_choice == 9 && square[9]== '9')
            square[9] = mark;
        else{
            printf("Invalid Choice!! ");
            player--;
            getch();
        }
        i = checkWinner();
        player++;

    } while (i == -1);
    if(i == 1){
        printf("Player %d Won, Congrats!!!",--player);
    } else{
        printf("Game Draw!!");
    }
    getch();
    return 0;
}


int checkWinner(){
    if(square[1] == square[2]&& square[2] == square[3])
        return 1;
    else if(square[4]== square[5]&& square[5] == square[6])
        return 1;
    else if(square[7]== square[8] && square[8] == square[9])
        return 1;
    else if(square[1]== square[4] && square[4] == square[7])
        return 1;
    else if(square[2]== square[5] && square[5] == square[8])
        return 1;
    else if(square[3]== square[6] && square[6] == square[9])
        return 1;
    else if(square[1]== square[5] && square[5] == square[9])
        return 1;
    else if(square[3]== square[5] && square[5] == square[7])
        return 1;
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0; // condition for a draw
    else
        return -1;
}

void draw_board(){
    system("cls");
    printf("\n\n\t TIC TAC TOE \n\n");
    printf("Player1 (X) - Player2 (O) \n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1],square[2],square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4],square[5],square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7],square[8],square[9]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("     |     |     \n");
}

