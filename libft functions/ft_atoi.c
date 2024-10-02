int	ft_atoi(const char *str)
{
    int i =0,rs =0,sing =1;
    while (str[i] == ' ' || (str[i] >=9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sing =-1 ;
        i++;
    }
    while (str[i]>= '0' && str[i] <= '9')
    {
        rs= rs*10 + str[i]-'0';
        i++;
    }
    return (rs *sing);
}