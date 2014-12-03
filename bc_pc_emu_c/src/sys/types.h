/*
 * types.h

 *
 *  Created on: 10-08-2012
 *      Author: arek
 */

#ifndef TYPES_H_
#define TYPES_H_

#ifndef NULL
   #define NULL  ((void*)0L)
#endif

#define SET   (1U)
#define RESET (0)

#define ON    (1U)
#define OFF   (0)

#define FALSE (0)
#define TRUE  (!FALSE)

/* ISO standard for signed and unsigned fixed-size integer data types */
/*
typedef char              char_t;
typedef unsigned char     uint8_t;
typedef   signed char     int8_t;
typedef unsigned short    uint16_t;
typedef   signed short    int16_t;
typedef unsigned long     uint32_t;
typedef   signed long     int32_t;

typedef uint8_t boolean_t;

typedef uint8_t  bitfield8_t;
typedef uint16_t bitfield16_t;
typedef uint32_t bitfield32_t;
*/

#endif /* TYPES_H_ */
