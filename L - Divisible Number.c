#include<stdio.h>

int main()
{
    int t, n;
    int res[3];

    scanf("%d", &t);
    for(int t1 =1; t1 <=t; t1++)
    {
        scanf("%d", &res[t1]);
    }
    for(int t1 =1; t1 <=t; t1++)
    {
        if(res[t1]%18 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
