/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:56:17 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/20 08:57:23 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_exec;
    public :
        Form();
        Form(const std::string& name, bool s, int gs, int ge);
        Form(const Form &s);
        ~Form();
        Form  &operator = (const Form &s);
        const std::string GetName() const;
        bool GetSign() const;
        int GetGrade_Sign() const;
        int GetGrade_Exec() const;
        int     boundtherange( int i);
        void beSigned(Bureaucrat &ber);
        class GradeTooLowException :  public std::exception
        {
            public:
                // const char *what() const _NOEXCEPT()
                const char *what() const throw()
                 {
                    return ("Form::error message GradeTooLowException is called ");
                 }
        };
        class GradeTooHighException :  public std::exception
        {
            public:
                const char *what() const throw()
                 {
                    return ("Form::error message GradeTooHighException is called ");
                 }
        };
};
std::ostream & operator << (std::ostream & o, Form const & rhs);

#endif