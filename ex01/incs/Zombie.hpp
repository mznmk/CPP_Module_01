/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:37:28 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 11:27:57 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

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
