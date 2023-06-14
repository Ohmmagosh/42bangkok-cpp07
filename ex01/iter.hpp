/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:32 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/14 16:22:33 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
// # include <array>

template <typename T> void iter(T *array, int length, void (*f)(T &)) {
	for (int i = 0; i < length;i++)
		f(array[i]);
};

#endif