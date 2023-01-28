/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:29:20 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/28 18:03:10 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(void)
{
	Harl Minina;

	Minina.start_cases();
	Minina.complain("debug");
	Minina.complain("info");
	Minina.complain("warning");
	Minina.complain("error");
	Minina.complain("nada");
	return (0);
}