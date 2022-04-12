/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:03 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 14:59:59 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"
#include <stdlib.h>

int main(int argc, char **argv)
{
    // [ check argument ]
    if (argc == 1)
    {
        // [ variable ]
        std::string levels[] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
        };

        // // [ print message (static) ]
        // srand(time(NULL));
        // Harl hs;
        // for (int i = 0; i < 10; i++) {
        //     hs.complain(levels[rand() % LEVEL_COUNT]);
        // }

        // [ print message (dynamic) ]
        srand(time(NULL));
        for (int i = 0; i < 10; i++) {
            Harl *hd = new Harl;
            hd->complain(levels[rand() % LEVEL_COUNT]);
            delete hd;
        }
    }
    else if (argc == 2)
    {
        // [ print message (static) ]
        Harl h;
        h.complain(argv[1]);
    }
    else
    {
        std::cout << CLR_RED FNT_BOLD
                  << "USAGE: .harl or ./harl level"
                  << ESC_RESET << std::endl;
        return (EXIT_FAILURE);
    }

    // [ return ]    
    return (EXIT_SUCCESS);
}
