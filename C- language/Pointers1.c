void main()
{
int x,y,*p;
clrscr();
x=34;
y=78;
p=&x;
printf("x value: %d\t x address: %u\n",x,p);
printf("y value: %d\t y address: %u\n",y,&y);
getch();
}
