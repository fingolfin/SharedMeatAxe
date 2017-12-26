/* ============================= C MeatAxe ==================================
   File:        $Id: gcd.c,v 1.1.1.1 2007/09/02 11:06:17 mringe Exp $
   Comment:     Greatest common divisor
   --------------------------------------------------------------------------
   (C) Copyright 1998 Michael Ringe, Lehrstuhl D fuer Mathematik,
   RWTH Aachen, Germany  <mringe@math.rwth-aachen.de>
   This program is free software; see the file COPYING for details.
   ========================================================================== */


#include "meataxe.h"

/**
 ** @defgroup misc Miscellaneous
 ** @{
 **/


/**
 ** Greatest Common Divisor.
 ** This function returns the greatest common divisor of two integers. If
 ** both numbers are positive, the result is positive. If one or both 
 ** numbers are negative, the result may be positive or negative. If one of the
 ** numbers is zero, the function returns the other number. If both numbers are zero,
 ** the result is zero.
 ** @param a First number.
 ** @param b Second number.
 ** @return Greatest common divisor of @a a and @a b.
 **/

long gcd(long a,long b)
{
    if (a == 0) 
	return b;
    if (b == 0) 
	return a;
    while ((a %= b) != 0)
    {
	if ((b %= a) == 0) 
	    return a;
    }
    return b;
}


/**
 ** Least Common Multiple.
 ** This function returns the least common multiple of two integers. 
 ** If both numbers are positive, the result is positive. If one or both 
 ** numbers are negative, the result may be positive or negative. If both
 ** numbers are zero, a division by zero occurs.
 ** @param a First number.
 ** @param b Second number.
 ** @return Least common multiple of @a a and @a b.
 **/

long lcm(long a,long b)
{
    long ggt = gcd(a,b);
    if (ggt == 0) 
	return 0;
    return (a / ggt) * b;
}


/**
 ** @}
 **/
