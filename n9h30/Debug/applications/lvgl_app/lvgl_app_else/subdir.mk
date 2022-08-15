################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../applications/lvgl_app/lvgl_app_else/menu.c \
../applications/lvgl_app/lvgl_app_else/menu1.c \
../applications/lvgl_app/lvgl_app_else/myFont.c \
../applications/lvgl_app/lvgl_app_else/oscilloscope.c \
../applications/lvgl_app/lvgl_app_else/oscilloscope1.c \
../applications/lvgl_app/lvgl_app_else/oscilloscope_set.c \
../applications/lvgl_app/lvgl_app_else/power.c \
../applications/lvgl_app/lvgl_app_else/power1.c \
../applications/lvgl_app/lvgl_app_else/power_host.c \
../applications/lvgl_app/lvgl_app_else/signal1.c \
../applications/lvgl_app/lvgl_app_else/signal_ch.c \
../applications/lvgl_app/lvgl_app_else/signal_ch1.c \
../applications/lvgl_app/lvgl_app_else/signal_ch2.c \
../applications/lvgl_app/lvgl_app_else/signal_set.c \
../applications/lvgl_app/lvgl_app_else/signal_tt.c \
../applications/lvgl_app/lvgl_app_else/signal_wave1.c \
../applications/lvgl_app/lvgl_app_else/signal_wave2.c \
../applications/lvgl_app/lvgl_app_else/title_menu.c \
../applications/lvgl_app/lvgl_app_else/title_oscilloscope.c \
../applications/lvgl_app/lvgl_app_else/title_power.c \
../applications/lvgl_app/lvgl_app_else/title_signa.c 

OBJS += \
./applications/lvgl_app/lvgl_app_else/menu.o \
./applications/lvgl_app/lvgl_app_else/menu1.o \
./applications/lvgl_app/lvgl_app_else/myFont.o \
./applications/lvgl_app/lvgl_app_else/oscilloscope.o \
./applications/lvgl_app/lvgl_app_else/oscilloscope1.o \
./applications/lvgl_app/lvgl_app_else/oscilloscope_set.o \
./applications/lvgl_app/lvgl_app_else/power.o \
./applications/lvgl_app/lvgl_app_else/power1.o \
./applications/lvgl_app/lvgl_app_else/power_host.o \
./applications/lvgl_app/lvgl_app_else/signal1.o \
./applications/lvgl_app/lvgl_app_else/signal_ch.o \
./applications/lvgl_app/lvgl_app_else/signal_ch1.o \
./applications/lvgl_app/lvgl_app_else/signal_ch2.o \
./applications/lvgl_app/lvgl_app_else/signal_set.o \
./applications/lvgl_app/lvgl_app_else/signal_tt.o \
./applications/lvgl_app/lvgl_app_else/signal_wave1.o \
./applications/lvgl_app/lvgl_app_else/signal_wave2.o \
./applications/lvgl_app/lvgl_app_else/title_menu.o \
./applications/lvgl_app/lvgl_app_else/title_oscilloscope.o \
./applications/lvgl_app/lvgl_app_else/title_power.o \
./applications/lvgl_app/lvgl_app_else/title_signa.o 

C_DEPS += \
./applications/lvgl_app/lvgl_app_else/menu.d \
./applications/lvgl_app/lvgl_app_else/menu1.d \
./applications/lvgl_app/lvgl_app_else/myFont.d \
./applications/lvgl_app/lvgl_app_else/oscilloscope.d \
./applications/lvgl_app/lvgl_app_else/oscilloscope1.d \
./applications/lvgl_app/lvgl_app_else/oscilloscope_set.d \
./applications/lvgl_app/lvgl_app_else/power.d \
./applications/lvgl_app/lvgl_app_else/power1.d \
./applications/lvgl_app/lvgl_app_else/power_host.d \
./applications/lvgl_app/lvgl_app_else/signal1.d \
./applications/lvgl_app/lvgl_app_else/signal_ch.d \
./applications/lvgl_app/lvgl_app_else/signal_ch1.d \
./applications/lvgl_app/lvgl_app_else/signal_ch2.d \
./applications/lvgl_app/lvgl_app_else/signal_set.d \
./applications/lvgl_app/lvgl_app_else/signal_tt.d \
./applications/lvgl_app/lvgl_app_else/signal_wave1.d \
./applications/lvgl_app/lvgl_app_else/signal_wave2.d \
./applications/lvgl_app/lvgl_app_else/title_menu.d \
./applications/lvgl_app/lvgl_app_else/title_oscilloscope.d \
./applications/lvgl_app/lvgl_app_else/title_power.d \
./applications/lvgl_app/lvgl_app_else/title_signa.d 


# Each subdirectory must supply rules for building sources it contributes
applications/lvgl_app/lvgl_app_else/%.o: ../applications/lvgl_app/lvgl_app_else/%.c
	arm-none-eabi-gcc -I"F:\n9h30" -I"F:\n9h30\applications\lvgl" -I"F:\n9h30\applications" -I"F:\n9h30\board" -I"F:\n9h30\libraries\n9h30\Driver\Include" -I"F:\n9h30\libraries\n9h30\UsbHostLib\inc" -I"F:\n9h30\libraries\n9h30\rtt_port" -I"F:\n9h30\libraries\nu_packages\ADC_TOUCH" -I"F:\n9h30\libraries\nu_packages\AudioCodec" -I"F:\n9h30\libraries\nu_packages\NuUtils\inc" -I"F:\n9h30\libraries\nu_packages\TPC" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\benchmark\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\benchmark" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\keypad_encoder" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\music\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\music" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\stress\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\stress" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\widgets\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos" -I"F:\n9h30\packages\LVGL-v8.2.0\env_support\rt-thread" -I"F:\n9h30\packages\LVGL-v8.2.0\src\core" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\nxp_pxp" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\nxp_vglite" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\sdl" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\stm32_dma2d" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\sw" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts\flex" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts\grid" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\bmp" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\ffmpeg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\freetype" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\fsdrv" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\gif" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\png" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\qrcode" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\rlottie" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\sjpg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\gridnav" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\monkey" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\snapshot" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\basic" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\default" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\mono" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\animimg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\calendar" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\chart" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\colorwheel" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\imgbtn" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\keyboard" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\led" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\list" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\menu" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\meter" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\msgbox" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\span" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\spinbox" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\spinner" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\tabview" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\tileview" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\win" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra" -I"F:\n9h30\packages\LVGL-v8.2.0\src\font" -I"F:\n9h30\packages\LVGL-v8.2.0\src\gpu" -I"F:\n9h30\packages\LVGL-v8.2.0\src\hal" -I"F:\n9h30\packages\LVGL-v8.2.0\src\misc" -I"F:\n9h30\packages\LVGL-v8.2.0\src\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\src" -I"F:\n9h30\packages\ramdisk-latest\inc" -I"F:\n9h30\rt-thread\components\dfs\filesystems\devfs" -I"F:\n9h30\rt-thread\components\dfs\filesystems\elmfat" -I"F:\n9h30\rt-thread\components\dfs\include" -I"F:\n9h30\rt-thread\components\drivers\audio" -I"F:\n9h30\rt-thread\components\drivers\include" -I"F:\n9h30\rt-thread\components\drivers\spi\sfud\inc" -I"F:\n9h30\rt-thread\components\drivers\spi" -I"F:\n9h30\rt-thread\components\drivers\touch" -I"F:\n9h30\rt-thread\components\drivers\usb\usbdevice" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost\class" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost\core" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost" -I"F:\n9h30\rt-thread\components\fal\inc" -I"F:\n9h30\rt-thread\components\finsh" -I"F:\n9h30\rt-thread\components\libc\compilers\common" -I"F:\n9h30\rt-thread\components\libc\compilers\newlib" -I"F:\n9h30\rt-thread\components\libc\posix\io\poll" -I"F:\n9h30\rt-thread\components\libc\posix\io\stdio" -I"F:\n9h30\rt-thread\components\libc\posix\ipc" -I"F:\n9h30\rt-thread\components\net\lwip\lwip-2.0.3\src\include\netif" -I"F:\n9h30\rt-thread\components\net\lwip\lwip-2.0.3\src\include" -I"F:\n9h30\rt-thread\components\net\lwip\port" -I"F:\n9h30\rt-thread\components\net\netdev\include" -I"F:\n9h30\rt-thread\components\net\sal\impl" -I"F:\n9h30\rt-thread\components\net\sal\include\dfs_net" -I"F:\n9h30\rt-thread\components\net\sal\include\socket\sys_socket" -I"F:\n9h30\rt-thread\components\net\sal\include\socket" -I"F:\n9h30\rt-thread\components\net\sal\include" -I"F:\n9h30\rt-thread\components\utilities\utest" -I"F:\n9h30\rt-thread\include" -I"F:\n9h30\rt-thread\libcpu\arm\arm926" -I"F:\n9h30\rt-thread\libcpu\arm\common" -I"F:\n9h30\applications\lvgl_app\lvgl_app_else" -I"F:\n9h30\applications\lvgl_app\lvgl_app.c" -I"F:\n9h30\applications\lvgl_app\lvgl_app.h" -include"F:\n9h30\rtconfig_preinc.h" -std=gnu11 -mcpu=arm926ej-s -O2 -g -gdwarf-2 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

