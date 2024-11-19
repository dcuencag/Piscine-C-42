/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:59:12 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 18:28:59 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    is_alphanumeric(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c <= '0' && c >= '9')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

char	*ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (is_alphanumeric(str[0]) || !is_alphanumeric(str[i - 1]))
        is_alphanumeric(str[i]);
        if (str[i])
        {
            
        }
        i++;
    }
    
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"

    ft_strcapitalize(str);

}