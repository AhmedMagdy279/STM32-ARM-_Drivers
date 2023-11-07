/************************************************************/
/* Author  : Ahmed Magdy									*/
/* Date    : 5/11/2022										*/
/* Version : V01											*/
/************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char 			u8;
typedef unsigned short int  	u16;
typedef unsigned long int		u32;

typedef signed char 			s8;
typedef signed short int 	 	s16;
typedef signed long int			s32;

typedef enum{
	FALSE,
	TRUE
}Bool_t;

typedef enum{
	OK,
	NOK,
	NULLPTR,
	OUTOFRANGE
}Error_t;

#define  NULL_PTR  ((void*)0)
#define  NULL      ((char)0)

#define   MAX_U8   ((u8)255)
#define   MIN_U8   ((u8)0)
#define   MIN_S8   ((s8)-128)
#define   MAX_S8   ((s8)127)
#define   ZERO_S8  ((s8)0)


#endif
