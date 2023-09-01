#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void correctMessage( void )
{
    srand(time(0));
    int bla = rand()%4;
    switch(bla)
    {
        case 1 : printf("Very good!\n");
        break;
        case 2 : printf("Excellent!\n");
        break;
        case 3 : printf("Nice Work!\n");
        break;
        case 0 : printf("Keep up the good work!\n");
        break;
    }
}
void incorrectMessage( void )
{
    srand(time(0));
    int blu = rand()%4;
    switch(blu)
    {
        case 1 : printf("No. Please try again.\n");
        break;
        case 2 : printf("Wrong. Try once more.\n");
        break;
        case 3 : printf("Don't give up!\n");
        break;
        case 0 : printf("No. Keep trying.\n");
        break;
    }


}
void multiplication( void )
{
    int answer;
    srand(time(0));
    int x = rand()%10;
    int y = rand()%10;
    printf("How much is %d times %d?\n",x,y);
    scanf("%d",&answer);
    if(answer==x*y)
    {
        correctMessage();
    }
    else
    {
        incorrectMessage();
    }

}




int main()
{
    int key;
    do
    {
        multiplication();

        printf("Press any number to continue...(Enter -1 to end)\n");
        scanf("%d",&key);
    }while(key != -1);


    return 0;
}
