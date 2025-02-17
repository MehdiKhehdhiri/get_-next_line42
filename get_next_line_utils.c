/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhehdir <mkhehdir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:58:07 by mkhehdir          #+#    #+#             */
/*   Updated: 2024/07/09 21:01:25 by mkhehdir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

size_t	ft_strsize(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_lstlen(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst != NULL)
	{
		len += ft_strsize(lst->buf);
		lst = lst->next;
	}
	return (len);
}

void	*ft_lstreset(t_list *lst)
{
	t_list	*temp;

	while (lst != NULL)
	{
		temp = (lst)->next;
		free(lst);
		lst = temp;
	}
	lst = NULL;
	return (NULL);
}
