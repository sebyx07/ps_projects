#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game();
int crapGame();
int rand_int(int a, int b);
void childrenSimulation();
void coinGame();
int powerOfTwo(int x);

int main (){
    int option = 0;
    while(1){
        printf("Choose:nPress 1 for coinGamenPress 2 for children simulationnPress 3 for crap gamen...nPress 0 for exitnOption:");
        scanf("%d",&option);
        switch(option){
            case 1 :
            coinGame();
            break;
            case 2:
            childrenSimulation();
            break;
            case 3:
            crapGame();
            break;
            case 0 :
            return 0;
            default:
            printf("Unknown commandn");
        }
    }
    return 0;
}

void coinGame(){
    double n=100000000;
    int i = 0,j=0;
    int fortune;
    int p=5;
    double sum=0;
    srand (time(NULL));
    for (i=1;i<n;i++){
        fortune=0;
        j=1;
        while(fortune == 0){
            if( (rand() % 10 )<p){
                fortune = powerOfTwo(j);
            }
            else{
                j=j+1;
            }
        }
        sum = sum +fortune;
    }
    printf("Coin game result : %f ",sum
}

int powerOfTwo(int x){
    int i;
    int returnf=1;
    if(x == 0)
    return 1;
    for(i=0;i<x;i++){
        returnf = returnf *2;
    }
    return returnf;
}

void childrenSimulation(){
    int n=100000;
    int p =5;
    int totals[n],people[n];
    int i,j,boy,boys,girls,child,rascals;
    int average1,average2,difference;
    int sum1=0,sum2=0;
    srand (time(NULL));
    for (i=1;i<=n;i++);{
        boy=0;
        child=0;
        while(boy==0){
            if( (rand() % 10)<p){
                child =child+1;
            }
            else{
                child = child+1;
                boy=1;
            }
        }
        totals[1]=child;
    }
    for(i=1;i<=n;i++){
        sum1 = sum1 + totals[i];
    }
    average1=sum1
    for(j=1;j<=n;j++){
        boys=0;
        girls = 0;
        rascals = 0;
        while((boys+girls) != 2){
            if( (rand() % 10) < p){
                rascals = rascals+1;
                girls = 1;
            }
            else{
                rascals = rascals+1;
                boys = 1;
            }
        }
        people[j] = rascals;
    }
    for(j=1;j<n;j++){
        sum2 += people[j];
    }
    average2 = sum2
    difference = sum2 - sum1;
    printf("Average1 %dn", average1);
    printf("Average2 %dn", average2);
    printf("Difference %dn", difference);
}

int crapGame(){
    char leonte;
    char kristina;
    do{
        printf("nLet's play craps! Press 1 if you wanna play or 2 if you don't wanna play:");
        leonte=getchar();
        kristina=getchar();
        if(leonte=='1' || kristina=='1') game();
    }
    while(leonte=='1' || kristina=='1');
    system("pause");
    return 0;
}

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
        printf("Sorry ,you lose!n");
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
        printf("Sorry ,you lose!");
    }
}

int rand_int(int a, int b){
    return rand()%(b-a+1)+a;
    fflush(stdin);
    getch();
}