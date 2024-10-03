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
       printf("CONGRATS! %d of your guesses was right.\nNet cash:%d \n",c,cash);
    }
    else
    {
        cash+=(c-1)*bet;
        printf("CONGRATS! %d of your guesses were right.\nNet cash:%d \n",c,cash);
    }

}
int main()
{
  int bet,guess1,guess2,guess3,chances=10;
  printf("Initially three boxes numbered 1,2,3 had cards king queen and joker respectively.");
  printf("\n\nU need to guess the order of cards after they get magically shuffled!!");
  printf("\n\nNo. of correct guesses-1 is the ratio return you get for bet placed\n");
  printf("\nTo end the game enter bet amount as zero\n\n");
  printf("Depending upon the amount u earn u will be ranked\n\n  Cash\tRank\n >=1000\t RED\n800-1000 PURPLE\n600-800\t PINK\n400-600\t GREEN\n100-400\t GREY\n000-100\t BLACK");
  printf("\n\nU have %d chances remaining!! ",chances);
  printf("\nNet cash: %d$",cash);
  printf("\n\nEnter the bet $:");
  scanf("%d",&bet);
  printf("\nEnter the box number of king: ");
  scanf("%d",&guess1);
  printf("\nEnter the box number of Queen: ");
  scanf("%d",&guess2);
  printf("\nEnter the box number of Joker: ");
  scanf("%d",&guess3);
  chances--;
  while(bet<=cash && cash>0 &&bet!=0 && cash<1000&&chances>0)
  {
      checkbet(guess1,guess2,guess3,bet);
      if(chances!=1)
      printf("\nU have %d chances remaining!! ",chances);
      else
       printf("\nU have %d chance remaining!! ",chances);
       printf("\n\nEnter the bet $:");
  scanf("%d",&bet);
  printf("\nEnter the box number of king: ");
  scanf("%d",&guess1);
  printf("\nEnter the box number of Queen: ");
  scanf("%d",&guess2);
  printf("\nEnter the box number of Joker: ");
  scanf("%d",&guess3);
  chances--;
  }
    if(cash>=1000)
    printf("\nThats awesome! #RED\n\n\n\n\n\n");
    else if(cash>=800)
    printf("\nThats pretty good #PURPLE\n\n\n\n\n\n");
    else if (cash>=600)
    printf("\nThats good #PINK\n\n\n\n\n\n");
    else if(cash>=400)
    printf("\nNot bad #GREEN\n\n\n\n\n\n");
    else if(cash>=100)
    printf("\nSadly you aren't lucky dude #GREY\n\n\n\n\n\n");
    else
    printf("\nHehehe The amount of luck in your life is same as love in ghouse's life #BLACK\n\n\n\n\n\n");

}
