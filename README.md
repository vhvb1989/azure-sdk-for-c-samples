# azure-sdk-for-c-samples
various sample application consuming the Azure SDK for C

## Build
```bash
mkdir build
cd build

# consuming sdk alone
cmake ..

# consuming sdk with transport adapter
cmake -DTRANSPORT_CURL=ON -DCMAKE_TOOLCHAIN_FILE=/home/vivazqu/workspace/vcpkg/scripts/buildsystems/vcpkg.cmake -DVCPKG_TARGET_TRIPLET=x64-linux ..
```
