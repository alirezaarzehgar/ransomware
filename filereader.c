#include "filereader.h"
#include "fileprocess.h"

int AllFileProcess(char *dir)
{
    	DIR *dp;
	if((dp = opendir(dir)) == NULL) perror("Error");
    	struct dirent *entry;
    	struct stat statbuf;

    	chdir(dir);
    	while((entry = readdir(dp)) != NULL)
	{
        	lstat(entry->d_name,&statbuf);
        	if(S_ISDIR(statbuf.st_mode) && !(strcmp(".",entry->d_name) == 0 || strcmp("..",entry->d_name) == 0))
		{
			// dir process
            		AllFileProcess(entry->d_name);

        	}else 
		{
			// file process
			printf("%s%c", realpath(entry->d_name, 0), '\n');
			//Crypt_Not_AL(realpath(entry->d_name, 0));
		}
    	}
    	chdir("..");
    	closedir(dp);

	return 0;
}
