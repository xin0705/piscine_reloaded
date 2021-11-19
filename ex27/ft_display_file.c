/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xizhou <xizhou@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:42:19 by xizhou            #+#    #+#             */
/*   Updated: 2021/11/08 12:11:40 by xizhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "Open file failed.\n", 18);
			return (1);
		}
		while (read(fd, &c, 1))
			write(1, &c, 1);
		if (close(fd) == -1)
		{
			write(2, "close file failed.\n", 19);
			return (1);
		}
	}
	return (0);
}
