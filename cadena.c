  	
#include <libintl.h>
#include <locale.h>

#define _(cadena) gettext(cadena)

int main(int argc, const char *argv[]){
	bind_textdomain_codeset ("codigo", "UTF-8");
	setlocale(LC_ALL,"");
	bindtextdomain("codigo", "idioma");
	textdomain("codigo");
	char cadena[] = "Hola mundo piñata!";

	printf(_("Hola alumnos Intel-Buap\n"));

	return 0;
}

