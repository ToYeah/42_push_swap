/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totaisei <totaisei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:09:32 by totaisei          #+#    #+#             */
/*   Updated: 2021/04/12 18:45:48 by totaisei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    int count;
    int *input_nums;

    if (argc == 1)
        return (1);
    count = 0;

    input_nums = convert_argv_to_nums(argc - 1, &argv[1]);
    if (input_nums == 0)
    {
        printf("%s\n", "Error");
        return (1);
    }
    if ( is_sorted_ary(input_nums, argc - 1))
        return (0);
    int i = 0;
    while(i < argc - 1)
    {
        printf("%d\n", input_nums[i]);
        i++;
    }
}