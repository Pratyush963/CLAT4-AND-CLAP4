#include <stdio.h>
#include <stdlib.h> int
main()
{
FILE * file; char
path[100];
char ch; int characters,
words, lines;
/* Input path of files to merge to third file */ printf("Enter
a file name: ");
scanf("%s", path);
/* Open source files in 'r' mode */ 
file = fopen(path, "r");
/* Check if file opened successfully */ if
(file == NULL)
{
printf("\nUnable to open file.\n"); printf("Please check if file
exists and you have read privilege.\n");
exit(EXIT_FAILURE);
}
/*
* Logic to count characters, words and lines.
*/ characters = words = lines =
0; while ((ch = fgetc(file)) !=
EOF) 
{
characters++;
/* Check new line */ if
(ch == '\n' || ch == '\0')
lines++;
/* Check words */
if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
words++;
}
/* Increment words and lines for last word */ if
(characters > 0)
{
words++; lines++;
} 
/* Print file statistics */ printf("\n"); printf("In the file %s, there is %d line and %d
characters", path, lines, characters);
/* Close files to release resources */
fclose(file); return 0;
}