

#include "pch.h"
#include <iostream>

int main()
{
	int sayi, i, dizi[20], k = 0, kontrol[20];
	printf("Poziti Tam Bolenlerini Ogrenmek Istedigin sayiyi gir: \n");
	scanf_s("%d", &sayi);
	kontrol[0] = 1;
	kontrol[1] = sayi;
	for (i = 1; i <= sayi; i++)
	{
		if (sayi%i == 0)
		{
			dizi[k] = i;
			k++;
			//printf("%d ",i);
		}
	}
	if (kontrol[0] == dizi[0] && kontrol[1] == dizi[1])
	{
		printf("Prime ");
	}
}


