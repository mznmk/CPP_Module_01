/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:03 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 05:38:10 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

int main(int argc, char **argv)
{
    // [ check argument ]
    if (argc != 2) {
        std::cout << CLR_RED FNT_BOLD
                  << "USAGE: ./harl DEBUG|INFO|WARNING|ERROR"
                  << ESC_RESET << std::endl;
        return (1);
    }

    // [ execute command ]
    Harl harl;
    harl.complain(std::string(argv[1]));

    // [ return ]    
    return (0);
}
