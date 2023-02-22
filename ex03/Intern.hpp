/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:02:37 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/22 16:39:31 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    typedef AForm* (Intern::*func)(const std::string&);
    private :
        AForm* makerobot(const std::string& target);
        AForm* makeshrubbery(const std::string& target);
        AForm* makepresidential(const std::string& target);
        func functions[3];
    public :
        Intern();
        ~Intern();
        // Intern(const std::string &target);
        Intern(const Intern &s);
        Intern  &operator = (const Intern &s);
        AForm* makeForm(const std::string& form_name, const std::string& form_target);
};

#endif