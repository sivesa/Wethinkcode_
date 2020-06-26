# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_libft_creator.sh                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sisandla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/26 14:40:17 by sisandla          #+#    #+#              #
#    Updated: 2020/06/26 15:23:53 by sisandla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c *.c
ar -rc libft.a *.o
ranlib libft.a
rm -rf *.o
