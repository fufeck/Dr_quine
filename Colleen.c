#include <stdio.h>

/* Je suis la */

void			func() {
	return ;
}

int				main() {
	char		*str = "#include <stdio.h>%c%c/* Je suis la */%c%cvoid%c%c%cfunc() {%c%creturn ;%c}%c%cint%c%c%c%cmain() {%c%cchar%c%c*str = %c%s%c;%c%c/* Salut tous le monde */%c%cprintf(str, 10, 10, 10, 10, 9, 9, 9, 10, 9, 10, 10, 10, 9, 9, 9, 9, 10, 9, 9, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10);%c%cfunc();%c}";
	/* Salut tous le monde */
	printf(str, 10, 10, 10, 10, 9, 9, 9, 10, 9, 10, 10, 10, 9, 9, 9, 9, 10, 9, 9, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10);
	func();
}