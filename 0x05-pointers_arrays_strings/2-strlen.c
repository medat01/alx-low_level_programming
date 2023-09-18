include "main.h"
int _strlen(CHAR *s){
	int counter;
	
	for (counter = 0; *s != '\0'; s++)		++counter;
	return (counter);
}
