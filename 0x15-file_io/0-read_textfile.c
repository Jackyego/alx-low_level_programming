#include <stdio.h>

/* Declaring a file pointer and a character */
int main(void)
{
	FILE *fp;
	char ch;
	/* Now we need to Open the file in read mode */
	fp = fopen("yegosfile.txt", "r");

/*
* on successfully opening the file,read the file character by character
* and close the file, if it falis to open
* print an error message "failed to open"
*/
	if (fp != NULL)
	{
		while ((ch = fgetc(fp)) != EOF)
		{
			putchar(ch);
		}
		fclose(fp);
	}
	else
	{
		printf("Error: Failed to open the file.\n");
	}
	return (0);
}

