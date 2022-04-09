/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:54:18 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 19:03:40 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

// ================================ library ================================= //

# include <iostream>
# include <string>

// ================================= class ================================== //

class Weapon
{
    private:
        // [ variable ]
        std::string         _type;
    public:
        // [ constructor / destructor ]
        Weapon(std::string type);
        ~Weapon();
        // [ setter / getter ]
        void                setType(std::string type);
        const std::string   &getType();
};

#endif
