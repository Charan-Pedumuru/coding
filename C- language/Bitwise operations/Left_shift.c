#include<stdio.h>

//Moves bits to the left by n places
//Equivalent to multiplying by 2^n

int main()
{
    unsigned int n;
    printf("Enter a 32-bit integer: ");
    scanf("%u",&n);

    unsigned int result=16<<n;

    printf("n<<16 : %u (0x%X)",result,result);
}