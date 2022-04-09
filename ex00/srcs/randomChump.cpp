/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:37:37 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 07:53:28 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

/*!
** @breif   create zombie & announce message
** @param   name    zombie's name
** @return          none
*/
void    randomChump(std::string name)
{
    Zombie  *zombie;

    // [ allocate memory ]
    zombie = new Zombie(name);

    // [ execute method ]
    zombie->announce();

    // [ deallocate memory ]
    delete zombie;
}
