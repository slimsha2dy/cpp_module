/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:21:23 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:35:47 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain &other);
        ~Brain();

        Brain& operator =(const Brain &other);
        std::string getIdea(int n) const;
        void    setIdea(std::string s, int n);
};

#endif