/* filename: hello_word_mpi.c */
#include<stdio.h>
#include<mpi.h>
 
int main( int argc, char* argv[] ) {
    int this_proc, total_procs;
 
    /* Aqui comienza el paralelismo */
    MPI_Init( &argc, &argv );
    MPI_Comm_size( MPI_COMM_WORLD, &total_procs ); // number of process
    MPI_Comm_rank( MPI_COMM_WORLD, &this_proc );  //PID
 
    printf( "Hello word! I'm process nro. %d over a total of %d process.\n", this_proc, total_procs );
    MPI_Finalize();
    return 0; 
}