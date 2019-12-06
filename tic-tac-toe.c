#include <stdio.h>
int accept(char symb);
int display();
int winner(char X);
int sample();
int tiematch();
int i,j,check;
int w;
int count=0;
unsigned char a[3][3];
static int n[10],f=0;
char player1[200],player2[200];
int main(int argc, char *argv[])
{
        int check,i,j,count=1;
        char sym1='X',sym2='O';
        printf("Enter the name of Player 1:");
        scanf("%s",&player1);
        printf("\nEnter the name of Player 2:");
        scanf("%s",&player2);

        //set to NULL
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            {
            a[i][j]=='\0';
            }
        }



        while(check!=-1)
        {
            if(w==1)
        {
            exit(0);
        }
        else
        {
                sample();
                accept(sym1);
                check=winner(sym1);
                display();
        }
        if(w==1)
        {
            exit(0);
        }
        else
        {
                accept(sym2);
                check=winner(sym2);
                display();
        }
        }

        //}while(check!=0);
        return 0;
}
int display()
{
        /*int c,b;
        for(c=0;c<3;c++)
        {
                printf("******************\n");
                for(b=0;b<3;b++)
                {
                        printf("| %c  ",a[c][b]);
                }
                printf("\n");
        }
        */
    printf("\n\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", a[0][0],a[0][1],a[0][2] );
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", a[1][0],a[1][1],a[1][2]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", a[2][0],a[2][1],a[2][2]);
    printf("\t\t     |     |     \n\n");
}
int accept(char symb)
{

        int num,p;
                if(symb=='X')
        {
                printf("Enter the number %s:-\n",player1);
                count++;
        }
        else
        {
                printf("Enter the number %s:-\n",player2);
                count++;
        }
        acc:
            scanf("%d",&num);
          for(p=0;p<9;p++)
                   {
                           if(n[p]==num)
                           {
                                  printf("Choice already done!Enter new choice...:-\n");
                                   goto acc;
                           }
       }
                n[f]=num;
                f++;
        switch(num)
        {
                case 1:
                                a[0][0]=symb;
                                break;
                case 2:
                                a[0][1]=symb;
                                break;
                case 3:
                                a[0][2]=symb;
                                break;
                case 4:
                                a[1][0]=symb;
                                break;
                case 5:
                                a[1][1]=symb;
                                break;
                case 6:
                                a[1][2]=symb;
                                break;
                case 7:
                                a[2][0]=symb;
                                break;
                case 8:
                                a[2][1]=symb;
                                break;
                case 9:
                                a[2][2]=symb;
                                break;
                default:
                printf("Enter valid choice!\n");
                goto acc;
                                break;
        }
}
int winner(char X)
{
        int flag=0,tie;
        if(a[0][0]==X && a[0][1]==X && a[0][2]==X)
        flag=1;
        else if(a[1][0]==X && a[1][1]==X && a[1][2]==X)
        flag=1;
        else if(a[2][0]==X && a[2][1]==X && a[2][2]==X)
        flag=1;
        else if(a[0][0]==X && a[1][1]==X && a[2][2]==X)
        flag=1;
        else if(a[0][2]==X && a[1][2]==X && a[2][0]==X)
        flag=1;
        else if(a[0][1]==X && a[1][1]==X && a[2][1]==X)
        flag=1;
        else if(a[0][0]==X && a[1][0]==X && a[2][0]==X)
        flag=1;
        else if(a[0][2]==X && a[1][2]==X && a[2][2]==X)
        flag=1;
        else if(a[0][2]==X && a[1][1]==X && a[2][0]==X)
    flag=1;
        if(flag==1)
        {
                if(X=='O')
                {
                    system("CLS");
                        printf("Congratulations %s!!!You WIN!!!\n",player2);
                        w=1;
                        return -1;
                }
                else
                {
                    system("CLS");
                        printf("Congratulations %s!!!You WIN!!!\n",player1);
                        w=1;
                        return -1;
                }
        }
        else
        {
             if(count==9)
            {
                printf("MATCH IS TIE\n");
             //   printf("Do you want to continue?\n0.Yes \n1.No\n");
            //    scanf("%d",&check);

            }
        }

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='\0')
            {
                tie=1;
            }
            else
            {
                tie=0;
            }
        }
    }
int tiematch()
{
    if(count==9)
    {
        printf("MATCH IS TIE");
        exit(0);
    }
}
}
int sample()
{
        int count=0,i,j;
        printf("\nSAMPLE:\n");
        printf("\t\t     |     |     \n");
    printf("\t\t  1  |  2  |  3 \n");
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  4  |  5  |  6 \n");
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  7  |  8  |  9 \n");
    printf("\t\t     |     |     \n\n");
}

