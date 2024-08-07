#include <stdio.h>
#include <conio.h>
#include <string.h>

void nhap_Chuoi(char a[])
{
	printf("Nhap chuoi:");
	gets(a);
}

void xuat_Chuoi(char a[])
{
	printf("Chuoi vua nhap la:");
	puts(a);
}

void demKhoangTrangTrongChuoi(char a[])
{
	int dem=0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ')
		{
			dem++;
		}
	}
	printf("Chuoi '%s' co %d khoang trang!!!\n", a, dem);
}

int main()
{
	char a[100];
	nhap_Chuoi(a);
	xuat_Chuoi(a);
	demKhoangTrangTrongChuoi(a);
	getch();
	return 0;
}