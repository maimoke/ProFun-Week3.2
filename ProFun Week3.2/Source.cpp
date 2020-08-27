#include<stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);
	switch (a)
	{
	case 'A': printf("[80,100]"); break;
	case 'B': printf("[70,80)"); break;
	case 'C': printf("[60,70)"); break;
	case 'D': printf("[50,60)"); break;
	case 'F': printf("[0,50)"); break;
	}
			return 0;
}