#include <stdio.h>
#include <time.h>
#include "snake.c"
#include"tictac.c"
#include"quiz.c"
int main(){
    system("color 02");
	    int opt;

    do{
        system("cls");


        printf("VNIT\t\t\t\t Welcome to VNIT game arcade \n");
		printf("Nagpur\t\t\t\t Choose the game you wanna play :) \n\n\n");
        printf(" \t\t\t\t 1. Quiz Game \n "
               "\t\t\t\t 2. Snake Game  \n "
               "\t\t\t\t 3. TicTacTo Game \n "
               "\t\t\t\t 4. Exit \n\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d", &opt);

        switch (opt)
        {
            case 1:
				quiz();
            case 2:
                snake();
            case 3:
                tictac();

            case 4:
                printf("Thank you  We hope to see you again :) \n");
                exit(0);
            default:
                printf("[!!] Invalid Input, Try Again \n");
                break;
        }
    }while(opt!=4);
}


