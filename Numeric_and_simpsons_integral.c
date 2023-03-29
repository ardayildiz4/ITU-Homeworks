//This code consists of 2 functions, simpson and numeric parts.
//They integrate sin(x) function in the interval (a,b) by using the Simpson's Rule and also numeric method.
//You enter the boundaries a and b in float type, when the function is called.

#include <stdio.h>
#include <math.h>

float integrate_simpson(float a,float b);
float integrate_numeric(float a,float b);

float integrate_simpson(float a,float b)//DO NOT CHANGE arguments, name and return type
{
    float integral=(b-a)/6*(sin(a)+4*sin((a+b)/2)+sin(b));
    return integral;
}
float integrate_numeric(float a,float b)//DO NOT CHANGE arguments, name and return type
{
    float n=102000000000;
    float sum=0;
    float h=fabs(b-a)/n;
    for(int i=1;i<n;i++)
    {
        float x=a+i*h;
        sum+=sin(x);
    }
    return sum;
}
