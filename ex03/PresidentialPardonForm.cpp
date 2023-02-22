/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:46:22 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 10:09:01 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("president", 0, 25, 5)
{
    std::cout << "default constructor of PresidentialPardonForm has been called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "default desstructor of PresidentialPardonForm has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)  : AForm("president", 0, 25, 5)
{
    Target = target;
    std::cout << "paramitrized constructor of PresidentialPardonForm has been called" << std::endl;   
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s)
{
    this->Target = s.Target;
}

PresidentialPardonForm&  PresidentialPardonForm::operator = (const PresidentialPardonForm &s)
{
    this->Target = s.Target;
    return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const // check exception
{
    if (executor.getGrade() > this->GetGrade_Exec())
        throw AForm::GradeTooLowException();
    std::cout << Target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}