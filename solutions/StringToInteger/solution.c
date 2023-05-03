int myAtoi(char * nptr){
	long long	num = 0;
	int		    sign = 1;

	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
		nptr++;

	if (*nptr == '-')
		sign = -1;

	if (*nptr == '-' || *nptr == '+')
		nptr++;

	while (*nptr >= '0' && *nptr <= '9' && num <= INT_MAX)
		num = num * 10 + (*nptr++ - '0');

	num *= sign;

    if (num > INT_MAX)
        return (INT_MAX);
    if (num < INT_MIN)
        return (INT_MIN);
    return (num);
}
