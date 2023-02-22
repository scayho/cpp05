/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:33:55 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/22 18:34:03 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
    return (o);
}

std::ostream & operator << (std::ostream & o, AForm const & rhs)
{
    o << rhs.GetName() << ", AForm grade for sign is " << rhs.GetGrade_Sign() << " and the execute grade is " << rhs.GetGrade_Exec() << " with the state of sign is " << rhs.GetSign() << "." << std::endl;
    return (o);
}

int main()
{
    Bureaucrat ssaa(std::string("jahad"), 10);
    RobotomyRequestForm salam("pink");
    // PresidentialPardonForm salams("pink");
    // ShrubberyCreationForm d("pink");
    // std::cout << std::endl << std::endl;
    ssaa.executeForm(salam);
    std::cout << std::endl << std::endl;
    // std::cout << std::endl << std::endl;
    // ssaa.executeForm(salams);
    // std::cout << std::endl << std::endl;
    // std::cout << std::endl << std::endl;
    // ssaa.executeForm(d);
    // std::cout << std::endl << std::endl;

    // Intern ss;
    // AForm *pp;
    
    // // ss.makeForm("robotomy request", "hamid");
    // pp = ss.makeForm("robotomy request", "hamid");
    // std::cout << pp->GetName() << std::endl;
    // pp = ss.makeForm("shrubbery creation", "hamid");
    // std::cout << pp->GetName() << std::endl;
    // pp = ss.makeForm("presidential pardon", "hamid");
    // std::cout << pp->GetName() << std::endl;
}
