//wap to display the boolean product of two zero one matrices of order m1xn1 and m2xn2 respectively
#include<stdio.h>

int OR(int a, int b)
{
    if (a==1|| b==1)
	return 1;
    else
	return 0;
}

int AND(int a, int b)
{
    if (a==1 && b==1)
	return 1;
    else
	return 0;
}

int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,m1,n1,m2,n2,sum,k;
    printf("Enter the order of matrix A: ");
    scanf("%d%d",&m1,&n1);
        printf("Enter the order of matrix B: ");
    scanf("%d%d",&m2,&n2);
    printf("Enter the matrix A: \n");
    for (i=0;i<m1;i++)
    {
        for (j=0;j<n1;j++)
        {
            scanf("%d",&A[i][j]);
		}
    }
     printf("Enter the order of matrices B: \n");
    for (i=0;i<m2;i++)
    {
        for (j=0;j<n2;j++)
        {
            scanf("%d",&B[i][j]);
        }
	}
	for (i=0;i<m1;i++)
	{
		for (j=0;j<n2;j++)
		{
			sum=0;
			for (k=0;k<n1;k++)
			{
				sum=OR(sum,AND(A[i][k],B[k][j]));
			}
			C[i][j]=sum;
		}
	}
	
	
	
	
	
	
	
	printf("Boolean Product of A and B is \n");
    for (i=0;i<m1;i++)
    {
        for (j=0;j<n2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
	}
	return 0;
	
}
