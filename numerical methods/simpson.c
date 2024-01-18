#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(pow((1-x*x),0.5));
}
int main(){
    float a,b,h,sum1=0,sum2=0,sum,I;
    int i,n;
    printf("/nEnter the value of upper limit and lower limit:");
    scanf("%f%f",&a,&b);
    printf("/nEnter the number of intervals:");
    h=(b-a)/n;
    sum1=f(a)+f(b);
    for(i=1;i<n-1;i++)
    {
        sum2=sum2+f(a+(i*h));
    }
    sum=2*sum2;
    I=h/2*(sum1+sum);
    printf("/nThe result of given integral is :%f",I);
    return 0;
}