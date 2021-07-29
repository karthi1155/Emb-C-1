/**
 * @file adccode.h
 * @author K C Pooja (poojachandkc@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ADCCODE_H_INCLUDED
#define ADCCODE_H_INCLUDED

#include<avr/io.h>
void InitADC();
uint16_t ReadADC(uint8_t);

#endif // ADCCODE_H_INCLUDED
