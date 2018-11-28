cd dest-dir

cp -r usr/* /usr/
cp -r etc/* /etc/

cd ..

rm -rf /root/.yuma
mkdir -p /root/.yuma
cp dest-dir/startup-cfg.xml /root/.yuma/

killall -15 netconfd
rm -rf /tmp/ncxserver.sock
#netconfd --superuser=root &
netconfd

echo "delete /nacm" > /tmp/a.txt
echo "commit" >> /tmp/a.txt
echo "save" >> /tmp/a.txt
echo "quit" >> /tmp/a.txt
#ip netns exec zebosfib1 bash
#yangcli server=0 user=root password=sp run-script=/tmp/a.txt
yangcli server=0 user=ocnos password=ocnos run-script=/tmp/a.txt
