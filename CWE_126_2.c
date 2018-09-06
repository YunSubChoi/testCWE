//c 126_2
int main(int argc, char **argv)
{
char Filename[256];
char Pattern[32];

/* Validate number of parameters and ensure valid content */ 
...

/* copy filename parameter to variable, may cause off-by-one overflow */ 
strncpy(Filename, argv[1], sizeof(Filename));

/* copy pattern parameter to variable, may cause off-by-one overflow */ 
strncpy(Pattern, argv[2], sizeof(Pattern));

printf("Searching file: %s for the pattern: %s\n", Filename, Pattern);
Scan_File(Filename, Pattern);
}

/* 이렇게 수정할 것
 // copy filename parameter to variable, no off-by-one overflow 
strncpy(Filename, argv[2], sizeof(Filename)-1);
Filename[255]='\0';

 // copy pattern parameter to variable, no off-by-one overflow
strncpy(Pattern, argv[3], sizeof(Pattern)-1);
Pattern[31]='\0';
*/