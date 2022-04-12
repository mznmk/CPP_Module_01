/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:37:28 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 09:38:00 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

// ================================= const ================================== //

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

# include <iostream>
# include <string>

// ================================= class ================================== //

class Zombie
{
    private:
        // [ variables ]
        std::string _name;
    public:
        // [ constructor / destructor ]
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        // [ method ]
        void        announce(void); 
        // [ setter / getter ]
        void        setName(std::string name);
};

#endif
