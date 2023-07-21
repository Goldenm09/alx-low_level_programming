/* 0-isupper.c */

/* Function to check if a character is uppercase */
int _isupper(int c)
{
/* Check if the character is within the ASCII range of uppercase letters */
if (c >= 'A' && c <= 'Z')
{
/* Return 1 if it is uppercase */
return 1;
}

/* Return 0 if it is not uppercase */
return 0;
}
