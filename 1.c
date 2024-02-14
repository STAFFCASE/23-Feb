#include <stdio.h>
#include <stdlib.h>

struct player1
{
    int id;
    char batsman_name[100];
    int runs;
    int wk;
    int balls;
};
struct player1 T1[11];
struct player2
{
    int id;
    char batsman_name[100];
    int runs;
    int wk;
    int balls;
};
struct player2 T2[11];
int bats = 0;
int bats2 = 0;
int bowler=0;
int bow_ball;
int toss;
int score;
int chess_score;
int wickets;
int over;
int over;
int run;


int main(void)

{
    FILE *fp;
    int i;
    int choice;

    fp = fopen("MI.txt", "r");
    

    for (i = 0; i < 11; i++)
    {
        fgets(T1[i].batsman_name, 100, fp);
    }
fclose(fp);

    fp = fopen("RCB.txt", "r");
   
    
    for (i = 0; i < 11; i++)
    {
        fgets(T2[i].batsman_name, 100, fp);
    }

    fclose(fp);
    printf("MI team\n");
    for (i = 0; i < 11; i++)
    {
        T1[i].id = i + 1;
        printf("%s", T1[i].batsman_name);
    }
    printf("\n");
    printf("\n");
    printf("RCB Team\n");
    for (i = 0; i < 11; i++)
    {
        T2[i].id = i + 1;
        printf("%s", T2[i].batsman_name);
    }
    printf("\n");
    printf("Enter Overs \n");
    scanf("%d", &over);
     return 0;

/* printf("\nrun:");
        scanf("%d",&run);
        
        switch (run)
        {
        case 0:
            
            break;
        case 1:
            
            break;
        case 2:
         
            break;
        case 3:
        
            break;
        case 4:
         
            break;
        case 6:
         
            break;
        default:
            break;
        } */
}