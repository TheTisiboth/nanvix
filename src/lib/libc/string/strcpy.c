/*
 * Copyright(C) 2011-2015 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 * 
 * This file is part of Nanvix.
 * 
 * Nanvix is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Nanvix is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Nanvix. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file
 * 
 * @brief strcpy() implementation.
 */

/**
 * @brief Copies a string.
 * 
 * @param s1 Pointer to target string.
 * @param s2 Pointer to source string.
 * 
 * @param Copies the string pointed to by @p s2 (including the terminating null
 *        byte) into the array pointed to by @p s1. If copying takes place
 *        between objects that overlap, the behavior is undefined.
 * 
 * @returns s1 is returned.
 */
char *strcpy(char *restrict s1, const char *restrict s2)
{
	char *p1;
	
	p1 = s1;
	
	/* Copy strings. */
	while ((*p1++ = *s2++) != '\0')
		/* noop */;
	
	return (s1);
}
