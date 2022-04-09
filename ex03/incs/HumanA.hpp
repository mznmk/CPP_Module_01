/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:51:24 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 17:44:22 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

// ================================ library ================================= //

# include "../incs/Weapon.hpp"

// ================================= class ================================== //

class HumanA
{
    private:
        // [ variable ]
        std::string _name;
        Weapon      &_weapon;
    public:
        // [ constructor / destructor ]
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        // [ method ]
        void        attack();
        // [ setter / getter ]
 };

#endif
