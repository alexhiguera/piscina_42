/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:38:02 by ahiguera          #+#    #+#             */
/*   Updated: 2023/05/25 20:48:53 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b )
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 6;
	num2 = 42;

	ft_swap(&num1, &num2);
	printf("%d \n", num1);
	printf("%d", num2);
	return (0);
}
*/