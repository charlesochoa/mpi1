# mpi1
Primera practica con MPI


LD_LIBRARY_PATH=${LD_LIBRARY_PATH:+$LD_LIBRARY_PATH:}/usr/lib64/openmpi/lib
MANPATH=${MANPATH:+$MANPATH:}/usr/share/man/openmpi-x86_64
PATH=${PATH:+$PATH:}/usr/lib64/openmpi/bin
PATH=$PATH:$HOME/usr/bin:$HOME/usr/bin/$ARCH
export LD_LIBRARY_PATH
export MANPATH
export PATH


mpirun -n 4 --hostfile hostfile.txt practica1