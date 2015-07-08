#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game(){
    int rand_int(int a, int b);
    srand(time(NULL));
    int die1,die2,die3,die4,roll,roll2;
    die1=rand_int(1,6);
    die2=rand_int(1,6);
    roll=die1 + die2;
    printf("Number %d is rolledn",roll);
    if(roll==7 || roll==11)
    {
        printf("Good play,you win!n");
        return;
    }
    else if(roll==2 || roll==3 || roll==12)
    {
        printf("Sorry my friend,you lose!n");
        return;
    }
    else
    {
        do{
            die3=rand_int(1,6);
            die4=rand_int(1,6);
            roll2=die3 + die4;
            printf("Number %d is rolledn",roll2);
            if(roll2==roll)
            {
                printf("Good play,you win!");
                return;
            }
        }
        while(roll2 != 7);
        printf("Sorry my friend,you lose!");
    }
}
int rand_int(int a, int b){
    return rand()%(b-a+1)+a;
    fflush(stdin);
    getch();
}
int main(void){
    char sebi;
    char andrei;
    do{
        printf("nLet's play craps! Press 1 if you wanna play or 2 if you don't wanna play:");
        sebi=getchar();
        andrei=getchar();
        if(sebi=='1' || andrei=='1') game();
    }
    while(sebi=='1' || andrei=='1');
    system("pause");
    return 0;
}