/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfleuria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 14:20:08 by mfleuria          #+#    #+#             */
/*   Updated: 2016/03/10 20:31:28 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MORPION_H
# define MORPION_H

# include "morpion_types.h"
# include "libft/includes/libft.h"
# include <math.h>
# include "minilibx_macos/mlx.h"
# include <unistd.h>
# include <stdlib.h>

t_circle	ft_new_circle(int x, int y, int r);
void		ft_draw_circle(t_env *env, t_rect r);
t_rect		ft_new_rect(int x, int y, int l, int h);
t_rect		*ft_coord_in_rect(t_rect *rect, int x, int y);
void		ft_draw_rect(t_env *env, t_rect r);
t_point		ft_new_point(int x, int y);
void		ft_putline(t_env *env, t_point p1, t_point p2);
void		ft_draw_cross(t_env *env, t_rect rect);
int			ft_jeux(t_rect *rect, t_env *env);

#endif
