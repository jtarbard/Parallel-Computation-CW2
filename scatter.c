// Standard includes.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include <mpi.h>

int main( int argc, char *argv[] )
{

    numprocs = 4

    int cast = [1,2,3,4,5];
    int global_sca = [0,0,0,0,0];
    
    int * local_sca = (int*) malloc(5 * sizeof(int));

    MPI_Init( &argc, &argv );
	MPI_Comm_size( MPI_COMM_WORLD, &numprocs );
	MPI_Comm_rank( MPI_COMM_WORLD, &rank );

    MPIBcast(cast, 5);
    MPI_Scatter( global_sca, 5, MPI_INT, local_sca, 5. MPI_INT, 0, MPI_COMM_WORLD );
    
    for (int i = 0; i<5; i++ )
    {
        local_sca[i] += rank;
    }
    
    MPI_Gather( &local_sca, 5, MPI_INT, global_sca, 5, MPI_INT, 0, MPI_COMM_WORLD );

    printf("Process %d out of %d.", rank, numprocs);

    MPI_Finalize();
    free(local_sca);

}