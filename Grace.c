#include <stdio.h>
/* Salut tous le monde */
#define OPEN FILE*file=fopen
#define CLOSE fclose(file)
#define FUNC(x) int main() {OPEN("Grace_kid.c", "w");char *str = "#include <stdio.h>%c/* Salut tous le monde */%c#define OPEN FILE*file=fopen%c#define CLOSE fclose(file)%c#define FUNC(x) int main() {OPEN(%cGrace_kid.c%c, %cw%c);char *str = %c%s%c;fprintf(file, str, 10, 10, 10, 10, 34, 34, 34, 34, 34, str, 34, 10);CLOSE;return(0);}%cFUNC(x)";fprintf(file, str, 10, 10, 10, 10, 34, 34, 34, 34, 34, str, 34, 10);CLOSE;return(0);}
FUNC(x)