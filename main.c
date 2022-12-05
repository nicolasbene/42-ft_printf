/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibenoit <nibenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:56:48 by nibenoit          #+#    #+#             */
/*   Updated: 2022/12/05 13:43:57 by nibenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <stdio.h>

int	main()
{
	char *str = "FLAG_STR";
	char c = 'C';
	int	d = 2147483647;
	unsigned int u = 98765;
	int hex = 425678;

	int res_ftprintf = 0;
	int	res_printusine = 0;

	printf("STR\n");
	res_ftprintf = ft_printf("ft_printf str : %s\n", NULL);
	res_printusine = printf("printf str : %s\n", NULL);
	printf("res_FT_PRINTF : %d\n res_PRINTF_USINE : %d\n", res_ftprintf, res_printusine);
	printf("-------------------------\n");
	ft_printf("ft_printf str : %s |\n", str);
	printf("printf d'usine str : %s |\n", str);
	printf("-------------------------\n");


	printf("CHAR\n");
	ft_printf("ft_printf char : %c ok c'est bon\n", '0');
	printf("printf d'usine char : %c ok c'est bon\n", '0');
	printf("\n-------------------------\n");
		printf("CHAR\n");
	ft_printf("ft_printf char : %c ok c'est bon\n", c);
	printf("printf d'usine char : %c ok c'est bon\n", c);
	printf("\n-------------------------\n");

	printf("POINTEUR\n");
	ft_printf("ft_printf ptr : %p\n", 0);
	printf("printf d'usine ptr : %p\n", 0);
	printf("\n-------------------------\n");
	
	printf("DECIMAL\n");
	ft_printf("ft_printf decimal : %d ok c'est bon premier D, deuxieme d : %i\n", d, d);
	printf("printf d'usine decimal : %d ok c'est bon premier D, deuxieme d : %i\n", d, d);

	printf("\n-------------------------\n");
	printf("UINT\n");
	ft_printf("ft_printf uint : %u ok c'est bon premier D, deuxieme d : %u\n", u, u);
	printf("printf d'usine uint : %u ok c'est bon premier D, deuxieme d : %u\n", u, u);

	printf("\n-------------------------\n");
	printf("HEXA\n");
	ft_printf("ft_printf uint : %x ok c'est bon premier D, deuxieme d : %X\n", hex, hex);
	printf("printf d'usine uint : %x ok c'est bon premier D, deuxieme d : %X\n", hex, hex);

	printf("\n-------------------------\n");
	printf("POURCENTAGE\n");
	ft_printf("ft_printf uint : %% ok c'est bon \n");
	printf("printf d'usine uint : %% ok c'est bon\n");



	return (0);
}

