    /*
Zmodyfikuj program przykładowy tak żeby przyjmował i wypisywał liczby zmiennoprzecinkowe z dokładnością do 3 miejsc po przecinku. 
    
    */


#include <stdio.h>
float powerOfBase(float base, float pow);

int main()
{
	float base = 0, pow = 0;				
	float out;				
	printf("podaj liczbe: ");		
	scanf("%f", &base);				

	if (base == 0)								
	{
		printf("kazda potega liczby 0 wynosi 0!\n"); 
	}
	else
	{
		printf("podaj nieujemny wykladnik calkowity: ");
		scanf("%f", &pow);
		
		out = powerOfBase(base, pow);
		if (out != 0)
		{
			printf("potega %.3f liczby %.3f wynosi %.3f\n", pow, base, out);
		}
		else
		{
			printf("wykladnik musi byc nieujemny!\n");
		}
	}
	return 0;
}

float powerOfBase(float base, float pow)

{
	float temp = base;			

	if (pow > 0)
	{
		for (float i = 1.; i < pow; i++)
		{
			temp = temp * base;
		}
		return temp;
	}
	else if (pow == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
