/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:18:52 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 10:49:56 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void     Form::boundtheGrade(const Bureaucrat& ber)
{
    try
    {
        if (this->GetGrade_Exec() < ber.getGrade())
            throw Form::GradeTooHighException();
        // if (i < 1)
        //     throw Form::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int     Form::boundtherange(const int i)
{
    try
    {
        if (i > 150)
            throw Form::GradeTooHighException();
        if (i < 1)
            throw Form::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (i);
}

Form  &Form::operator = (const Form &s)
{
    std::cout << "copy operator has been called for the class Form" << std::endl;
    this->sign = s.sign;
    return (*this);
}

Form::Form()  : name("paper"), sign(0), grade_sign(150) ,grade_exec(150)
{
    std::cout << "default constructor has been called for the class Form" << std::endl;
    
}

Form::Form(const std::string& name, bool s,  int gs,  int ge)   : name(name), sign(s), grade_sign(boundtherange(gs)) ,grade_exec(boundtherange(ge))
{
    std::cout << "paramitrized constructor has been called for the class Form" << std::endl;
}

Form::Form(const Form &s)   : name(s.name), sign(s.GetSign()), grade_sign(boundtherange(s.GetGrade_Sign())) ,grade_exec(boundtherange(s.GetGrade_Exec()))
{
    std::cout << "copy constructor has been called for the class Form" << std::endl;
}

Form::~Form()
{
    std::cout << "default destructor has been called for the class Form" << std::endl;
}

const std::string Form::GetName() const
{
    return (this->name);
}

bool Form::GetSign() const
{
    return (this->sign);
}

 int Form::GetGrade_Sign() const
{
    return ((int)(this->grade_sign));
}

 int Form::GetGrade_Exec() const
{
    return ((int)(this->grade_exec));
}

void Form::beSigned(Bureaucrat &ber)
{
    if (ber.getGrade() > grade_sign)
        throw Form::GradeTooLowException();
    sign = true;      
}
