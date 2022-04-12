/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 09:36:46 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 10:05:19 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"
#include <stdlib.h>

Zombie* zombieHorde(int N, std::string name);

void    printUsage(void)
{
    std::cerr << FNT_BOLD CLR_RED
                << "USAGE: ./zombieHorde N name (0<N)"
                << ESC_RESET << std::endl;
}

int main(int argc, char **argv)
{
    // [ parameters are proper ? ]
    if (argc != 3) {
        printUsage();
        return (EXIT_FAILURE);
    }
    int N = atoi(argv[1]);
    if (N == 0) {
        printUsage();
        return (EXIT_FAILURE);
    }

    // [ create zombie horde ]
    Zombie *zombies = zombieHorde(N, argv[2]);
    if (!zombies) {
        return (EXIT_FAILURE);
    }
    for (int i = 0; i < N; i++) {
        zombies[i].announce();
    }
    delete[] zombies;

    // [ return ]
    return (EXIT_SUCCESS);
}
