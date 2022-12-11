#!/bin/sh


##### This version of .xinitrc runs without any display manager




# /etc/X11/xinit/xinitrc
#
# global xinitrc file, used by all X sessions started by xinit (startx)

# invoke global X session script

#### Personal addition ####

#xrandr --output eDP-1 --off --output HDMI-1-1 --primary --mode 1920x1080 --pos 0x0 --rotate normal --output DP-1-1 --off

switch_display

dwmblocks 2>&1 >/dev/null &

dunst &

picom &

xwallpaper --zoom $(echo "$HOME/pictures/wallpapers/astronaut.jpeg")

touchpad_tap

start_dwm



