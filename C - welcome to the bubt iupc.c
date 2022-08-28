#include<stdio.h>

int main()
{
    int t;
    int res[2];

    scanf("%d", &t);
    for(int t1 =1; t1 <=t; t1++)
    {
        scanf("%d", &res[t1]);
    }
    for(int t1 =1; t1 <=t; t1++)
    {
        if(res[t1] == 1){
            printf("Welcome to the BUBT IUPC\n");
        }
        else if(res[t1] == 2){
            printf("Thank you\n");
        }
    }
    return 0;
}
