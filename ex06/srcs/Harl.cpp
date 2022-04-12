/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                           :+:      :+:    :+:   */
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

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	Harl::debug(void)
{
    std::cout << FNT_BOLD CLR_YELLOW
              << "[ DEBUG ]\n"
              << ESC_RESET
              << MSG_DEBUG
              << std::endl;
}

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	Harl::info(void)
{
    std::cout << CLR_YELLOW
              << "[ INFO ]\n"
              << ESC_RESET
              << MSG_INFO
              << std::endl;
}

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	Harl::warning(void)
{
    std::cout << CLR_YELLOW
             << "[ WARNING ]\n"
              << ESC_RESET
              << MSG_WARNING
              << std::endl;
}

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	Harl::error(void)
{
    std::cout << CLR_YELLOW
              << "[ ERROR ]\n"
              << ESC_RESET
              << MSG_ERROR
              << std::endl;
}

/*!
** @brief   print message (log level: not found)
** @return  none
*/
void    Harl::notFound(void)
{
    std::cout << CLR_YELLOW
              << "[ " << LEV_NOTFOUND << " ]"
              << ESC_RESET
              << std::endl;
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
    bool filter[] = {
        true,
        true,
        true,
        true
    };
    void (Harl::*funcs[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // [ execute command ]
    // apply filter
    for (int i = 0; i < LEVEL_COUNT; i++) {
        if (level == levels[i])
            break;
        else
            filter[i] = false;
    }
    // execute commands
    int exec_count = 0;
    for (int i = 0; i < LEVEL_COUNT; i++) {
        if (filter[i]) {
            (this->*funcs[i])();
            exec_count++;
        }
    }
    if (exec_count == 0) {
        notFound();
    }
}
