/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:07 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 05:38:06 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

// ======================== constructor / destructor ======================== //

Harl::Harl()
{

}

Harl::~Harl()
{

}

// ================================= method ================================= //

void	Harl::debug(void)
{
    std::cout << MSG_DEBUG << std::endl;
}

void	Harl::info(void)
{
    std::cout << MSG_INFO << std::endl;
}

void	Harl::warning(void)
{
    std::cout << MSG_WARNING << std::endl;
}

void	Harl::error(void)
{
    std::cout << MSG_ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
    // [ variable ]
    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    void (Harl::*funcs[4])();
    funcs[0] = &Harl::debug;
    funcs[1] = &Harl::info;
    funcs[2] = &Harl::warning;
    funcs[3] = &Harl::error;

    // [ execute command ]
    bool    exec = false;
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            exec = true;
            (this->*funcs[i])();
        }
    }

    // [ could not exec command ? ]
    if (!exec) {
        std::cerr << FNT_BOLD CLR_RED
                  << MSG_NOTFOUND
                  << ESC_RESET << std::endl;
    }
}
