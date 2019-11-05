#include <stdio.h>
int main(void)
{
    float x,y;
    printf("月用电量\n");
    scanf("%f",&x);
    if(x<=50.0){
        y=0.53*x;
    }
    else{
        y=0.53*50+(x-50)*(0.53+0.05);
    }
    printf("y=%.2f\n",y);
    return 0;
}