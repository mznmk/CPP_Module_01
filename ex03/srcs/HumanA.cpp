/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:48:44 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 11:36:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HumanA.hpp"

// ======================== constructor / destructor ======================== //

// HumanA::HumanA(std::string name, Weapon &weapon)
// {
//     _name = name;
//     _weapon = weapon;
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
    std::cout << _name;
    std::cout << " attacks with their ";
    std::cout << _weapon.getType();
    std::cout << std::endl;
}
