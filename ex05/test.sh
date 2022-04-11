#!/bin/sh

ESC_RESET="\033[0m"
FNT_BOLD="\033[1m"
CLR_MAGENTA="\033[38;5;05m"

echo "$FNT_BOLD$CLR_MAGENTA[OK 4 pattern]$ESC_RESET"
./harl DEBUG
./harl INFO
./harl WARNING
./harl ERROR
echo "$FNT_BOLD$CLR_MAGENTA[NG 8 pattern]$ESC_RESET"
./harl
./harl DEBUG DEBUG
./harl debug
./harl info
./harl warning
./harl error
./harl ABCDEFG
./harl DEBUGdebug
