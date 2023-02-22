/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:46:28 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/21 09:47:23 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public :
        std::string Target;
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &s);
        RobotomyRequestForm  &operator = (const RobotomyRequestForm &s);
        void execute(Bureaucrat const & executor) const;
};

#endif