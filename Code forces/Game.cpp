#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void checkbet(int guess_number,int bet)
{
    srand(time(0));
    char* arr=(char*)malloc(3*sizeof(char));
    arr[0]='K';
    arr[1]='Q';
    arr[2]='J';

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
    if(arr[guess_number-1]=='Q')
    {
        cash+=3*bet;
        printf("CONGRATS! Your guess was right.\nNet cash:%d ",cash);
    }
    else
    {
        cash-=bet;
        printf("Oops your guess is wrong.\nNet cash:%d ",cash);
    }
}
int main()
{
  int bet,guess;
  printf("There are three boxes numbered 1,2,3.\nInitially King, Queen, Joker were in the boxes in same order ");
  printf("\nU need to guess the number of box in which queen is placed after shuffling");
  printf("\nIf your guess is right u get three times of bet u have placed else u loose the amount u have placed");
  printf("\n\nEnter the bet $:");
  scanf("%d",&bet);
  printf("\nEnter the number of box u guess: ");
  scanf("%d",&guess);
  while(bet<=cash && cash>0)
  {
      checkbet(guess,bet);
       printf("\n\nEnter the bet $:");
  scanf("%d",&bet);
  printf("\nEnter the number of box u guess: ");
  scanf("%d",&guess);
  }
}
