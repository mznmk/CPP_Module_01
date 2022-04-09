/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:19:10 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 14:34:36 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    // [ create string ]
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // [ print memory address ]
    std::cout << "< memory address >" << std::endl;
    std::cout << "Literal  :" << &str << std::endl;
    std::cout << "Pointer  :" << stringPTR << std::endl;
    std::cout << "Reference:" << &stringREF << std::endl;

    // [ print value ]
    std::cout << "< value >" << std::endl;
    std::cout << "Literal  :" << str << std::endl;
    std::cout << "Pointer  :" << *stringPTR << std::endl;
    std::cout << "Reference:" << stringREF << std::endl;

    // [ return ]
    return (0);
}
