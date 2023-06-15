/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:09:37 by ahiguera          #+#    #+#             */
/*   Updated: 2023/05/30 20:26:40 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* 
int	main(void)
{
	int	div;
	int	mod;

	div = 9;
	mod = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("el valor de a es: %d \n", div);
	printf("el valor de b es: %d", mod);
	return (0);
} */
