#include<stdio.h>

int main() {
    int x=12;
    while(x>0)
    {
        if(x%2==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        x=x/2;
    }
}
