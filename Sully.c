int i = 5;
#include <stdlib.h>
#include <stdio.h>
#define OPEN FILE*file=fopen
#define CLOSE fclose(file)
int main() {
	// char file_name[256];
	// char exe_name[256];
	// char cmd[256];
	// sprintf(file_name, "Sully_%d.c", i);
	// sprintf(exe_name, "Sully_%d", i);
	// OPEN(file_name, "w");
	// char *str = "int i = %d;%c#include <stdlib.h>%c#include <stdio.h>%c#define OPEN FILE*file=fopen%c#define CLOSE fclose(file)%cint main() {%c%cchar file_name[256];%c%cchar exe_name[256];%c%cchar cmd[256];%c%csprintf(file_name, %c%s%s%s%c, i);%c%csprintf(exe_name, %c%s%s%c, i);%c%cOPEN(file_name, %cw%c);%c%cchar *str = %c%s%c;%c%cfprintf();%c%cCLOSE;%c%cif (i - 1 > 0) {%c%c%csprintf(cmd, %cclang -Wall -Wextra -Werror -o %s %s; ./%s%c, exe_name, file_name, exe_name);%c%c%csystem(cmd);%c%c}%c%creturn(0);}";
	// fprintf(file, str, i - 1, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 34, "Sully_", "%d", ".c", 34, 10, 9, 34, "Sully_", "%d", 34, 10, 9, 34, 34, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 34, "%s", "%s", "%s", 34, 10, 9, 9, 10, 9, 10, 9, 10);
	// CLOSE;
	// if (i - 1 > 0) {
	// 	sprintf(cmd, "clang -Wall -Wextra -Werror -o %s %s; ./%s", exe_name, file_name, exe_name);
	// 	system(cmd);
	// }
	return(0);
}
