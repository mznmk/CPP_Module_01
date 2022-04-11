/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relpace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:52:12 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 02:31:01 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

// ================================= const ================================== //

# define ERR_MSG_READ_FILE      "ERROR: could not open file"

// ================================ library ================================= //

# include <fstream>
# include <sstream>
# include <string>
# include <iostream>

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

// ================================= class ================================== //

class Replace
{
    private:
        // [ variable ]
        std::string _readpath;
        std::string _writepath;
        std::string _s1;
        std::string _s2;
        // [ method ]
        void    _replace(std::string &buff);
    public:
        // [ constructor / destructor ]
        Replace(const std::string &readpath,
                const std::string &s1,
                const std::string &s2);
        ~Replace();
        // [ method ]
        void    replace();
};

#endif
