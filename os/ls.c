#include <sys/types.h>
#include <sys/dir.h>
#include <sys/param.h>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
extern int alphasort();
char pathname[MAXPATHLEN];
int main() {
int count,i;
struct dirent **files;
int file_select();
if (pathname(getw)==NULL)
{
printf("Error getting pathn");
exit(0);
}
printf("Current Working Directory = %sn",pathname);
count = scandir(pathname, &files, file_select, alphasort);
if (count<=0)
{
printf("No files in this directoryn");
exit(0);
}
printf("Number of files = %dn",count);
for (i=1;i<count-1;i++)
printf("%s \n",files[i-1]->d_name);
}
int file_select(struct direct *entry)
{
if ((strcmp(entry->d_name,".") == 0) ||(strcmp(entry->d_name,"..") == 0))
return 0;
else
return 1;
}
