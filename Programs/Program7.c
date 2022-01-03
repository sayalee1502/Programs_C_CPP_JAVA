//print 1 to 5 on screen using loop and helper fun
#include<stdio.h>

void Display()
{
    int i = 0;
    
    for(i = 1; i <= 5; i++)
    {
        printf("%d\n",i);
    }
}

int main()
{
    Display();      // Function call
    
    return 0;
}
