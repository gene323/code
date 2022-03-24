#include <stdio.h>
#include <string.h>

int main()
{
    int a[11]={0};
    int b[11]={0};
    int x;
    int y;

    while(scanf("%d%d", &x, &y))
    {
        int carry = 0;
        int sum = 0;
        int k = 0; // put digit into array

        if(x == 0 && y == 0)
            break;
        
        while(x > 0 || y > 0)
        {
            if(x > 0)
            {
                a[k] = x % 10;
                x /= 10;
            }
            else
                a[k] = 0;
            
            if(y > 0)
            {
                b[k] = y % 10;
                y /= 10;
            }
            else
                b[k] = 0;
            
            k++;
        }

        for(int i = 0; i < k; i++)
        {
            b[i] += a[i] + carry;
            carry = (b[i] >= 10);
            sum += carry;
        }

        if(sum > 1)
            printf("%d carry operations.\n", sum);
        
        else if(sum == 1)
            printf("%d carry operation.\n", sum);
            
        else
            printf("No carry operation.\n");
    }
}