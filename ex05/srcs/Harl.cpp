/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:07 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 15:02:54 by mmizuno          ###   ########.fr       */
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

/*!
** @brief   print message (log level: debug)
** @return  none
*/
void	Harl::debug(void)
{
    std::cout << CLR_YELLOW
              << "[ DEBUG ]\n"
              << ESC_RESET
              << MSG_DEBUG << std::endl;
}

/*!
** @brief   print message (log level: info)
** @return  none
*/
void	Harl::info(void)
{
    std::cout << CLR_YELLOW
              << "[ INFO ]\n"
              << ESC_RESET
              << MSG_INFO << std::endl;
}

/*!
** @brief   print message (log level: warning)
** @return  none
*/
void	Harl::warning(void)
{
    std::cout << CLR_YELLOW
              << "[ WARNING ]\n"
              << ESC_RESET
              << MSG_WARNING << std::endl;
}

/*!
** @brief   print message (log level: error)
** @return  none
*/
void	Harl::error(void)
{
    std::cout << CLR_YELLOW
              << "[ ERROR ]\n"
              << ESC_RESET
              << MSG_ERROR << std::endl;
}

/*!
** @brief   print message
** @param   level   print message form this level and above
** @return  none
*/
void	Harl::complain(std::string level)
{
    // [ variable ]
    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    void (Harl::*funcs[LEVEL_COUNT])();
    funcs[0] = &Harl::debug;
    funcs[1] = &Harl::info;
    funcs[2] = &Harl::warning;
    funcs[3] = &Harl::error;

    // [ print message ]
    for (int i = 0; i < LEVEL_COUNT; i++) {
        if (level == levels[i]) {
            (this->*funcs[i])();
            break;
        }
    }
}
