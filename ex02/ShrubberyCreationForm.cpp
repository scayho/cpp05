/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:46:30 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 10:53:52 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery", 0, 145, 137)
{
    std::cout << "default constructor of ShrubberyCreationForm has been called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "default desstructor of ShrubberyCreationForm has been called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("shrubbery", 0, 145, 137)
{
    Target = target;
    std::cout << "paramitrized constructor of ShrubberyCreationForm has been called" << std::endl;   
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) 
{
    Target = s.Target;
}
ShrubberyCreationForm&  ShrubberyCreationForm::operator = (const ShrubberyCreationForm &s)
{
    Target = s.Target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const // check exception
{
    if (executor.getGrade() > this->GetGrade_Exec())
        throw AForm::GradeTooLowException();
    std::ofstream outfile;
    outfile.open(std::string(Target + "::shrubbery"), std::ofstream::out); 
    outfile <<
"      /\\ \n"
"     /  \\ \n"
"    /    \\ \n"
"   /      \\ \n"
"  /        \\ \n"
" /__________\\ \n"
"      ||\n"
"      ||\n"
"      ||\n"
        << std::endl;
}
