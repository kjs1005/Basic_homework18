#include <stdio.h>

int main() 
{
    int num=0,i=0;
    int array[10] = {};
    
    printf("�п�J�@�Ӿ��:\n");
    scanf("%d", &num);
    
    while(num) 
	{
        array[num % 10]++;
        num/=10;
    }
    
    for (i=0;i<10;i++) 
	{
        if (array[i] != 0)
            printf ("%d��%d��\n", i, array[i]);
	}
    return 0;
}
