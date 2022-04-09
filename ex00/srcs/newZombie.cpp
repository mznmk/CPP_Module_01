/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:37:33 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 07:57:04 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

/*!
** @brief   create new zombie
** @param   name    zombie's name
** @return          zombie object
*/
Zombie	*newZombie(std::string name)
{
	Zombie  *zombie;

    // [ allocate memory ]
	zombie = new Zombie(name);

    // [ return memory ]
	return zombie;
}
