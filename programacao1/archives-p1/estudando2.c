#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	FILE *file = fopen("arq.bin", "rb");
	struct stat status;
	struct timespec *tempo;    
    stat(file, &status);
    
    printf("\n atime: %s", ctime(&status.st_atime));
	printf("\n mtime: %s", ctime(&status.st_mtime));
	printf("\n ctime: %s", ctime(&status.st_ctime));
	
	fclose(file);
    
    return 0;   
}
