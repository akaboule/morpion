/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_rect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 15:16:40 by jleu              #+#    #+#             */
/*   Updated: 2016/03/10 20:01:43 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "morpion.h"

void		ft_draw_rect(t_env *env, t_rect r)
{
	t_point point[4];

	point[0] = ft_new_point(r.x, r.y);
	point[1] = ft_new_point(r.x + r.largeur, r.y);
	point[2] = ft_new_point(r.x + r.largeur, r.y + r.hauteur);
	point[3] = ft_new_point(r.x, r.y + r.hauteur);
	ft_putline(env, point[0], point[1]);
	ft_putline(env, point[1], point[2]);
	ft_putline(env, point[2], point[3]);
	ft_putline(env, point[3], point[0]);
}
