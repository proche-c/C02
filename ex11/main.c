void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*tab;
	
	tab = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(tab);
        char unp2[10] = {'\xff'};
        for (int i = 0; i < 256; i++)
        {
                unp2[0] = (char)i;
                ft_putstr_non_printable(unp2);
        }

	return 0;
}

