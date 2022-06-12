/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarais <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:19:36 by yarais            #+#    #+#             */
/*   Updated: 2022/06/12 17:13:25 by yarais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(x, y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
		return ;
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i > 1 && i < x) && (j > 1 && j < y))
				ft_putchar(' ');
			else if ((i > 1 && i < x) && (j == 1 || j == y))
				ft_putchar('-');
			else if ((i == 1 || i == x) && (j > 1 && j < y))
				ft_putchar('|');
			else
				ft_putchar('o');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
