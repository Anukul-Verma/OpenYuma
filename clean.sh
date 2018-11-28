# Anukul: Script to generate libsmi.a & compile test Application

make clean

cp libsmi.a openconfig-platform/src/
cd openconfig-platform
make superclean
cd ..

cp libsmi.a openconfig-platform-transceiver/src/
cd openconfig-platform-transceiver
make superclean
cd ..

cp libsmi.a openconfig-terminal-device/src/
cd openconfig-terminal-device
make superclean
cd ..

cp netconf/startup-cfg.xml dest-dir/
