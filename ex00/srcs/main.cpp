/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:37:23 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/09 09:18:29 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/Zombie.hpp"

Zombie*     newZombie(std::string name);
void        randomChump(std::string name);

int	main(void)
{
	//[ create zombie ]
	// static class
	std::cout << "---------- static class ----------" << std::endl;
	Zombie sz1("Kuwahara");
	sz1.announce();
	Zombie sz2("Sano");
	sz2.announce();
	std::cout << "---------------------------------" << std::endl;
	
	// dynamic class
	std::cout << "---------- dynamic class ----------" << std::endl;
	Zombie *dz1, *dz2;
	dz1 = new Zombie("Maki");
	dz1->announce();
	delete dz1;
	dz2 = new Zombie("Austin");
	dz2->announce();
	delete dz2;
	randomChump("Miyazaki");
	randomChump("Soto");
	std::cout << "-----------------------------------" << std::endl;

	// [ return ]
	return (0);
}
