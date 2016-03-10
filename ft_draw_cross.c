/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_cross.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 16:11:07 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 20:02:30 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

void	ft_draw_cross(t_env *env, t_rect rect)
{
	t_point a;
	t_point b;

	a = ft_new_point(rect.x, rect.y);
	b = ft_new_point(rect.x + rect.largeur, rect.y + rect.hauteur);
	ft_putline(env, a, b);
	a = ft_new_point(rect.x, rect.y + rect.hauteur);
	b = ft_new_point(rect.x + rect.largeur, rect.y);
	ft_putline(env, a, b);
}
