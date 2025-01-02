/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 00:19:17 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 12:36:10 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void battle_result(ClapTrap  &robot1, ClapTrap &robot2)
{
	std::cout << "---------------------------------" << std::endl;
	std::cout << "BATTLE RESULT" << std::endl;
	std::cout << robot1.getName()
				<< " has " << robot1.getHitPts() << " HP" << std::endl;
	std::cout << robot2.getName()
				<< " has " << robot2.getHitPts() << " HP" << std::endl;
	std::cout << "---------------------------------" << std::endl;
}

int	main(void)
{
	FragTrap robot1("Robot1");
	FragTrap robot2("Robot2");

	robot1.attack("Robot2");
	robot2.takeDamage(robot1.getAttackDmg());
	robot2.beRepaired(robot1.getAttackDmg());
	battle_result(robot1, robot2);

	FragTrap angryRobot("AngryRobot");
	int N = 10;

	for (int i = 0; i < N; ++i)
	{
		angryRobot.attack("Robot1");
		robot1.takeDamage(angryRobot.getAttackDmg());
	}
	battle_result(angryRobot, robot1);

	for (int i = 0; i < N; ++i)
	{
		angryRobot.attack("Robot2");
		robot2.takeDamage(angryRobot.getAttackDmg());
		robot2.beRepaired(9999);
	}
	angryRobot.highFivesGuys();
	battle_result(angryRobot, robot2);
	return 0;
}