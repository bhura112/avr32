/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#include <asf.h>
#include <sysclk.h>

void u32Delay(uint32_t udelay);


int main (void)
{
	
	sysclk_init();
	board_init();
	
	gpio_configure_pin(AVR32_PIN_PB00,GPIO_DIR_OUTPUT|GPIO_DRIVE_LOW);
	
	while (1)
	{
				gpio_set_pin_high(AVR32_PIN_PB00);
				u32Delay(100);
				gpio_clr_gpio_pin(AVR32_PIN_PB00);
				u32Delay(100);
				
				
	}
	

	/* Insert application code here, after the board has been initialized. */
}
void u32Delay(uint32_t udelay) {
	
	for (int i = 0 ; i < udelay; i++)
	{
		for(int j = 0 ; j < 100; j++)
		{
			
		}
	}
}