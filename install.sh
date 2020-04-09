#!/bin/bash

DIR_TOOLCHAIN=/usr/lib/gap_riscv_toolchain
read -e -p "Enter the path where the compiler will be installed (you may need to execute this script with sudo): " -i "$DIR_TOOLCHAIN" DIR_TOOLCHAIN

echo $DIR_TOOLCHAIN

if [ ! -d "$DIR_TOOLCHAIN" ]; then
    mkdir $DIR_TOOLCHAIN
    cp -rf ./* /usr/lib/gap_riscv_toolchain
else
    echo "$DIR_TOOLCHAIN already exist!!! Please remove it if you want to update"
fi
