To use this driver:

1. Add in your halconf.h:
	a) #define HAL_USE_GDISP	TRUE
	b) Any optional high level driver defines (see gdisp.h) eg: GDISP_NEED_MULTITHREAD
	c) One (only) of:
		#define LCD_USE_GPIO
		#define LCD_USE_SPI
		#define LCD_USE_FSMC
	d) All of the following (with appropriate values):
		#define SCREEN_WIDTH	320
		#define SCREEN_HEIGHT	240

2. To your makefile add the following lines:
	include $(LCDLIB)/drivers/gdisp/SSD1289/gdisp_lld.mk
