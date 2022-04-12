/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:48:44 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 11:37:37 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanB.hpp"

// ======================== constructor / destructor ======================== //

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB()
{

}

// ================================= method ================================= //

void    HumanB::attack()
{
    std::cout << _name;
    std::cout << " attacks with their ";
    if (!_weapon)
        std::cout << "hand... (T T)";
    else
        std::cout << (*_weapon).getType();
    std::cout << std::endl;
}

// ============================= setter / getter ============================ //

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
