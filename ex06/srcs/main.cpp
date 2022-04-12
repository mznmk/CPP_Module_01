/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:19:03 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/12 09:00:20 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/HarlFilter.hpp"
#include <stdlib.h>

int main(int argc, char **argv)
{
    // [ check argument ]
    if (argc != 2)
    {
        std::cout << CLR_RED FNT_BOLD
                  << "USAGE: ./harlFilter level"
                  << ESC_RESET << std::endl;
        return (1);
    }

    // // [ execute command (static) ]
    // HarlFilter hs;
    // hs.complain(argv[1]);
    
    // [ execute command (dynamic) ]
    HarlFilter *hd = new HarlFilter;
    hd->complain(argv[1]);
    delete hd;

    // [ return ]    
    return (0);
}
