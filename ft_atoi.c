/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:03:11 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/26 23:04:56 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int sign;
	int count;

	sign = 1;
	count = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13) || *str == 127)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		count *= 10;
		count += *str - 48;
		str++;
	}
	return (count * sign);
}
