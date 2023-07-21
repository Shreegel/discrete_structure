//wap to display meet of two mxn zero one matrices entered by the user

#include<stdio.h>
int OR(int a, int b)
{
    if (a==1 && b==1)
	return 1;
    else
	return 0;
}
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,m,n;
    printf("Enter the order: ");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix A: \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
		}
    }
    printf("Enter the matrices B: \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&B[i][j]);
        }
}
for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        C[i][j]=OR(A[i][j],B[i][j]);
    }
}
printf("Join of A & B is \n");
for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        printf("%d ",C[i][j]);
    }
    printf("\n");
}
return 0;
}
