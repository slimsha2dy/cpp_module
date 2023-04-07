/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:33:05 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/07 17:59:18 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void    find_mod(std::ifstream &ifile, std::ofstream &ofile, std::string str[], std::string line);

int main(int ac, char **av)
{
    std::ifstream   ifile;
    std::ofstream   ofile;
    std::string     str[3];
    std::string     line;

    if (ac != 4)
    {
        std::cout << "Invalid parameters" << std::endl;
        return (0);
    }
    str[0] = static_cast<std::string>(av[1]);
    str[1] = static_cast<std::string>(av[2]);
    str[2] = static_cast<std::string>(av[3]);
    ifile.open(str[0], std::ios::in);   // std::ios::in = Read mode
    if (ifile.fail())
    {
        std::cout << "Failed to open file" << std::endl;
        return (0);
    }
    ofile.open(str[0].append(".replace"), std::ios::out);	// std::ios::out = Write mode
    while (getline(ifile, line))
    {
        find_mod(ifile, ofile, str, line);
    }

    ifile.close();
    ofile.close();
    return (0);
}

void    find_mod(std::ifstream &ifile, std::ofstream &ofile, std::string str[], std::string line)
{
    std::string s1 = str[1];
    std::string s2 = str[2];
    std::string::size_type  mod_i;

    mod_i = line.find(s1);
    while (mod_i != std::string::npos)	// there is no s1 in line
	{
		ofile << line.substr(0, mod_i) << s2;
		line = line.substr(mod_i + s1.length());
		mod_i = line.find(s1);
	}
    ofile << line;
    if (!ifile.eof())
	    ofile << std::endl;
}
