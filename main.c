#include <stdio.h>
#include <stdlib.h>
int game();
void main()
{
    game();


}
int game()
{
        char a[3][3]={
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    int x,y;
    for(x=0;x<3;x++)
    {
        printf("\t\t\t");
        for(y=0;y<3;y++)
        {
            printf("  %c  ", a[x][y]);
            if(y<2)printf("|");
        }
        printf("\n");
        if(x<2)printf("\t\t\t-----------------\n");
    }
    //game start
    printf("\nGame Instraction: \n");
    printf("1. Input a value from 1-9 for replace the position with '0' and 'X'\n");
    printf("2. '0' for player-1 and 'X' for player-2\n\n");
    int player[2],count,i,j,t=0, flag=0;
    char check;
    char temp[9]={'0','0','0','0','0','0','0','0','0'};

    for(count=0;count<9;)
    {
        for(i=0;i<2;i++)
        {
            t_again:
            printf("player-%d turn:", i+1);
            scanf("%c", &check);
            getchar();

            for(j=0;j<9;j++)
            {
                if(check==temp[j])
                {
                    printf("Already filup..!!\n");
                    goto t_again;
                }
            }
            if(check<'1'||check>'9')
            {
                printf("Wrong command..!!\n");
                goto t_again;
            }
            temp[t]=check;
            t++;
            //replacing
            for(x=0;x<3;x++)
            {
                for(y=0;y<3;y++)
                {
                    if(check==a[x][y])
                    {
                        if(i==0)a[x][y]='0';
                        else a[x][y]='X';
                    }

                }
            }
            //print again
            for(x=0;x<3;x++)
            {
                printf("\t\t\t");
                for(y=0;y<3;y++)
                {
                    printf("  %c  ", a[x][y]);
                    if(y<2)printf("|");
                }
                printf("\n");
                if(x<2)printf("\t\t\t-----------------\n");

            }
            //result part for player-1
            if(a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[1][0]=='0'&&a[1][1]=='0'&&a[1][2]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][2]=='0'&&a[1][2]=='0'&&a[2][2]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]=='0')
            {
                printf("\n----------Player-1 win------------\n");
                return 0;
                flag++;
            }
            //result part for player-2
            if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }
            else if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X')
            {
                printf("\n----------Player-2 win------------\n");
                return 0;
                flag++;
            }

            count++;

            if(count==7)break;
        }
        if(flag>0)return 0;

    }
    printf("--------Match draw...!!--------");
}
