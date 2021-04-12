/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totaisei <totaisei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:13:25 by totaisei          #+#    #+#             */
/*   Updated: 2021/04/12 18:42:19 by totaisei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_bool  valid_same_nums(int *nums, int nums_limit)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < nums_limit)
    {
        j = i + 1;
        while(j < nums_limit)
        {
            if (nums[i] == nums[j])
                return (FALSE);
            j++;
        }
        i++;
    }
    return (TRUE);
}

t_bool  convert_input_to_num(char *input, int *res)
{
    int count;

    count = 0;
    while (input[count])
    {
        if (ft_isdigit(input[count]) == 0)
            return (FALSE);
        count++;
    }
    if (ft_atoi_limit(input, res) == FALSE)
        return (FALSE);    
    return (TRUE);
}

int     *convert_argv_to_nums(int input_count, char **input)
{
    int *res;
    int count;

    res = malloc(sizeof(int) * (input_count));
    if (res == NULL)
        return (NULL);
    count = 0;
    while (input[count])
    {
        if (convert_input_to_num(input[count], &res[count]) == FALSE)
        {
            free(res);
            return (NULL);
        }
        count++;
    }
    if (valid_same_nums(res, input_count) == FALSE)
    {
        free(res);
        return (NULL);
    }
    return (res);
}

t_bool is_sorted_ary(int *nums, int size)
{
    int i;

    i = 0;
    while(i < size - 1)
    {
        if (nums[i] > nums[i + 1])
            return (FALSE);
        i++;
    }
    return (TRUE);
}