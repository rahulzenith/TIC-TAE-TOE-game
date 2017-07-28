#include <stdio.h>
#include <conio.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void board();
int checkwin();

int main(){
int player=1,i,choice;
char mark;

do{
    board();
    if(player%2==0){
        player=2;
    }
    else{
        player=1;
    }
    printf("enter your choice player %d\n",player);
    xyz:;
    scanf("%d",&choice);

    if(player==1){
        mark='x';
    }
    else{
        mark='0';
    }

    if(choice==1&&square[1]=='1'){
        square[1]=mark;
    }
    else if(choice==2&&square[2]=='2'){
        square[2]=mark;
    }
     else if(choice==3&&square[3]=='3'){
        square[3]=mark;
    }
    else if(choice==4&&square[4]=='4'){
        square[4]=mark;
    }
     else if(choice==5&&square[5]=='5'){
        square[5]=mark;
    }
    else if(choice==6&&square[6]=='6'){
        square[6]=mark;
    }
    else if(choice==7&&square[7]=='7'){
        square[7]=mark;
    }
    else if(choice==8&&square[8]=='8'){
        square[8]=mark;
    }
    else if(choice==9&&square[9]=='9'){
        square[9]=mark;
    }
    else{
        printf("incorrect move\n");
        printf("enter your choice again player %d",player);
        goto xyz;
    }

    i=checkwin();
    player++;


}while(i==-1);

    if(i==1){
        printf("winner is player %d",--player);
        printf("  ----    --       --         -          --          ---               ----            -------------           ---\n");
        printf(" --     --   --    - -        -        --            -  --           ---  ---                -               ---\n");
        printf("--    ---    ---   -   -      -      ---             -    --        ---     ---              -             --\n");
        printf("--    ---    ---   -     -    -      ---             -  --         -------------             -               ----\n");
        printf("--    ---    ---   -       -  -      ---    ----     ---          ---         ---            -                   ---\n");
        printf(" --     --   --    -        - -        --   -   -    -  --       ---            ---          -                ---\n");
        printf("  ----    --       -         --          ----   -    -    --    ---              ---         -              ----\n");
    }
    }
    else{
        printf("the game is draw");
    }

    getch();
    return 0;
}
/*********************************************

FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 **********************************************/
int checkwin(){

if(square[1]==square[2]&&square[2]==square[3]){
    return 1;
}
else if(square[1]==square[4]&&square[4]==square[7]){
    return 1;
}
else if(square[4]==square[5]&&square[5]==square[6]){
    return 1;
}
else if(square[7]==square[8]&&square[8]==square[9]){
    return 1;
}
else if(square[2]==square[5]&&square[5]==square[8]){
    return 1;
}
else if(square[3]==square[6]&&square[6]==square[9]){
    return 1;
}
else if(square[1]==square[5]&&square[5]==square[9]){
    return 1;
}
else if(square[7]==square[5]&&square[5]==square[3]){
    return 1;
}
else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9'){
    return 0;
}

else {
    return -1;
}
}
/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 ********************************************************************/


void board(){
system("cls");
printf("\t\t\t\t\tWELCOME   TO   TIC TAE TOE   GAME\n\n\n");
printf("\t\t\t\t\tplayer 1:x and player 2:0\n\n\n\n");

 printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");

    printf("\t\t\t\t\t\t  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");

    printf("\t\t\t\t\t\t  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("\t\t\t\t\t\t     |     |     \n\n");

    /*******************************************************************
     END OF PROJECT
    ********************************************************************/

}
