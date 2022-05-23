#include<stdio.h>
int main()
{
    int money,value = 0,update;
    printf("Enter sum of money = ");
    scanf("%d",&money);
    int a[] = {2000,500,200,100,50,20,10,5,2,1};
    printf("Total number of note divisions of amount %d is : \n",money);
    for (int i = 0; i < 10; i++)
    {
        value = money/a[i];
        if(value > 0){
            update = money%a[i];
            money = update;
            printf("%d = %d\n",a[i],value);
        }
    }
}