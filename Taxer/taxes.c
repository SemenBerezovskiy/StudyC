#include <stdio.h>

unsigned int taxer(int Money, int timeper)
{
	int Res = Money*timeper*0.01;
	if(Res < 100000)
	{
		return Res * 95;
	}
	if(Res > 100000 && Res < 623000)
	{
		return Res * 75;
	}
	if(Res > 623000 && Res < 1000000)
	{
		return Res * 60;
	}

}
int main(void)
{
	int n = taxer(10000, 22);
	printf("%d", n);
}
