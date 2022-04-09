/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 09:36:46 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 12:22:12 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"
#include <stdlib.h>

Zombie* zombieHorde(int N, std::string name);

int main(int argc, char **argv)
{
    Zombie  *zombies;
    std::string sname;

    // [ parameters are proper ? ]
    if (argc != 3)
        return (EXIT_FAILURE);

    // [ create zombie horde ]
    int N;
    N = atoi(argv[1]);
    sname = argv[2];
    zombies = zombieHorde(N, sname);
    if (!zombies)
        return (EXIT_FAILURE);
    for (int i = 0; i < N; i++) {
        zombies[i].announce();
    }
    delete[] zombies;

    // [ return ]
    return (EXIT_SUCCESS);
}
