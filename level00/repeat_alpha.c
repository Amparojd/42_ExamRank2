int main(int argc, char **argv)
{
    int i;
    int count;

    i = 0;
    count = 1;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                count += (argv[1][i] - 'a');
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                count += (argv[1][i] - 'A');
            while (count)
            {
                write(1, &argv[1][i], 1);
                count --;
            }
            count = 1;
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}