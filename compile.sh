# Anukul: Script to generate libsmi.a & compile test Application

#Input ZebOS/ZebOS8NG directory path
if [ "$1" == "" ]
  then
     echo
     echo "Usage: ./compile.sh <ZebOS/ZebOS8NG path>"
     echo
     exit
fi

export ZEBOS_DIR=$1
export CURR=`pwd`

rm -rf testapp_tmp
mkdir testapp_tmp
cp $ZEBOS_DIR/platform/linux/obj/lib.a $ZEBOS_DIR/platform/linux/obj/pal.a testapp_tmp/
cd testapp_tmp
ar x lib.a
ar x pal.a
rm -rf lib.a pal.a
ar cr libsmi.a *.o
cp libsmi.a ../
cd ..
rm -rf testapp_tmp
cp libsmi.a netconf/src/agt/

make all && make install DESTDIR=$CURR/dest-dir
cp libsmi.a $CURR/dest-dir/usr/lib/
cp netconfd.conf dest-dir/etc/yuma/
cp openconfig-yang/* dest-dir/usr/share/yuma/modules/netconfcentral/


cp libsmi.a openconfig-platform/src/
cd openconfig-platform
make all && make install DESTDIR=$CURR/dest-dir
cd ..

cp libsmi.a openconfig-platform-transceiver/src/
cd openconfig-platform-transceiver
make all && make install DESTDIR=$CURR/dest-dir
cd ..

cp libsmi.a openconfig-terminal-device/src/
cd openconfig-terminal-device
make all && make install DESTDIR=$CURR/dest-dir
cd ..

cp netconf/startup-cfg.xml dest-dir/
