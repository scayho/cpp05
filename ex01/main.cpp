/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:33:55 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/20 09:01:25 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
    return (o);
}

std::ostream & operator << (std::ostream & o, Form const & rhs)
{
    o << rhs.GetName() << ", Form grade for sign is " << rhs.GetGrade_Sign() << " and the execute grade is " << rhs.GetGrade_Exec() << " with the state of sign is " << rhs.GetSign() << "." << std::endl;
    return (o);
}

int main()
{
    Bureaucrat sa(std::string("jamal"), -44);
    Bureaucrat ssa(std::string("hamid"), 449);
    Bureaucrat ssaa(std::string("jahad"), 1);
    Bureaucrat sssaa(ssaa);
    sa = ssa;
    std::cout << ssaa << std::endl;
    ssaa.GradeDown(1);
    std::cout << ssaa << std::endl;
    ssaa.GradeUp(1);
    std::cout << ssaa << std::endl;
    ssaa.GradeUp(1);
    std::cout << ssaa << std::endl;
    std::cout << "----------------" << std::endl;
    Form s = Form();
    Form ss(s);
    Form sss("sss", 0, 100, 140);
    Bureaucrat good_ber("chair", 1);
    Bureaucrat bad_ber("officier", 130);
    std::cout << sss << std::endl;
    good_ber.signForm(sss);    
    std::cout << sss << std::endl;
    s = sss;
    bad_ber.signForm(sss);    
    std::cout << sss << std::endl;
}
