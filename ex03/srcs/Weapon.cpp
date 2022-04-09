/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:55:10 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 19:03:49 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"

// ======================== constructor / destructor ======================== //

Weapon::Weapon(std::string type)
{
    Weapon::_type = type;
}

Weapon::~Weapon()
{

}

// ============================= setter / getter ============================ //

void                Weapon::setType(std::string type)
{
    Weapon::_type = type;
}

const std::string   &Weapon::getType()
{
    return Weapon::_type;
}
