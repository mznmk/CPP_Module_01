/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:51:19 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 18:38:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

// ================================ library ================================= //

# include "../incs/Weapon.hpp"

// ================================= class ================================== //

class HumanB
{
    private:
        // [ variable ]
        std::string _name;
        Weapon      *_weapon;
    public:
        // [ constructor / destructor ]
        HumanB(std::string name);
        ~HumanB();
        // [ method ]
        void        attack();
        // [ setter / getter ]
        void        setWeapon(Weapon &weapon);
};

#endif
