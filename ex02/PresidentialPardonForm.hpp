/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:46:20 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 09:47:38 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>

class PresidentialPardonForm : public AForm
{
    public :
        std::string Target;
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &s);
        PresidentialPardonForm  &operator = (const PresidentialPardonForm &s);
        void execute(Bureaucrat const & executor) const;
};

#endif