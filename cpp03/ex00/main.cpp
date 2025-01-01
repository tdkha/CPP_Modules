/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 00:19:17 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 00:57:27 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void battle_result(ClapTrap  &robot1, ClapTrap &robot2)
{
	std::cout << "---------------------------------" << std::endl;
	std::cout << "BATTLE RESULT" << std::endl;
	std::cout << robot1.getName()
				<< " has " << robot1.getHitPts() << "HP" << std::endl;
	std::cout << robot2.getName()
				<< " has " << robot2.getHitPts() << "HP" << std::endl;
	std::cout << "---------------------------------" << std::endl;
}

int	main(void)
{
	ClapTrap robot1("Robot1");
	ClapTrap robot2("Robot2");

	robot1.attack("Robot2");
	robot2.takeDamage(robot1.getAttackDmg());
	robot2.beRepaired(0);
	battle_result(robot1, robot2);

	ClapTrap angryRobot("AngryRobot");
	int N = 10;

	for (int i = 0; i < N; ++i)
	{
		angryRobot.attack("Robot1");
		robot1.takeDamage(10);
	}
	battle_result(angryRobot, robot1);

	for (int i = 0; i < N; ++i)
	{
		angryRobot.attack("Robot2");
		robot2.takeDamage(angryRobot.getAttackDmg());
		robot2.beRepaired(9999);
	}
	battle_result(angryRobot, robot2);
	return 0;
}