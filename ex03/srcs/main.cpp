/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:55:00 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 12:08:24 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Weapon.hpp"
#include "../incs/HumanA.hpp"
#include "../incs/HumanB.hpp"

int main()
{
    // [ normal case ]
        std::cout << "[ normal case ]" << std::endl;

        // < HumanA >
        std::cout << "< HumanA: Bob >" << std::endl;
        {
            Weapon club = Weapon("crude spiked club");
            HumanA bob("Bob", club);
            bob.attack();
            club.setType("some other type of club");
            bob.attack();
        }
        // < HumanB >
        std::cout << "< HumanB: Jim >" << std::endl;
        {
            Weapon club = Weapon("crude spiked club");
            HumanB jim("Jim");
            jim.setWeapon(club);
            jim.attack();
            club.setType("some other type of club");
            jim.attack();
        }

    // [ corner case ]
        std::cout << "[ corner case ]" << std::endl;

        // < HumanA >
        std::cout << "< HumanA: Bob >" << std::endl;
        {
            Weapon club = Weapon("crude spiked club");
            HumanA bob("Bob", club);
            bob.attack();
            club.setType("some other type of club");
            bob.attack();
        }
        // < HumanB >
        std::cout << "< HumanB: Jim >" << std::endl;
        {
            Weapon club = Weapon("crude spiked club");
            HumanB jim("Jim");
            jim.attack();           // <--- swap
            jim.setWeapon(club);    // <-/ 
            club.setType("some other type of club");
            jim.attack();
        }

    // [ return ]
    return (0);
}
