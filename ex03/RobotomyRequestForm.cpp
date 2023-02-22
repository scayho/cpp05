/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:46:26 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/22 18:39:48 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robot", 0, 72, 45)
{
    std::cout << "default constructor of RobotomyRequestForm has been called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "default desstructor of RobotomyRequestForm has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)  : AForm("robot", 0, 72, 45)
{
    Target = target;
    std::cout << "paramitrized constructor of RobotomyRequestForm has been called" << std::endl;   
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s)
{
    Target = s.Target;
}

RobotomyRequestForm&  RobotomyRequestForm::operator = (const RobotomyRequestForm &s)
{
    Target = s.Target;
    return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const // check exception
{
    if (executor.getGrade() > this->GetGrade_Exec())
        throw AForm::GradeTooLowException();
    std::cout << std::time(0) << std::endl;
    std::srand(10);
    if ((std::rand() % 2) == 0)
        std::cout << Target << " has been robotomized successfully" << std::endl;
    else
        std::cout << Target << " robotomy failed" << std::endl;
}
