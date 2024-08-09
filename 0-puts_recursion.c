
void _puts_recursion(char *s)
{
    if (*s == NUll)
    {
        return;
    }
    _puts_recursion(s);
}