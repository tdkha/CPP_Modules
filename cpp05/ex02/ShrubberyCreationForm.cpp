/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:59:32 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 15:45:46 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("DefaultTarget") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &org) : AForm(org), _target(org._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &org)
{
	if (this != & org)
	{
		AForm::operator=(org);
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
	std::string tree = R"(
		            .        +          .      .          .
     .            _        .                    .
  ,              /;-._,-.____        ,-----.__
 ((        .    (_:#::_.:::. `-._   /:, /-._, `._,
  `                 \   _|`"=:_::.`.);  \ __/ /
                      ,    `./  \:. `.   )==-'  .
    .      ., ,-=-.  ,\, +#./`   \:.  / /           .
.           \/:/`-' , ,\ '` ` `   ): , /_  -o
       .    /:+- - + +- : :- + + -:'  /(o-) \)     .
  .      ,=':  \    ` `/` ' , , ,:' `'--".--"---._/`7
   `.   (    \: \,-._` ` + '\, ,"   _,--._,---":.__/
              \:  `  X` _| _,\/'   .-'
.               ":._:`\____  /:'  /      .           .
                    \::.  :\/:'  /              +
   .                 `.:.  /:'  }      .
           .           ):_(:;   \           .
                      /:. _/ ,  |
                   . (|::.     ,`                  .
     .                |::.    {\
                      |::.\  \ `.
                      |:::(\    |
              O       |:::/{ }  |                  (o
               )  ___/#\::`/ (O "==._____   O, (O  /`
          ~~~w/w~"~~,\` `:/,-(~`"~~~~~~~~"~o~\~/~w|/~
   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\|/~~
  )";
  	AForm::execute(b);
	std::ofstream outFile((_target + "_shrubbery").c_str());
	if (!outFile.is_open())
		throw std::runtime_error("Couldn't open file " + _target + "_shrubbery");
	outFile << tree;
	outFile.close();
}