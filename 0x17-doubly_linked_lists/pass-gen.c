#include "common.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *pass = malloc(sizeof(char) * 5);
	 char c[5] = {'H', 'o', 'l', 4, '\0'}, run[100]; 
/**
*char c[350] = /*{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','!','§','$','%','&','/','(',')','.','-',':',';','_','#','+','*','[',']','{','}','='}, *run[100];
*/	
	int i;

	for (i = 0; c[i]; i++)
		pass[i] = c[i];

	pass[i] = '\0';

	sprintf(run, "echo %s > 100-password", pass);
	system(run);

	return (0);
}
