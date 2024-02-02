/**
 * set_string - Sets the value of a pointer to a char;
 * @s: Pointer to pointer to a char;
 * @to: The address to match.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
