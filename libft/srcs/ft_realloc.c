/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 14:37:07 by jleu              #+#    #+#             */
/*   Updated: 2016/03/02 14:42:59 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_realloc(void **tab, int new_size)
{
	void	*new;
	int		cpt;

	new = malloc(new_size);
	cpt = 0;
	while (cpt < new_size)
	{
		((char*)new)[cpt] = ((char*)*tab)[cpt];
		cpt++;
	}
	free(*tab);
	*tab = new;
}
