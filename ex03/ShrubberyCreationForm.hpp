/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:46:32 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 07:40:27 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public :
        std::string Target;
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &s);
        ShrubberyCreationForm  &operator = (const ShrubberyCreationForm &s);
        void execute(Bureaucrat const & executor) const;
};

#endif