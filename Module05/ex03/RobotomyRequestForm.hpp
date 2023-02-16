/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:29:27 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/15 04:43:06 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &original);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &original);
		
		virtual void	function() const;
	private:
		std::string target;
} ;


#endif