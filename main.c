/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbroque <rbroque@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:37:41 by romannbroqu       #+#    #+#             */
/*   Updated: 2023/03/20 16:45:09 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	error(void)
{
	exit(EXIT_FAILURE);
}

int	main(void)
{
	size_t	i;

	i = 0;
	printf("%zu", i);
	printf("that's a good process\n");
	return (EXIT_SUCCESS);
}
