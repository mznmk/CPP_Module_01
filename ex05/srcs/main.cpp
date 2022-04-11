/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:03 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 06:34:09 by mmizuno          ###   ########.fr       */
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

        // [ execute command ]
        srand(time(NULL));
        // // static
        // Harl harl;
        // for (int i = 0; i < 10; i++) {
        //     std::string level = levels[rand() % 4];
        //     std::cout << CLR_YELLOW
        //               << "[ " << level << " ]"
        //               << ESC_RESET << std::endl;
        //     harl.complain(level);
        // }
        // dynamic
        for (int i = 0; i < 10; i++) {
            Harl *hd = new Harl;
            std::string level = levels[rand() % 4];
            std::cout << CLR_YELLOW
                    << "[ " << level << " ]"
                    << ESC_RESET << std::endl;
            hd->complain(level);
            delete hd;
        }
    }
    else if (argc == 2)
    {
        // [ execute command ]
        Harl h;
        std::cout << CLR_YELLOW
                  << "[ " << argv[1] << " ]"
                  << ESC_RESET << std::endl;
        h.complain(argv[1]);
    }
    else
    {
        std::cout << CLR_RED FNT_BOLD
                  << "USAGE: .harl or ./harl level"
                  << ESC_RESET << std::endl;
        return (1);
    }

    // [ return ]    
    return (0);
}
