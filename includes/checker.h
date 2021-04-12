/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totaisei <totaisei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:58 by totaisei          #+#    #+#             */
/*   Updated: 2021/04/12 18:42:43 by totaisei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include <unistd.h>
#include <stdlib.h>

#include "libft.h"

int     *convert_argv_to_nums(int input_count, char **input);
t_bool  is_sorted_ary(int *nums, int size);

#endif

