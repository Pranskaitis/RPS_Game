#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user;
    int val=0; // 1-win, 2-lost
    int computer = rand() % 5 + 1;
    char *comp;
    printf("%d",computer);
    if (computer==1)
    {
        comp="ROCK";
    }
    else if (computer==2)
    {
        comp="PAPER";
    }
    else if (computer==3)
    {
        comp="SCISSORS";
    }
    else if (computer==4)
    {
        comp="SPOCK";
    }
    else if (computer==5)
    {
        comp="LIZARD";
    }

    printf("******************* \n");
    printf("ROCK PAPER SCISSORS \n");
    printf("******************* \n\n");

    printf("1. ROCK \n");
    printf("2. PAPER \n");
    printf("3. SCISSORS \n");
    printf("4. SPOCK \n");
    printf("5. LIZARD \n");
    scanf("%d",&user);

    if ((user+2)%5==computer%5||(user+4)%5==computer%5)
    {
        val=1;
    }
    if ((user+1)%5==computer%5||(user+3)%5==computer%5)
    {
        val=2;
    }

    if (val==1)
    {
        printf("You won!!! Computer chose %s",comp);
    }
    if (val==2)
    {
        printf("You lost!!! Computer chose %s",comp);
    }
    if (val==0)
    {
        printf("You draw!!! Computer chose %s",comp);
    }

    return 0;
}
