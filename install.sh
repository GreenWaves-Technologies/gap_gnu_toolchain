DIR_TOOLCHAIN=/usr/lib/gap_riscv_toolchain
if [ ! -d "$DIR_TOOLCHAIN" ]; then
    sudo mkdir $DIR_TOOLCHAIN
    sudo cp -rf ./* /usr/lib/gap_riscv_toolchain
    cd /usr/lib/gap_riscv_toolchain/bin
    for eachFile in *
    do
        sudo ln -fs $PWD/$eachFile /usr/bin/$eachFile
    done
else
    echo "$DIR_TOOLCHAIN already exist!!! Please remove it if you want to update"
fi
