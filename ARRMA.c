#include<stdio.h>

int main()
{
	int a[3][3], b[3][3], c[3][3]={0}, d[3][3]={0};
	int i,j,m,n,p,q,k;
	printf("Enter values in matrix A: ");
	scanf("%d%d",&m,&n);
	printf("Enter values in matrix B: ");
	scanf("%d%d",&p,&q);

		printf("Enter elements of matrix A: ");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d", &a[i][j]);
		printf("Enter elements of matrix B: ");
		for(i=0;i<p;i++)
			for(j=0;j<q;j++)
				scanf("%d", &b[i][j]);
		// Addition
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				c[i][j] = a[i][j] + b[i][j];
		printf("\noutput of Matirx Addition:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				printf("%d ", c[i][j]);
			printf("\n");
		}
		// Multiplication
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
				for(k=0;k<p;k++)
					d[i][j] += a[i][k]*b[k][j];
		printf("\noutput of Matirx Multiplication:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
				printf("%d ", d[i][j]);
			printf("\n");
		}
        return 0;
	}




