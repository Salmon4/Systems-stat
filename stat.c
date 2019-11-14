#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main(){
  struct stat buffer;
  stat("README.md", &buffer);
  printf("The file size of %s is %d", "README.md", buffer.st_size);
  printf("\n");
  printf("The file permission of %s in octal is %d", "README.md", buffer.st_mode);
  printf("\n");
  printf("The file %s was last accessed on %s", "README.md", ctime(&buffer.st_atime));
  return 1;
}
