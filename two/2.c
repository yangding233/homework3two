#include<stdio.h>
#include<stdlib.h>
int main(){
    double a = 0;
    float sum = 0;
    printf("Please enter your sarlary");
    scanf("%lf",a);
    if (a<=5000)
    {
        sum = 0;
    }
    else if (5000<a<=8000)
    {
        sum = 0.03*(a-5000);
    }
    else if (8000<a<=17000)
    {
        sum = 90+0.1*(a-8000);
    }
    else if (17000<a<=30000)
    {
        sum = 990+0.2*(a-17000);
    }
    else if (30000<a<=40000)
    {
        sum = 3590+0.25*(a-30000);
    }
    else if (40000<a<=60000)
    {
        sum = 6090+0.3*(a-40000);
    }   
    else if (60000<a<=85000)
    {
        sum = 12090+0.35*(a-60000);
    }    
    else if (85000<a)
    {
        sum = 20840+0.45*(a-85000);
    }
    printf("You have to pay tax %f",sum);
    system("pause");
    return 0;
    }