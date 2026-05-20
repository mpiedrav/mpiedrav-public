int check_argc_switch(int argc)
{
    switch (argc)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    default:
        return -1;
        break;
    }
}

int check_argc_if(int argc)
{
    if (argc == 0)
        return 0;
    else if (argc == 1)
        return 1;
    else if (argc == 2)
        return 2;
    else
        return -1;
}

int main(int argc, char *argv[])
{
    int i1 = check_argc_switch(argc);
    int i2 = check_argc_if(argc);
}
