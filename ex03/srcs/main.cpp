/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:55:00 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 11:39:02 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"
#include "../incs/HumanA.hpp"
#include "../incs/HumanB.hpp"

// [ normal case ]
int main()
{
    // [ HumanA ]
    // crude spiked club" -> "some other type of club"
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    // [ HumanB ]
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}

// // [ corner case ]
// int main()
// {
//     // [ HumanA ]
//     // "crude spiked club" -> "some other type of club"
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanA bob("Bob", club);
//         bob.attack();
//         club.setType("some other type of club");
//         bob.attack();
//     }
//     // [ HumanB ]
//     // "hand... (T T)" -> "some other type of club"
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanB jim("Jim");
//         jim.attack();           // <--- swap
//         jim.setWeapon(club);    // <-/ 
//         club.setType("some other type of club");
//         jim.attack();
//     }
//     return 0;
// }
