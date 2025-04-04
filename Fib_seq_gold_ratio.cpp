/* Fibonacci sequence using switch statment + Golden Ratio convergence 
    n = 0,1,2,3,4,5,6,7,8,9
    xn = 0,1,1,2,3,5,8,13,21,34
    The Golden Ratio is: 1.6180339887......
    A   B   B/A
    2   3
    3   5
    5   8
    8   13
    13  21
    21  34
*/
#include <stdio.h>

int main()
{
    int limit;
    int count=4;
    int ite=1;
    int i=0;
    double j=1.0;
    double k;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    while (i < limit)
    {
        switch(i)
        {
            case 0:
                i = i + j;
                break;
            case 1:
                i = i + j;
                k = i;
                break;
            default:
                printf("Fibonacci sequence F(%d) is: %-6d\t",count++,i=k+j);
                j=k;
                k=i;
                printf("Iteration(%d) Golden Ratio is (%.0f/%.0f) : %.12f\n",ite++,k,j,k/j);
                break;
        }
    }  
return 0;
}