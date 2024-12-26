/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:49:46 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 19:57:12 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
// #include <stdlib.h>
#include <sstream>
#include <fstream>

int	open_files(const char *filename, std::ifstream &in, std::ofstream &out)
{
	std::string file_name(filename);

	in.open(file_name.c_str());
	out.open((file_name + ".replace").c_str());
	if (!in)
	{
		std::cerr << "Error: Failed to open input file." << std::endl;
		return 1;
	}
	if (!out)
	{
		std::cerr << "Error: Failed to open output file." << std::endl;
		in.close();
		return 1;
	}
	return 0;
}

void	read_replace(
	std::string &str,
	const std::string &to_replace,
	const std::string &be_replaced)
{
	size_t	match_pos = 0;

	if (to_replace.empty())
        return;

	while ((match_pos = str.find(to_replace, match_pos)) != std::string::npos)
	{
		str.erase(match_pos, to_replace.length());
		str.insert(match_pos, be_replaced);
		match_pos += be_replaced.length();
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./sed++ file to_replace be_replaced" << std::endl;
		return 1;
	}
	
	std::string			to_replace(av[2]);
	std::string			be_replaced(av[3]);
	std::ifstream		in_stream;
	std::ofstream		out_stream;
	std::stringstream	str_stream;
	std::string			str;

	if (to_replace.empty())
	{
		std::cout << "String to replace is empty!" << std::endl;
		return 1;
	}
	
	if (open_files(av[1], in_stream, out_stream))
		return (1);
	str_stream << in_stream.rdbuf();
	str =  str_stream.str();
	
	read_replace(str, to_replace, be_replaced);
	out_stream << str;
	
	in_stream.close();
    out_stream.close();
	
	return 0;
}