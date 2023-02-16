/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:49:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/15 04:49:49 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &original);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &original);
		
		virtual void	function() const;
	private:
		std::string target;
} ;


#endif