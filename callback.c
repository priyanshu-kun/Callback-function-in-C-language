#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
    return a + b;
}


// the syntex of function pointer is --> (*func) <-- this if I remove perenthis so this is become function declration
int funcPointer1(int (*func)(int, int))
{
    printf("Hello function 1 user\n");
    printf("The sum of 5 and 6 is %d\n", func(5, 6));
}



int funcPointer2(int (*func)(int, int))
{
    printf("Hello function 2 user\n");
    printf("The sum of 15 and 16 is %d\n", func(15, 16));
}



int main(int argc, char *argument[])
{
    // decleare a funciton pointer (a funciton pointer who takes to integer as an argument and return a integer )
    int (*func)(int, int);

    // here I assign the address of callback function to my funciton pointer
    func = &sum;

    // and here I call it
    funcPointer1(func);
    funcPointer2(func);
    return 0;
}