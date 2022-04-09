/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:37:41 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 09:32:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

// ======================== constructor / destructor ======================== //

Zombie::Zombie(std::string name)
{
    Zombie::_name = name;
    std::cout << Zombie::_name << ": (I'm gonna to be born...)" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << Zombie::_name << ": (I'm not wanna to be killed...) " << std::endl;
}

// ======================== public method (announce) ======================== //

/*!
** @breif   announce message
** @param   none
** @return  none
*/
void    Zombie::announce(void)
{
    std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
