# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicholas_bomber.sh                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmotlaf <kmotlaf@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 01:17:08 by kmotlaf           #+#    #+#              #
#    Updated: 2018/03/23 01:17:12 by kmotlaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat yearbook.txt | grep -i "bomber" | cut -f3 | grep [0-9] | tr -d "\.\-"
