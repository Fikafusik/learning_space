if [ -a build ]; then
    rm -rf build/
fi
mkdir build/
cd build
cmake .. -DTESTS:boolean=ON
cmake --build .