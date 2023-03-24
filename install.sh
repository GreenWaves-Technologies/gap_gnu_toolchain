#!/bin/bash

DIR_TOOLCHAIN=/usr/lib/gap_riscv_toolchain
if [ $# -ge 1 ]; then
    DIR_TOOLCHAIN="$1"
else
    read -e -p "Enter the path where the compiler will be installed (you may need to execute this script with sudo): " -i "$DIR_TOOLCHAIN" DIR_TOOLCHAIN
fi

echo "Install path: $DIR_TOOLCHAIN"

sudo rsync -av --delete --exclude ".git*" . $DIR_TOOLCHAIN || exit 1

echo "Toolchain installed successfully!"
if [ "$DIR_TOOLCHAIN" != "/usr/lib/gap_riscv_toolchain" ]; then
    echo "Add the following line to $HOME/.bashrc : "
    echo "export GAP_RISCV_GCC_TOOLCHAIN=\"$DIR_TOOLCHAIN\""
fi
