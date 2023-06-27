/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:30 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/16 17:51:12 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void) {
	try {
		Array<int>	a;
		Array<int>	b(3);
		Array<int>	c(-3);

		for (unsigned int i = 0; i < b.size(); i++) {
			b[i] = i;
		}
		for (unsigned int i = 0; i < b.size(); i++) {
			std::cout << "b["<< i << "] = " << b[i] << std::endl;
		}
		a = b;
		std::cout << std::endl;
		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << "a["<< i << "] = " << a[i] << std::endl;
		}

		std::cout << std::endl;
		std::cout << "a[1] = "<< a[1] << std::endl;

		std::cout << std::endl;
		Array<int> d(b);
		for (unsigned int i = 0; i < d.size(); i++) {
			std::cout << "d["<< i << "] = " << d[i] << std::endl;
		}
		Array<char> e(3);
		e[0] = 'a';
		e[1] = 'b';
		e[2] = 'c';
		for (unsigned int i = 0; i < e.size(); i++) {
			std::cout << "e["<<i<<"] = "<< e[i] << std::endl;
		}

		Array<std::string> f(3);
		f[0] = "hello";
		f[1] = "world";
		f[2] = "42";
		for (unsigned int i = 0; i < f.size(); i++) {
			std::cout << "f["<<i<<"] = "<< f[i] << std::endl;
		}
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
