/* Febonachi sequence in while loop + hidden sequence
    n = 0,1,2,3,4,5,6,7,8,9
    xn = 0,1,1,2,3,5,8,13,21,34
*/
#include <stdio.h>

int main()
{
    int limit;
    int count=3;
    int i=0;
    int j=1;
    int k;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    while (i < limit)
    {
        if (i==0)
            i = i + j;
        else if (i==1)
            i = i + j;
            k = i; 
    printf("Fibonacci sequence is F(%d) is: %d\t",count,i=k+j);
    if (i%2==0)
        printf("Even number\n");
    else
        printf("Odd number\n");
    count++;
    j=k;
    k=i;
    }  
return 0;
}