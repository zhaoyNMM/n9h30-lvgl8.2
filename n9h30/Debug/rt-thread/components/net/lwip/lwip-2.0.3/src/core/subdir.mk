################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/def.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/dns.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/inet_chksum.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/init.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/ip.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/memp.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/netif.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/pbuf.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/raw.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/stats.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/sys.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp_in.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp_out.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/timeouts.c \
../rt-thread/components/net/lwip/lwip-2.0.3/src/core/udp.c 

OBJS += \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/def.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/dns.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/inet_chksum.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/init.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/ip.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/memp.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/netif.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/pbuf.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/raw.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/stats.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/sys.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp_in.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp_out.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/timeouts.o \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/udp.o 

C_DEPS += \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/def.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/dns.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/inet_chksum.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/init.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/ip.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/memp.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/netif.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/pbuf.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/raw.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/stats.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/sys.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp_in.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/tcp_out.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/timeouts.d \
./rt-thread/components/net/lwip/lwip-2.0.3/src/core/udp.d 


# Each subdirectory must supply rules for building sources it contributes
rt-thread/components/net/lwip/lwip-2.0.3/src/core/%.o: ../rt-thread/components/net/lwip/lwip-2.0.3/src/core/%.c
	arm-none-eabi-gcc -I"F:\n9h30" -I"F:\n9h30\applications\lvgl" -I"F:\n9h30\applications" -I"F:\n9h30\board" -I"F:\n9h30\libraries\n9h30\Driver\Include" -I"F:\n9h30\libraries\n9h30\UsbHostLib\inc" -I"F:\n9h30\libraries\n9h30\rtt_port" -I"F:\n9h30\libraries\nu_packages\ADC_TOUCH" -I"F:\n9h30\libraries\nu_packages\AudioCodec" -I"F:\n9h30\libraries\nu_packages\NuUtils\inc" -I"F:\n9h30\libraries\nu_packages\TPC" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\benchmark\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\benchmark" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\keypad_encoder" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\music\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\music" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\stress\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\stress" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\widgets\assets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\demos" -I"F:\n9h30\packages\LVGL-v8.2.0\env_support\rt-thread" -I"F:\n9h30\packages\LVGL-v8.2.0\src\core" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\nxp_pxp" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\nxp_vglite" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\sdl" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\stm32_dma2d" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw\sw" -I"F:\n9h30\packages\LVGL-v8.2.0\src\draw" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts\flex" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts\grid" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\layouts" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\bmp" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\ffmpeg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\freetype" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\fsdrv" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\gif" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\png" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\qrcode" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\rlottie" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs\sjpg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\libs" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\gridnav" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\monkey" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others\snapshot" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\others" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\basic" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\default" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes\mono" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\themes" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\animimg" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\calendar" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\chart" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\colorwheel" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\imgbtn" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\keyboard" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\led" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\list" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\menu" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\meter" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\msgbox" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\span" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\spinbox" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\spinner" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\tabview" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\tileview" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets\win" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\src\extra" -I"F:\n9h30\packages\LVGL-v8.2.0\src\font" -I"F:\n9h30\packages\LVGL-v8.2.0\src\gpu" -I"F:\n9h30\packages\LVGL-v8.2.0\src\hal" -I"F:\n9h30\packages\LVGL-v8.2.0\src\misc" -I"F:\n9h30\packages\LVGL-v8.2.0\src\widgets" -I"F:\n9h30\packages\LVGL-v8.2.0\src" -I"F:\n9h30\packages\ramdisk-latest\inc" -I"F:\n9h30\rt-thread\components\dfs\filesystems\devfs" -I"F:\n9h30\rt-thread\components\dfs\filesystems\elmfat" -I"F:\n9h30\rt-thread\components\dfs\include" -I"F:\n9h30\rt-thread\components\drivers\audio" -I"F:\n9h30\rt-thread\components\drivers\include" -I"F:\n9h30\rt-thread\components\drivers\spi\sfud\inc" -I"F:\n9h30\rt-thread\components\drivers\spi" -I"F:\n9h30\rt-thread\components\drivers\touch" -I"F:\n9h30\rt-thread\components\drivers\usb\usbdevice" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost\class" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost\core" -I"F:\n9h30\rt-thread\components\drivers\usb\usbhost" -I"F:\n9h30\rt-thread\components\fal\inc" -I"F:\n9h30\rt-thread\components\finsh" -I"F:\n9h30\rt-thread\components\libc\compilers\common" -I"F:\n9h30\rt-thread\components\libc\compilers\newlib" -I"F:\n9h30\rt-thread\components\libc\posix\io\poll" -I"F:\n9h30\rt-thread\components\libc\posix\io\stdio" -I"F:\n9h30\rt-thread\components\libc\posix\ipc" -I"F:\n9h30\rt-thread\components\net\lwip\lwip-2.0.3\src\include\netif" -I"F:\n9h30\rt-thread\components\net\lwip\lwip-2.0.3\src\include" -I"F:\n9h30\rt-thread\components\net\lwip\port" -I"F:\n9h30\rt-thread\components\net\netdev\include" -I"F:\n9h30\rt-thread\components\net\sal\impl" -I"F:\n9h30\rt-thread\components\net\sal\include\dfs_net" -I"F:\n9h30\rt-thread\components\net\sal\include\socket\sys_socket" -I"F:\n9h30\rt-thread\components\net\sal\include\socket" -I"F:\n9h30\rt-thread\components\net\sal\include" -I"F:\n9h30\rt-thread\components\utilities\utest" -I"F:\n9h30\rt-thread\include" -I"F:\n9h30\rt-thread\libcpu\arm\arm926" -I"F:\n9h30\rt-thread\libcpu\arm\common" -I"F:\n9h30\applications\lvgl_app\lvgl_app_else" -I"F:\n9h30\applications\lvgl_app\lvgl_app.c" -I"F:\n9h30\applications\lvgl_app\lvgl_app.h" -include"F:\n9h30\rtconfig_preinc.h" -std=gnu11 -mcpu=arm926ej-s -O2 -g -gdwarf-2 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

