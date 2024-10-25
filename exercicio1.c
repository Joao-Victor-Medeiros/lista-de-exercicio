#include <stdio.h>

int fatorial(int n)
{
    int result;
    if(n == 0 || n == 1){
        n = 1;
    }else {
        return n * fatorial(n-1);   
    }
    
}


int main()
{
    printf("%d \n", fatorial(3));
}