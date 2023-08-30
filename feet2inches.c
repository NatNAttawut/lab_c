// #include<stdio.h>
// int printHello();
// int main()
// {
//     /* code */
//     printf("Test C.\n");
//     printHello();
//     return 0;
// }
// int printHello(){
//     printf("Hello");
// }

#include <stdio.h>
int Feet2Inch(int);
int feet,inches;
void main()
{                                             // Start
    feet = 6 ;
    inches = Feet2Inch(feet);
    printf("Height in inches is %d",inches);
}
int Feet2Inch(int f)
{
    return f*12;
}