// MemoryAllocator.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
//Diese Programm alloziiert Speicher zu demonstrationszwecken
#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "malloc.h"


int main()
{
	char *string;
	printf("Dieses Programm alloziert Speicher in 50MB Bereichen...\n");

	int reservierteMB = 0;

	while (1) {
		printf("Aktuell sind %d MB RAM reserviert.", reservierteMB);
		system("pause");

		printf("Alloziere weitere 50 MB RAM\n");
		string = (char *)malloc(52428800); //Entsprechend Bytes reservieren....

		if (string == NULL)
			printf("Nicht genug Speicher vorhanden.\n");
		else
		{
			printf("Speicher wurde reserviert\n");
			reservierteMB += 50;
			//free(string);
			//printf("Memory freed\n");
		}
	}

    return 0;
}

