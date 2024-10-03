#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void checkbet(int king,int queen,int joker,int bet)
{
    srand(time(0));
    char arr[3]={'K','Q','J'};

    printf("\n\n Shuffling under progress......");
    for(int i=0;i<10;i++)
    {
        int x=rand()%3;
        int y=rand()%3;
        char c;
        c=arr[x];
        arr[x]=arr[y];
        arr[y]=c;
    }
    int c=0;
    for(int i=0;i<3;i++)
    {
        switch(i)
        {
            case 0:
        if(arr[king-1]=='K')
            c++;
        break;
    case 1:
        if(arr[queen-1]=='Q')
            c++;
        break;
    default:
        if(arr[joker-1]=='J')
            c++;
        }

    }
    if(c==0)
    {
        cash-=bet;
        printf("Oops your guess is wrong.\nNet cash:%d ",cash);
    }
    else if(c==1)
    {
       printf("CONGRATS! %d of your guesses was right.\nNet cash:%d ",c,cash);
    }
    else
    {
        cash+=(c-1)*bet;
        printf("CONGRATS! %d of your guesses were right.\nNet cash:%d ",c,cash);
    }

}
int main()
{
  int bet,guess1,guess2,guess3;
  printf("There are three boxes numbered 1,2,3.\nInitially King, Queen, Joker were in the boxes in same order ");
  printf("\nU need to guess the order of cards after they get shuffeled");
  printf("\n Number of correct guesses-1 is the ratio factor of return you get");
  printf("\nInitially u have %d dollars of cash",cash);
  printf("\nTo end the game enter bet amount as zero\n");
  printf("Depending upon the amount u earn u will be ranked\n  Cash\tRank\n >=1000\t RED\n800-1000 PURPLE\n600-800\t PINK\n400-600\t GREEN\n100-400\t GREY\n000-100\t BLACK");
  printf("\n\nEnter the bet $:");
  scanf("%d",&bet);
  printf("\nEnter the box number of king: ");
  scanf("%d",&guess1);
  printf("\nEnter the box number of Queen: ");
  scanf("%d",&guess2);
  printf("\nEnter the box number of Joker: ");
  scanf("%d",&guess3);
  while(bet<=cash && cash>0 &&bet!=0 && cash<1000)
  {
      checkbet(guess1,guess2,guess3,bet);
       printf("\n\nEnter the bet $:");
  scanf("%d",&bet);
  printf("\nEnter the box number of king: ");
  scanf("%d",&guess1);
  printf("\nEnter the box number of Queen: ");
  scanf("%d",&guess2);
  printf("\nEnter the box number of Joker: ");
  scanf("%d",&guess3);
  }
    if(cash>=1000)
    printf("\nThats awesome! #RED");
    else if(cash>=800)
    printf("\nThats pretty good #PURPLE");
    else if (cash>=600)
    printf("\nThats good #PINK");
    else if(cash>=400)
    printf("\nNot bad #GREEN");
    else if(cash>=100)
    printf("\nSadly you aren't lucky dude #GREY");
    else
    printf("\nHehehe The amount of luck in your life is same as love in ghouse's life");

}
