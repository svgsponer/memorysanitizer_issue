Before compilation
```Shell
mkdir externals
git submodule add git://github.com/arsenm/sanitizers-cmake.git externals/sanitizers-cmake externals/sanitizers-cmake
```

Compile and run
```Shell
mkdir build
cd build
cmake .. -DSANITIZE_MEMORY=On
make
./test
```
