/*
 * DIO_Register.h
 *
 *  Created on: Aug 24, 2024
 *      Author: alaae
 */

#ifndef MCAL_DIO_HEADER_DIO_REGISTER_H_
#define MCAL_DIO_HEADER_DIO_REGISTER_H_

/*Registers A*/
#define DIO_DDRA *((volatile u8*)0x3A)
#define DIO_PORTA *((volatile u8*)0x3B)
#define DIO_PINA *((volatile u8*)0x39)

/*Registers B*/
#define DIO_DDRB *((volatile u8*)0x37)
#define DIO_PORTB *((volatile u8*)0x38)
#define DIO_PINB *((volatile u8*)0x36)

/*Registers C*/
#define DIO_DDRC *((volatile u8*)0x34)
#define DIO_PORTC *((volatile u8*)0x35)
#define DIO_PINC *((volatile u8*)0x33)

/*Registers D*/
#define DIO_DDRD *((volatile u8*)0x31)
#define DIO_PORTD *((volatile u8*)0x32)
#define DIO_PIND *((volatile u8*)0x30)

#endif /* MCAL_DIO_HEADER_DIO_REGISTER_H_ */
