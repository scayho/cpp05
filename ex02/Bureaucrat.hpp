/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:34:03 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 05:48:50 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private :
        const std::string name;
        int grade; 

    public :
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & ber);
        Bureaucrat(std::string const &name, int i);
        std::string getName() const;
        int getGrade() const;
        void GradeUp(int i);
        void GradeDown(int i);
        Bureaucrat  &operator = (const Bureaucrat &s);
        void signAForm(AForm & fr);
        void executeForm(AForm const & form); // emplement
        class GradeTooLowException :  public std::exception
        {
            public:
                const char *what() const throw()
                {
                 return ("Bureaucrat::error message GradeTooLowException is called ");
                }
        };
        class GradeTooHighException :  public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Bureaucrat::error message GradeTooHighException is called ");
                }
        };

};
std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs);


#endif