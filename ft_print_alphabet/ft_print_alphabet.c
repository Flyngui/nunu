/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:54:18 by guiferre          #+#    #+#             */
/*   Updated: 2025/02/27 19:24:31 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c++ < 'z')
		write(1, &c, 1);
}

int	main(void)
{
	ft_print_alphabet();
}

/*
alfabeto letras minusculas
uma linha
ordem ascendente
comeca no a

*/
