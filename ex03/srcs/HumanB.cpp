/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:48:44 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/10 20:17:58 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanB.hpp"

// ======================== constructor / destructor ======================== //

HumanB::HumanB(std::string name)
{
    HumanB::_name = name;
    HumanB::_weapon = NULL;
}

HumanB::~HumanB()
{

}

// ================================= method ================================= //

void    HumanB::attack()
{
    std::cout << HumanB::_name;
    std::cout << " attacks with their ";
    if (!HumanB::_weapon)
        std::cout << "hand... (T T)";
    else
        std::cout << (*HumanB::_weapon).getType();
    std::cout << std::endl;
}

// ============================= setter / getter ============================ //

void    HumanB::setWeapon(Weapon &weapon)
{
    HumanB::_weapon = &weapon;
}
