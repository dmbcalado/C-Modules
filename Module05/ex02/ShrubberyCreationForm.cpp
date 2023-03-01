/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:06:35 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/03/01 17:16:12 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("ShruberryCreationForm", 145, 137), target(Target)
{
	std::cout << "ShrubberyCreationForm Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : AForm(original), target(original.target)
{
	std::cout << "Shrubbery Copy Constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destroyed." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
	this->target = original.target;
	std::cout << "ShrubberyCreationForm Copy Assignment" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::function() const
{
	std::ofstream	file;
	std::string		file_to_write;
	file_to_write = this->target;
	file_to_write.append("_shrubbery");
	file.open(file_to_write.c_str(), std::ios::in | std::ios::app);
	if (!file)
		std::cout << "Not able to create the file" << std::endl;
	file << "                     ; ; ; " << std::endl;
	file << "                   ;        ;  ;     ;;    ; " << std::endl;
	file << "                ;                 ;         ;  ; " << std::endl;
	file << "                                ; " << std::endl;
	file << "                               ;                ;; " << std::endl;
	file << "               ;          ;            ;              ; " << std::endl;
	file << "               ;            ';,        ;               ; " << std::endl;
	file << "               ;              'b      * " << std::endl;
	file << "                ;              '$    ;;                ;; " << std::endl;
	file << "               ;    ;           $:   ;:               ; " << std::endl;
	file << "             ;;      ;  ;;      *;  @):        ;   ; ; " << std::endl;
	file << "                          ;     :@,@):   ,;**:'   ; " << std::endl;
	file << "              ;      ;,         :@@*: ;;**'      ;   ; " << std::endl;
	file << "                       ';o;    ;:(@';@*''  ; " << std::endl;
	file << "               ;  ;       'bq,;;:,@@*'   ,*      ;  ; " << std::endl;
	file << "                          ,p$q8,:@)'  ;p*'      ; " << std::endl;
	file << "                   ;     '  ; '@@Pp@@*'    ;  ; " << std::endl;
	file << "                    ;  ; ;;    Y7'.'     ;  ; " << std::endl;
	file << "                              :@):. " << std::endl;
	file << "                             .:@:'. " << std::endl;
	file << "                           .::(@:.  " << std::endl;
	file.close();
}
