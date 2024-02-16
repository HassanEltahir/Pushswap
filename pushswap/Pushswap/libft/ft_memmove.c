/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:23:57 by haeltahi          #+#    #+#             */
/*   Updated: 2023/07/17 15:33:03 by haeltahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;
	void	*src_ptr;

	dest_ptr = dest;
	src_ptr = (char *)src;
	if (!dest && !src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		ft_memcpy(dest_ptr, src_ptr, n);
	}
	return (dest);
}
// int main(void)
// {
// 	signal(SIGSEGV, sigsegv);
// 	title("ft_memmove\t: ")

// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

// 	/* 1 */ check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7)); showLeaks();
//Post 0
// // 	// /* 2 */ check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy,
// 				7)); showLeaks(); //0 move
// // 	/* 3 */ check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult,
// 				7)); showLeaks(); //forward
// // 	// /* 4 */ check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1
// 			&& !memcmp(sResult, sResult2, 7)); showLeaks(); //reverse
// // 	write(1, "\n", 1);
// // 	return (0);
// }