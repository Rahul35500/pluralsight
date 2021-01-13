//#include<iostream>
#include <stdio.h>
#include <string.h>
// using namespace std;
int main()
{
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("%d\n", i);
        switch (i)
        {
        case 0:
        {
            i += 2;
            printf("%d =0\n", i);
        }
        case 1:
        {
            printf("%d =1\n", i);
            i += 5;
        }
        case 5:
        {
            printf("%d =5\n", i);
            i += 5;
        }
        default:
        {
            printf("%d=\n", i);
            i += 3;
        }
        break;
        }
        printf("%d\n", i);
    }
    return 0;
}