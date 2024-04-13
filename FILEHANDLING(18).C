// C program to Open a File,
// Write in it, And Close the File

# include <stdio.h>
# include <string.h>
#include<conio.h>
void main( )
{

	// Declare the file pointer  file *name;
	FILE *fp ;

	// Get the data to be written in file
	char dataToBeWritten[50]
		= "te girls -----";

	// Open the existing file GfgTest.c using fopen()
	// in write mode using "w" attribute
	fp = fopen("GfgTest.c", "w") ;

	// Check if this filePointer is null
	// which maybe if the file does not exist
	if ( fp == NULL )
	{
		printf( "GfgTest.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;

		// Write the dataToBeWritten into the file
		if ( strlen ( dataToBeWritten ) > 0 )
		{

			// writing in the file using fputs()
			fputs(dataToBeWritten, fp) ;
			fputs("\n", fp) ;
		}

		// Closing the file using fclose()
		fclose(fp) ;

		printf("Data successfully written in file GfgTest.c\n");
		printf("The file is now closed.") ;
	}
	getch();
}
