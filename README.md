
#configure and build with cmake using cmake-gui or use command line

#update submodule

git submodule update --init --recursive

#linux command line ez mode

./configure.sh

./build.sh

./run.sh


#############cpack#############
1 extension install cmake tools [Microsoft]
2 click the "build" button on the buttom bar after installing the extension.
3 in the commandlin: run cpack then it will packup the app automaticly.
4 check the packed package in the out/build dir which include 
    [{ProjectName}--Linux.sh,{ProjectName}--Linux.tar.Z,{ProjectName}--Linux.tar.gz ] 
5 in linux, execute the install by run "{ProjectName}--Linux.sh"