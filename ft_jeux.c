/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jeux.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfleuria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:33:29 by mfleuria          #+#    #+#             */
/*   Updated: 2016/03/10 20:37:20 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

/*
**	static int	joueur = 1;
**	static int	cpt_tour = 0;
**	static int	tab[9];
*/

static int	ft_check(int tab[9])
{
	if (tab[0] == tab[1] && tab[1] == tab[2] && tab[0] != 0)
		return (tab[0]);
	if (tab[3] == tab[4] && tab[4] == tab[5] && tab[3] != 0)
		return (tab[3]);
	if (tab[6] == tab[7] && tab[7] == tab[8] && tab[6] != 0)
		return (tab[6]);
	if (tab[0] == tab[3] && tab[3] == tab[6] && tab[0] != 0)
		return (tab[0]);
	if (tab[1] == tab[4] && tab[4] == tab[7] && tab[1] != 0)
		return (tab[1]);
	if (tab[2] == tab[5] && tab[5] == tab[9] && tab[2] != 0)
		return (tab[2]);
	if (tab[0] == tab[4] && tab[4] == tab[8] && tab[0] != 0)
		return (tab[0]);
	if (tab[2] == tab[4] && tab[4] == tab[6] && tab[2] != 0)
		return (tab[2]);
	return (0);
}

int			ft_jeux(t_rect *rect, t_env *e)
{
	if (e->joueur == 1 && e->tab[rect->pos] == 0)
	{
	ft_putendl("j1");
		ft_draw_circle(e, *rect);
		e->tab[rect->pos] = 1;
		e->joueur = 2;
	}
	else if (e->joueur == 2 && e->tab[rect->pos] == 0)
	{
	ft_putendl("j2");
		ft_draw_cross(e, *rect);
		e->tab[rect->pos] = 2;
		e->joueur = 1;
	}
	else
		return (-1);
	if (++e->cpt_tour == 9 || ft_check(e->tab) != 0)
		return (ft_check(e->tab));
	return (3);
}
