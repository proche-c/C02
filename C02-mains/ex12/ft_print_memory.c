/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/11 11:31:18 by proche-c         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_address(long address)
{
	char *base;

	base = "0123456789abcdef";
	if (address > 16)
	{
		ft_print_address(address / 16);
		if (address < 16)
			write(1, &base[address / 16], 1);
		write(1,&base[address % 16], 1);
	}
}


void ft_set_address(char *addr)
{
	long address;
	int i;

	address = (long)addr;
	write(1, "0000000", 7);;
	ft_print_address(address);
	write(1, ": ", 2);
}

void ft_print_hexa(char *addr)
{
	int i;
	char *base;

	base = "0123456789abcdef";
	i = 0;
	while (i < 8)
	{
		write(1, &base[*addr / 16], 1);
		write(1, &base[*addr % 16], 1);
		addr++;
		write(1, &base[*addr / 16], 1);
		write(1, &base[*addr % 16], 1);
		write(1, " ", 1);
		addr++;
		i++;
	}

}

void ft_print_string(char *addr)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (*addr > 31 && *addr < 127)
			write(1, addr, 1);
		else
			write(1, ".", 1);
		addr++;
		i++;
	}
}
	
void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	char *punt;

	punt = addr;
	if (size > 16)
		size = 16;
	i = 0;
	while (*(punt + i) != '\0')
	{
		ft_set_address(punt + i);
		ft_print_hexa(punt + i);
		ft_print_string(punt + i);
		write(1, "\n", 1);
		i = i + 16;
	}
return(addr);
}
