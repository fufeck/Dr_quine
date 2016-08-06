#include <stdlib.h>
#include <stdio.h>
#define OPEN FILE*file=fopen
#define CLOSE fclose(file)
int main() {
	int i = 5;
	if (i <= 0)
		return (0);
	i--;
	char file_name[256];
	char exe_name[256];
	char cmd[256];
	sprintf(file_name, "Sully_%d.c", i);
	sprintf(exe_name, "Sully_%d", i);
	OPEN(file_name, "w");
	char *str = "#include <stdlib.h>%c#include <stdio.h>%c#define OPEN FILE*file=fopen%c#define CLOSE fclose(file)%cint main() {%c%cint i = %d;%c%cif (i <= 0)%c%c%creturn (0);%c%ci--;%c%cchar file_name[256];%c%cchar exe_name[256];%c%cchar cmd[256];%c%csprintf(file_name, %cSully_%cd.c%c, i);%c%csprintf(exe_name, %cSully_%cd%c, i);%c%cOPEN(file_name, %cw%c);%c%cchar *str = %c%s%c;%c%cfprintf(file, str, 10, 10, 10, 10, 10, 9, i, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 34, 37, 34, 10, 9, 34, 37, 34, 10, 9, 34, 34, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 34, 37, 37, 37, 34, 10, 9, 10, 9, 10);%c%cCLOSE;%c%csprintf(cmd, %cclang -Wall -Wextra -Werror -o %cs %cs && ./%cs%c, exe_name, file_name, exe_name);%c%csystem(cmd);%c%creturn(0);%c}";
	fprintf(file, str, 10, 10, 10, 10, 10, 9, i, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 34, 37, 34, 10, 9, 34, 37, 34, 10, 9, 34, 34, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 34, 37, 37, 37, 34, 10, 9, 10, 9, 10);
	CLOSE;
	sprintf(cmd, "clang -Wall -Wextra -Werror -o %s %s && ./%s", exe_name, file_name, exe_name);
	system(cmd);
	return(0);
}