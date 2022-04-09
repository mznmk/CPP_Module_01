/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:48:44 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 19:04:27 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"

// ======================== constructor / destructor ======================== //

// HumanA::HumanA(std::string name, Weapon &weapon)
// {
//     HumanA::_name = name;
//     HumanA::_weapon = weapon;
// }
HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{

}

// ================================= method ================================= //

void    HumanA::attack()
{
    std::cout << HumanA::_name;
    std::cout << " attacks with their ";
    std::cout << HumanA::_weapon.getType();
    std::cout << std::endl;
}
