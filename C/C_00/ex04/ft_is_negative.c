/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:04:56 by ahiguera          #+#    #+#             */
/*   Updated: 2023/05/25 19:04:03 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	onechar(int a)
{
	write (1, &a, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		onechar('P');
	}
	else
	{
		onechar('N');
	}
}
/*
int	main(void)
{
	ft_is_negative(5);
	return (0);
}
*/