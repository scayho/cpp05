/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:34:03 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/22 18:56:10 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private :
        const std::string name;
        int grade; // highest grade in the grade 1 the one jahad possess | and the lowest grade in 150 the one a possess

    public :
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & ber);
        Bureaucrat(std::string const &name, int i);
        std::string getName() const;
        int getGrade() const;
        void GradeUp(int i); //it must decress the grade
        void GradeDown(int i); //it must incress the grade
        Bureaucrat  &operator = (const Bureaucrat &s);
        class GradeTooLowException :  public std::exception
        {
            public:
                // const char *what() const _NOEXCEPT()
                const char *what() const throw ()
                 {
                    
                    return ("error message GradeTooLowException is called ");
                 }
        };
        class GradeTooHighException :  public std::exception
        {
            public:
                const char *what() const _NOEXCEPT;
                 {
                    try
                    {
                        int i = 0;
                        if (i == 0)
                            throw std::exception();
                    }
                    catch(const std::exception& e)
                    {
                        std::cerr << e.what() << '\n';
                    }
                    return ("error message GradeTooHighException is called ");
                 }
        };

};
std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs);

//throw is like the ``return`` it inform the result of the call and its unignorable 
//the diferance is that the ``return has a specific type `` `` throw is flexible in term of type``


#endif