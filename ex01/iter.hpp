/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:32 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/28 03:50:00 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int length, void (*f)(const T&)) {
	if (array == NULL || f == NULL)
		return ;
	for (int i = 0; i < length;i++)
		f(array[i]);
};

#endif
