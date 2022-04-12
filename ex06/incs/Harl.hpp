/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:10 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 05:00:10 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

// ================================= const ================================== //

# define LEVEL_COUNT    4

# define MSG_DEBUG      "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n"
# define MSG_INFO       "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!\n"
# define MSG_WARNING    "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n"
# define MSG_ERROR      "This is unacceptable!\nI want to speak to the manager now.\n"
# define LEV_NOTFOUND   "Probably complaining about insignificant problems"

// --------------------------------- color ---------------------------------- //

# define ESC_RESET      "\033[0m"
# define FNT_BOLD       "\033[1m"
# define FNT_FINE       "\033[2m"
# define FNT_ITALIC     "\033[3m"
# define FNT_ULINE      "\033[4m"
# define CLR_BLACK      "\033[38;5;00m"
# define CLR_RED        "\033[38;5;01m"
# define CLR_GREEN      "\033[38;5;02m"
# define CLR_YELLOW     "\033[38;5;03m"
# define CLR_BLUE       "\033[38;5;04m"
# define CLR_MAGENTA    "\033[38;5;05m"
# define CLR_CYAN       "\033[38;5;06m"
# define CLR_WHITE      "\033[38;5;07m"
# define CLR_PINK       "\033[38;5;213m"

// ================================ library ================================= //

# include <string>
# include <iostream>

// ================================= class ================================== //

class Harl
{
    private:
        // [ method ]
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void    notFound(void);
    public:
        // [ constructor / destructor ]
        Harl();
        ~Harl();
        // [ method ]
        void    complain(std::string level);
};

#endif
