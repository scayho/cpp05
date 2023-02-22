/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:02:39 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/22 16:52:37 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    this->functions[0] = &Intern::makerobot;
    this->functions[1] = &Intern::makeshrubbery;
    this->functions[2] = &Intern::makepresidential;
    std::cout << " the default constructor of the class Intern has been called" << std::endl;
}
Intern::~Intern()
{
    std::cout << " the desstructor of the class Intern has been called" << std::endl;
}
// Intern::Intern(const std::string &target)
// {
//     this->functions[0] = &Intern::makerobot;
//     this->functions[1] = &Intern::makeshrubbery;
//     this->functions[2] = &Intern::makepresidential;
//     std::cout << " the structor of the class Intern has been called" << std::endl;
// }
Intern::Intern(const Intern &s)
{
    (void)s;
    this->functions[0] = &Intern::makerobot;
    this->functions[1] = &Intern::makeshrubbery;
    this->functions[2] = &Intern::makepresidential;
    std::cout << " the copy constructor of the class Intern has been called" << std::endl;
}
Intern  &Intern::operator = (const Intern &s)
{
    (void)s;
    return (*this);
    std::cout << " the structor of the class Intern has been called" << std::endl;
}

AForm* Intern::makeForm(const std::string& form_name, const std::string& form_target)
{
    std::string s[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    int i = 0;
    while (i < 3)
    {
        if (s[i] == form_name)
        {
            std::cout << " Intern creates " << form_name << std::endl;
            return ((this->*functions[i])(form_target));
        }
        i++;
    }
    return (NULL);
}

AForm* Intern::makerobot(const std::string& target)
{
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makeshrubbery(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makepresidential(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}

