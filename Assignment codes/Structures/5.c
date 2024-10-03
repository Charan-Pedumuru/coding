#include<stdio.h>

 typedef struct 
{
    int number;

}arithmatic_operations;

arithmatic_operations add(arithmatic_operations n1, arithmatic_operations n2)
{
    arithmatic_operations temp;
    temp.number=n1.number + n2.number;

    return(temp);

}
arithmatic_operations subtraction(arithmatic_operations n1, arithmatic_operations n2)
{
    arithmatic_operations temp;
    temp.number=n1.number - n2.number;

    return(temp);

}
arithmatic_operations multiplication(arithmatic_operations n1, arithmatic_operations n2)
{
    arithmatic_operations temp;
    temp.number=n1.number * n2.number;

    return(temp);

}
arithmatic_operations division(arithmatic_operations n1, arithmatic_operations n2)
{
    arithmatic_operations temp;
    temp.number=n1.number / n2.number;

    return(temp);

}
int main()
{
    arithmatic_operations c1,c2,a,s,m,d;

    printf("Enter any two numbers\n");
    scanf("%d%d",&c1.number,&c2.number);
    a=add(c1,c2);
    s=subtraction(c1,c2);
    m=multiplication(c1,c2);
    d=division(c1,c2);

    printf("The arithematic operations of %d and %d are\nAddition : %d\nSubtraction ; %d\nMultiplication : %d\nDivision : %d",c1.number,c2.number,a,s,m,d);


}
