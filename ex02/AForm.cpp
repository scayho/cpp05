/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:18:52 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/20 08:22:19 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

void     AForm::boundtheGrade(const Bureaucrat& ber)
{
    try
    {
        if (this->GetGrade_Exec() < ber.getGrade())
            throw AForm::GradeTooHighException();
        // if (i < 1)
        //     throw Form::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


int     AForm::boundtherange(const int i) // modifie the function to be using the grade sign
{
    try
    {
        if (i > 1)
            throw AForm::GradeTooHighException();
        if (i < 1)
            throw AForm::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (i);
}

AForm  &AForm::operator = (const AForm &s)
{
    std::cout << "copy operator has been called for the class AForm" << std::endl;
    this->sign = s.sign;
    return (*this);
}

AForm::AForm()  : name("paper"), sign(0), grade_sign(150) ,grade_exec(150)
{
    std::cout << "default constructor has been called for the class AForm" << std::endl;
    
}

AForm::AForm(const std::string& name, bool s,  int gs,  int ge)   : name(name), sign(s), grade_sign(boundtherange(gs)) ,grade_exec(boundtherange(ge))
{
    std::cout << "paramitrized constructor has been called for the class AForm" << std::endl;
}

AForm::AForm(const AForm &s)   : name(s.name), sign(s.GetSign()), grade_sign(boundtherange(s.GetGrade_Sign())) ,grade_exec(boundtherange(s.GetGrade_Exec()))
{
    std::cout << "copy constructor has been called for the class AForm" << std::endl;
}

AForm::~AForm()
{
    std::cout << "default destructor has been called for the class AForm" << std::endl;
}

const std::string AForm::GetName() const
{
    return (this->name);
}

bool AForm::GetSign() const
{
    return (this->sign);
}

 int AForm::GetGrade_Sign() const
{
    return ((this->grade_sign));
}

 int AForm::GetGrade_Exec() const
{
    return ((this->grade_exec));
}

void AForm::beSigned(Bureaucrat &ber)
{
    this->boundtherange(ber.getGrade());
    // if (ber.getGrade() > grade_sign)
    //     throw AForm::GradeTooLowException();
    sign = true;      
}
