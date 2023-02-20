/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:47:20 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/20 09:01:41 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("chairman"), grade(1)
{
    std::cout << "default constructor has been called " <<std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & ber)
{
    this->grade = ber.grade;
    std::cout << "copy constructor has been called " <<std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "default desstructor has been called " <<std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int i) : name(name)
{
    std::cout << "paramitrized constructor has been called " <<std::endl;
    try 
    {
        if (i > 150)
            throw Bureaucrat::GradeTooHighException();
        if (i < 1)
            throw Bureaucrat::GradeTooLowException();
        grade = i;
    }
    catch (const std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
}

Bureaucrat  &Bureaucrat::operator = (const Bureaucrat &s)
{
    std::cout << "copy assignement operator of  Bureaucrat has been called " <<std::endl;
    this->grade = s.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return(this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}
void Bureaucrat::GradeUp(int i)
{
    try
    {
        if ((grade - i) < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            grade -= i;
    }   
    catch (const std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
}
void Bureaucrat::GradeDown(int i)
{
    try
    {
        if ((grade + i) > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            grade += i;
    }   
    catch (const std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(Form & fr)
{
    try
    {
        fr.beSigned(*this);
        std::cout << name << " signed " << fr.GetName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << name << " couldn't signed " << fr.GetName() << " because he dont have the authority " << std::endl;
    }
}