#include<stdio.h>
#include<math.h>
int main()
{
    int a[3][3],b[3][3],product[3][3];
    int i,j,row,col;
    printf("enter the order of matrix 1: ");
    scanf("%d%d",&row,&col);
    printf("enter the values of the matrix 1 : \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the order of matrix 2: \n");
    scanf("%d%d",&row,&col);
    printf("enter the values of matrix2 : \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("product= %d \n", a[i][j]*b[i][j]);
    return 0;

}