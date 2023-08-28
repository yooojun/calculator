#include<stdio.h>
#include<conio.h>
float addFun(float, float);
float subFun(float, float);
float mulFun(float, float);
float divFun(float, float);

int main()
{
   float num1, num2, res;
   int choice;
   
   
    switch(choice)
    {
        case 1:
        res = addFun(num1, num2);
        break;
        case 2:
        res = subFun(num1, num2);
        break;
        case 3:
        res = mulFun(num1, num2);
        break;
        case 4:
        res = divFun(num1, num2);
        break;
        
        default:
        break;
    }
      

   return 0;
}

float addFun(float a, float b)
{
    return 1;
}
float subFun(float a, float b)
{
    return 1;
}
float mulFun(float a, float b)
{
    return a*b;
}
float divFun(float a, float b)
{
    return 1;
}