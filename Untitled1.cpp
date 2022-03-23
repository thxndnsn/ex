//Nhap vao 1 mang
//In ra man hinh cac so chan va vi tri cua no
//Sap xep theo thu tu giam dan
//Chen 1 so bat ky vao mang sao cho cac gia tri van giam dan
#include<stdio.h>
int main()
{
	int n,i, max, min, t, k;
	int s=0;
	float tong;
	printf("Nhap so ptu cua mang n= ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Nhap ptu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("cac so chan:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("  so thu %d: %d\n", i+1, a[i]);
		}
	}
	//sap xep theo tt giam dan
	for(k=0;k<n-1;k++)
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	printf("ptu mang theo tt giam dan:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
// Chen so a vao mang so cho mang van duoc sap xep theo thu tu giam dan

	return 0;
}
