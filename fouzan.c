#include<stdio.h>
int main()
{
    int dollar;
    float rs;
    printf("Enter amount in dollar: \n");
    scanf("%d", &dollar);
    rs=277.6*dollar;
    printf("Your amount in Ruppes is %.2f" , rs);
    /* code */
    return 0;
}
