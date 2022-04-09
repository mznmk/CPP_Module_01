/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 09:35:00 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 12:25:47 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

/*!
** @brief   create new zombie horde
** @param   N       numbers of zombie
** @param   name    name of zombie
** @return          zombie objects
*/
Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zombies;

    // [ allocate memory ]
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].setName(name);
    }

    // [ return memory ]
    return zombies;
}
