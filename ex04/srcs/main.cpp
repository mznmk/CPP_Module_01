/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:52:09 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 14:12:06 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Relpace.hpp"
#
int	main(int argc, const char **argv)
{
    // [ check argument ]
    if (argc != 4) {
        std::cerr << FNT_BOLD CLR_RED
                << "USAGE: ./replace filename s1 s2 (s1 != \"\")"
                << ESC_RESET << std::endl;
        return (1);
    }

    // // [ replace word (static) ]
    // Replace rs = Replace(argv[1], argv[2], argv[3]);
    // rs.replace();

    // [ replace word (dynamic) ]
    Replace *rd = new Replace(argv[1], argv[2], argv[3]);
    rd->replace();
    delete rd;

    // [ return ]
    return (0);
}
