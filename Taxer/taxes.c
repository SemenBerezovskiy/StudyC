#include <stdio.h>
#include <stdlib.h>

typedef struct Factory{
	int Customers;
	int Income;
	char Name[20];
	char isCountryF;
}Fac;
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
int HowIsMyFactory(Fac *Factory)
{	
	printf("%d\n", Factory->Customers);
	system("clear");
	system("wait");
}
int main(void)
{
	int n = taxer(10000, 22);
	Fac PAZ = {1000, 10000000, "Pazovoe", 't'};
	HowIsMyFactory(&PAZ);
	printf("%d", n);
}
