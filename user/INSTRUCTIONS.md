### vsomeip

#### Installation
Install any previous versions of vSOMEIP
cd /usr/local && sudo find . -name "*vsomeip*" -exec rm -rf {} \;

#### Multicast configuration 
To use IP multicast, the route must be added. In Linux this can be done
by:

route add -net 224.0.0.0/4 dev eth0

Other OSes may have different ways to do this.

#### Tools
Install network simulator using the below command
sudo apt-get install core-network

