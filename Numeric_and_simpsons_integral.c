#include <stdio.h>
#include <math.h>

float integrate_simpson(float a,float b);
float integrate_numeric(float a,float b);
int main()
{
    float integrate_simpson(float a,float b)//DO NOT CHANGE arguments, name and return type
    {
        float integral=(b-a)/6*(sin(a)+4*sin((a+b)/2)+sin(b));
        return integral;
    }
    float integrate_numeric(float a,float b)//DO NOT CHANGE arguments, name and return type
    {
        float n=102000000000;
        //dy/dx=sinx
        //dy= sinx*dx
        //y = integral sinx*dx
        float sum=0;
        float h=fabs(b-a)/n;
        for(int i=1;i<n;i++)
        {
            float x=a+i*h;
            sum+=sin(x);
        }
        return sum;
    }
  printf("integral: %f",integrate_simpson(0,3.14/2));
  printf("integral: %f",integrate_numeric(0,3.14/3));
    return 0;
}