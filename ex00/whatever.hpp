/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:50:37 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/14 13:49:04 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void swap(T &x, T &y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T> T max(T x, T y) {
	return (x > y) ? x : y;
}

template <typename T> T min(T x, T y) {
	return (x < y) ? x : y;
}

#endif
