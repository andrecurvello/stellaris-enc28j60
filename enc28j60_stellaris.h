/*
 * ENC28J60 configuration specific to the Stellaris Launchpad.
 * Provides implementation of the BusDriver methods for a single ENC28J60.
 */
#ifndef _ENC28J60_STELLARIS
#define _ENC28J60_STELLARIS

#include "common.h"

class StellarisENC28J60DefaultConfiguration {
public:
	/* SPI Pin Configuration */
	static const int SPI_PORT_BASE		= GPIO_PORTB_BASE;
	static const int SPI_SSI_BASE		= SSI2_BASE;
	static const int SPI_PORT_PERIPHERAL 	= SYSCTL_PERIPH_GPIOB;
	static const int SPI_SSI_PERIPHERAL  	= SYSCTL_PERIPH_SSI2;
	static const int SPI_SSI_RX_CONF	= GPIO_PB6_SSI2RX;
	static const int SPI_SSI_TX_CONF	= GPIO_PB7_SSI2TX;
	static const int SPI_SSI_CLK_CONF	= GPIO_PB4_SSI2CLK;
	static const int SPI_SSI_RX_PIN		= GPIO_PIN_6;
	static const int SPI_SSI_TX_PIN		= GPIO_PIN_7;
	static const int SPI_SSI_CLK_PIN	= GPIO_PIN_4;

	/* GPIO Pin Configuration */
	static const int PIN_CHIP_SELECT_PERIPH = SYSCTL_PERIPH_GPIOB;
	static const int PIN_CHIP_SELECT_BASE	= GPIO_PORTB_BASE;
	static const int PIN_CHIP_SELECT	= GPIO_PIN_5;

	static const int PIN_INT_PERIPH		= SYSCTL_PERIPH_GPIOE;
	static const int PIN_INT_BASE		= GPIO_PORTE_BASE;
	static const int PIN_INT		= GPIO_PIN_4;
	static const int PIN_INT_INT		= INT_GPIOE;
};

typedef StellarisENC28J60DefaultConfiguration StellarisENC28J60Configuration;
#endif