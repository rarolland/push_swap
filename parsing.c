/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:02:11 by rarollan          #+#    #+#             */
/*   Updated: 2022/06/15 14:52:37 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void in_list(t_list **lst, char *str)
{
	int *tmp;

	while (*str)
	{
		if (*str == 32 || *str == '-' || *str == '+')
		{
			tmp = malloc(sizeof(int *) * 1);
			if (!tmp)
				return (NULL);
			*tmp = ft_atoi_range(&str);
			ft_lstadd_back(lst, ft_lstnew((void *)tmp));
		}
		else
			return (0);
	}
}

int	has_dup(int *tab, int tabsize)
{
	int count[2];
	
	count[0] = -1;
	while (++count[0] < tabsize - 1)
	{
		count[1] = count[0];
		while (++count[1] < tabsize - 1)
		{
			if (tab[count[0]] = tab[count[1]])
				return (1);
		}
	}
	return (0);
}

int	nbinline(int **tab, int argc, char **argv)


void	check_instructions(char *str)
{
	if (!ft_strncmp(str, "sa", 3))
		return ;
	if (!ft_strncmp(str, "sb", 3))
        return ;
	if (!ft_strncmp(str, "ss", 3))
        return ;
    if (!ft_strncmp(str, "pa", 3))
        return ;
	if (!ft_strncmp(str, "pb", 3))
        return ;
    if (!ft_strncmp(str, "ra", 3))
        return ;
	if (!ft_strncmp(str, "rb", 3))
        return ;
    if (!ft_strncmp(str, "rr", 3))
        return ;
    if (!ft_strncmp(str, "rra", 3))
        return ;
    if (!ft_strncmp(str, "rrb", 3))
        return ;
    if (!ft_strncmp(str, "rrr", 3))
        return ;
	return (0);
}
