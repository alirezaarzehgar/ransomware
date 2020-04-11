#include "fileprocess.h"

int Crypt_Not_AL(char* fname)
{
	printf("%s%c", fname, 0);

//	char ftmp[1024];
//	sprintf(ftmp, "%s-1",fname);

	//printf("%s%c", fname, '\n');
//	rename(fname, ftmp);
/*
	FILE* f1 = fopen(ftmp, "r");
	FILE* f2 = fopen(fname, "w");

	//printf("%d\n", 0);

	while(1)
	{
		int t = fgetc(f1);
		if(feof(f1)) break;
		fputc((t), f2);
	}

	fputs("Hello", f2);
	fclose(f1);
	fclose(f2);


	rename(ftmp, fname);
	remove(ftmp);
*/	
	return 0;	
}
