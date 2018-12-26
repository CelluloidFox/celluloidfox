rm -rf ./r-bin
mkdir r-bin
cd ./r-bin
git clone https://github.com/Rocaloid/RUtil2
cmake RUtil2
make install
rm -rf CMakeCache.txt
git clone https://github.com/Rocaloid/RFNL
cmake RFNL
make install
rm -rf CMakeCache.txt
git clone https://github.com/Rocaloid/CVESVP
cmake CVESVP
make install
rm -rf CMakeCache.txt
git clone https://github.com/Rocaloid/CVEDSP2
cmake CVEDSP2
make install
rm -rf CMakeCache.txt
git clone https://github.com/Rocaloid/RUCE
cmake RUCE
make install
git clone https://github.com/rgwan/cadencii-free-tools
cd ./cadencii-free-tools/ruce-wrapper
make
cd ../wavtool-pl
make
cd ../..
mkdir bin
cp ./src/*.dylib ./bin/
cp ./src/RUCE_CLI ./bin/RUCE_CLI
cp ./cadencii-free-tools/ruce-wrapper/ruce-wrapper ./bin/
cp ./cadencii-free-tools/wavtool-pl/wavtool-pl ./bin/
