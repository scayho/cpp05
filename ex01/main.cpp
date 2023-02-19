/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:33:55 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/19 03:24:31 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
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
    
}
