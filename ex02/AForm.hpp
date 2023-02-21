/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:56:17 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/20 08:57:23 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private :
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_exec;
    public :
        AForm();
        AForm(const std::string& name, bool s, int gs, int ge);
        AForm(const AForm &s);
        AForm  &operator = (const AForm &s);
        virtual ~AForm();
        const std::string GetName() const;
        bool GetSign() const;
        int GetGrade_Sign() const;
        int GetGrade_Exec() const;
        int     boundtherange( int i);
        void     boundtheGrade(const Bureaucrat& ber);
        void beSigned(Bureaucrat &ber);
        virtual void execute(Bureaucrat const & executor) const = 0; // implement
        class GradeTooLowException :  public std::exception
        {
            public:
                // const char *what() const _NOEXCEPT()
                const char *what() const throw()
                {
                    return ("AForm::error message GradeTooLowException is called ");
                }
        };
        class GradeTooHighException :  public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("AForm::error message GradeTooHighException is called ");
                }
        };
};
std::ostream & operator << (std::ostream & o, AForm const & rhs);

#endif