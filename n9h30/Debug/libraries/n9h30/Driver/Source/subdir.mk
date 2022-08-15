################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../libraries/n9h30/Driver/Source/nu_can.c \
../libraries/n9h30/Driver/Source/nu_cap.c \
../libraries/n9h30/Driver/Source/nu_crypto.c \
../libraries/n9h30/Driver/Source/nu_emac.c \
../libraries/n9h30/Driver/Source/nu_etimer.c \
../libraries/n9h30/Driver/Source/nu_fmi.c \
../libraries/n9h30/Driver/Source/nu_gpio.c \
../libraries/n9h30/Driver/Source/nu_i2s.c \
../libraries/n9h30/Driver/Source/nu_lcd.c \
../libraries/n9h30/Driver/Source/nu_pwm.c \
../libraries/n9h30/Driver/Source/nu_rtc.c \
../libraries/n9h30/Driver/Source/nu_scuart.c \
../libraries/n9h30/Driver/Source/nu_sdh.c \
../libraries/n9h30/Driver/Source/nu_spi.c \
../libraries/n9h30/Driver/Source/nu_sys.c \
../libraries/n9h30/Driver/Source/nu_timer.c \
../libraries/n9h30/Driver/Source/nu_uart.c \
../libraries/n9h30/Driver/Source/nu_usbd.c \
../libraries/n9h30/Driver/Source/nu_wdt.c \
../libraries/n9h30/Driver/Source/nu_wwdt.c 

OBJS += \
./libraries/n9h30/Driver/Source/nu_can.o \
./libraries/n9h30/Driver/Source/nu_cap.o \
./libraries/n9h30/Driver/Source/nu_crypto.o \
./libraries/n9h30/Driver/Source/nu_emac.o \
./libraries/n9h30/Driver/Source/nu_etimer.o \
./libraries/n9h30/Driver/Source/nu_fmi.o \
./libraries/n9h30/Driver/Source/nu_gpio.o \
./libraries/n9h30/Driver/Source/nu_i2s.o \
./libraries/n9h30/Driver/Source/nu_lcd.o \
./libraries/n9h30/Driver/Source/nu_pwm.o \
./libraries/n9h30/Driver/Source/nu_rtc.o \
./libraries/n9h30/Driver/Source/nu_scuart.o \
./libraries/n9h30/Driver/Source/nu_sdh.o \
./libraries/n9h30/Driver/Source/nu_spi.o \
./libraries/n9h30/Driver/Source/nu_sys.o \
./libraries/n9h30/Driver/Source/nu_timer.o \
./libraries/n9h30/Driver/Source/nu_uart.o \
./libraries/n9h30/Driver/Source/nu_usbd.o \
./libraries/n9h30/Driver/Source/nu_wdt.o \
./libraries/n9h30/Driver/Source/nu_wwdt.o 

C_DEPS += \
./libraries/n9h30/Driver/Source/nu_can.d \
./libraries/n9h30/Driver/Source/nu_cap.d \
./libraries/n9h30/Driver/Source/nu_crypto.d \
./libraries/n9h30/Driver/Source/nu_emac.d \
./libraries/n9h30/Driver/Source/nu_etimer.d \
./libraries/n9h30/Driver/Source/nu_fmi.d \
./libraries/n9h30/Driver/Source/nu_gpio.d \
./libraries/n9h30/Driver/Source/nu_i2s.d \
./libraries/n9h30/Driver/Source/nu_lcd.d \
./libraries/n9h30/Driver/Source/nu_pwm.d \
./libraries/n9h30/Driver/Source/nu_rtc.d \
./libraries/n9h30/Driver/Source/nu_scuart.d \
./libraries/n9h30/Driver/Source/nu_sdh.d \
./libraries/n9h30/Driver/Source/nu_spi.d \
./libraries/n9h30/Driver/Source/nu_sys.d \
./libraries/n9h30/Driver/Source/nu_timer.d \
./libraries/n9h30/Driver/Source/nu_uart.d \
./libraries/n9h30/Driver/Source/nu_usbd.d \
./libraries/n9h30/Driver/Source/nu_wdt.d \
./libraries/n9h30/Driver/Source/nu_wwdt.d 


# Each subdirectory must supply rules for building sources it contributes
libraries/n9h30/Driver/Source/%.o: ../libraries/n9h30/Driver/Source/%.c
	arm-none-eabi-gcc -I"F:\n9h30" -I"F:\n9h30\applications\lvgl" -I"F:\n9h30\applications" -I"F:\n9h30\board" -I"F:\n9h30\libraries\n9h30\Driver\Include" -I"F:\n9h30\libraries\n9h30\UsbHostLib\inc" -I"F:\n9h30\libraries\n9h30\rtt_port" -I"F:\n9h30\libraries\nu_packages\ADC_TOUCH" -I"F:\n9h30\libraries\nu_packages\AudioCodec" -I"F:\n9h30\libraries\nu_packages\NuUtils\inc" -I"F:\n9h30\libraries\nu_packages\TPC" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\benchmark\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\benchmark" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\keypad_encoder" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\music\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\music" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\stress\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\stress" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\widgets\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos" -I"F:\n9h30\packages\LVGL-v8.2.0\env_support\rt-thread" -I"F:\n9h30\packages\LVGL-v8.2.0\src\core" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\nxp_pxp" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\nxp_vglite" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\sdl" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\stm32_dma2d" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\sw" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts\flex" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts\grid" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\bmp" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\ffmpeg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\freetype" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\fsdrv" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\gif" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\png" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\qrcode" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\rlottie" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\sjpg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\gridnav" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\monkey" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\snapshot" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\basic" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\default" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\mono" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\animimg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\calendar" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\chart" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\colorwheel" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\imgbtn" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\keyboard" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\led" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\list" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\menu" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\meter" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\msgbox" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\span" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\spinbox" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\spinner" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\tabview" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\tileview" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\win" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra" -I"F:\n9h30\packages\LVGL-v8.2.0\src\font" -I"F:\n9h30\packages\LVGL-v8.2.0\src\gpu" -I"F:\n9h30\packages\LVGL-v8.2.0\src\hal" -I"F:\n9h30\packages\LVGL-v8.2.0\src\misc" -I"F:\n9h30\packages\LVGL-v8.2.0\src\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\src" -I"F:\n9h30\packages\ramdisk-latest\inc" -I"F:\n9h30\rt-thread\components\dfs\filesystems\devfs" -I"F:\n9h30\rt-thread\components\dfs\filesystems\elmfat" -I"F:\n9h30\rt-thread\components\dfs\include" -I"F:\n9h30\rt-thread\components\drivers\audio" -I"F:\n9h30\rt-thread\components\drivers\include" -I"F:\n9h30\rt-thread\components\drivers\spi\sfud\inc" -I"F:\n9h30\rt-thread\components\drivers\spi" -I"F:\n9h30\rt-thread\components\drivers\touch" -I"F:\n9h30\rt-thread\components\drivers\usb\usbdevice" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost\class" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost\core" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost" -I"F:\n9h30\rt-thread\components\fal\inc" -I"F:\n9h30\rt-thread\components\finsh" -I"F:\n9h30\rt-thread\components\libc\compilers\common" -I"F:\n9h30\rt-thread\components\libc\compilers\newlib" -I"F:\n9h30\rt-thread\components\libc\posix\io\poll" -I"F:\n9h30\rt-thread\components\libc\posix\io\stdio" -I"F:\n9h30\rt-thread\components\libc\posix\ipc" -I"F:\n9h30\rt-thread\components\net\lwip\lwip-2.0.3\src\include\netif" -I"F:\n9h30\rt-thread\components\net\lwip\lwip-2.0.3\src\include" -I"F:\n9h30\rt-thread\components\net\lwip\port" -I"F:\n9h30\rt-thread\components\net\netdev\include" -I"F:\n9h30\rt-thread\components\net\sal\impl" -I"F:\n9h30\rt-thread\components\net\sal\include\dfs_net" -I"F:\n9h30\rt-thread\components\net\sal\include\socket\sys_socket" -I"F:\n9h30\rt-thread\components\net\sal\include\socket" -I"F:\n9h30\rt-thread\components\net\sal\include" -I"F:\n9h30\rt-thread\components\utilities\utest" -I"F:\n9h30\rt-thread\include" -I"F:\n9h30\rt-thread\libcpu\arm\arm926" -I"F:\n9h30\rt-thread\libcpu\arm\common" -I"F:\n9h30\applications\lvgl_app\lvgl_app_else" -I"F:\n9h30\applications\lvgl_app\lvgl_app.c" -I"F:\n9h30\applications\lvgl_app\lvgl_app.h" -include"F:\n9h30\rtconfig_preinc.h" -std=gnu11 -mcpu=arm926ej-s -O2 -g -gdwarf-2 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

