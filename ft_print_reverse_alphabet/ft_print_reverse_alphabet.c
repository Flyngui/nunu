/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:25:07 by guiferre          #+#    #+#             */
/*   Updated: 2025/02/27 19:41:54 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 123;
	while (--c >= 97)
		write(1, &c, 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
}

/*
alfabeto
numa linha
reversed
lowercase
*/
