/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/14 11:43:44 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) > 64 && *(str + i) < 91)
			*(str + i) = *(str + i) + 32;
		i++;
	}
	return (str);
}

int	ft_find_first_letter(char *str)
{
	int	j;

	j = 0;
	while (str[j] < 48 || (str[j] > 57 && str[j] < 65)
		|| (str[j] > 90 && str[j] < 97) || str[j] > 122)
	{
		j++;
	}
	return (j);
}

int	ft_find_end(char *str)
{
	int	j;

	j = 0;
	while ((str[j] > 47 && str[j] < 58) || (str[j] > 64 && str[j] < 91)
		|| (str[j] > 96 && str[j] < 123))
	{
			j++;
	}
	return (j);
}

char	*ft_strcapitalize(char *str)
{
	int		result;
	char	*punt;

	punt = str;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		result = ft_find_first_letter(str);
		str = str + result;
		if (*str > 96 && *str < 123)
			*str = *str - 32;
		result = ft_find_end(str);
		str = str + result;
	}
	return (punt);
}
