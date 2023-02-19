/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:56:17 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/19 04:02:33 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
    private :
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_exec;
    public :
        const std::string GetNmae();
        bool GetSign();
        const int GetGrade_Sign();
        const int GetGrade_Exec();
        void beSigned(const Bureaucrat &ber);
        class GradeTooLowException : public std::exception
        {
            
        };
        
        class GradeTooHighException : public std::exception
        {
            
        };
};


#endif