char OutBuffer[100];

void main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        OutBuffer[i] = i;
    }
    sprintf(OutBuffer, "Hello, World!\n");
    
}