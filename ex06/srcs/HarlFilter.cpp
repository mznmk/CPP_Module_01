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

#include "../incs/HarlFilter.hpp"

// ======================== constructor / destructor ======================== //

HarlFilter::HarlFilter()
{

}

HarlFilter::~HarlFilter()
{

}

// ================================= method ================================= //

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	HarlFilter::_debug(std::string level)
{
    std::cout << FNT_BOLD CLR_YELLOW
              << "[ " << level << " ]\n"
              << ESC_RESET
              << MSG_DEBUG
              << std::endl;
}

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	HarlFilter::_info(std::string level)
{
    std::cout << FNT_BOLD CLR_YELLOW
              << "[ " << level << " ]\n"
              << ESC_RESET
              << MSG_INFO
              << std::endl;
}

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	HarlFilter::_warning(std::string level)
{
    std::cout << FNT_BOLD CLR_YELLOW
              << "[ " << level << " ]\n"
              << ESC_RESET
              << MSG_WARNING
              << std::endl;
}

/*!
** @brief   print message (log level: debug)
** @param   level   log level
** @return  none
*/
void	HarlFilter::_error(std::string level)
{
    std::cout << FNT_BOLD CLR_YELLOW
              << "[ " << level << " ]\n"
              << ESC_RESET
              << MSG_ERROR
              << std::endl;
}

/*!
** @brief   print message (log level: not found)
** @return  none
*/
void    HarlFilter::_notFound(void)
{
    std::cout << FNT_BOLD CLR_YELLOW
              << "[ " << LEV_NOTFOUND << " ]"
              << ESC_RESET
              << std::endl;
}

/*!
** @brief   print message
** @param   level   print message form this level and above
** @return  none
*/
void	HarlFilter::complain(std::string level)
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
    void (HarlFilter::*funcs[])(std::string) = {
        &HarlFilter::_debug,
        &HarlFilter::_info,
        &HarlFilter::_warning,
        &HarlFilter::_error
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
            (this->*funcs[i])(levels[i]);
            exec_count++;
        }
    }
    if (exec_count == 0) {
        _notFound();
    }
}