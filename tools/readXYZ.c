// File created to read an xyz file.
#include <stdio.h>

int main(int argc, char *argv[]){

    // check number of arguments
    if (argc != 2){
        puts("Usage: readXYZ file.xyz");
    }
    else {
        FILE *xyzFilePtr; // input file pointer

        // try to open the input file
        if ((xyzFilePtr = fopen(argv[1], "r")) != NULL){


            // read atom symbol, x, y and z coordinates
            char atsb[5];
            int Natoms;
            fscanf(xyzFilePtr, "%d", &Natoms);
            printf("Atoms number: %d\n", Natoms);

            // Skip second line
            fscanf(xyzFilePtr, "%*[^\n]\n");

            // Reading atoms and coordinates
            double x[Natoms];
            double y[Natoms];
            double z[Natoms];

            for (unsigned int i = 0; i < Natoms; ++i){
                fscanf(xyzFilePtr, "%4s%lf%lf%lf", atsb, &x[i], &y[i], &z[i]);
                printf("Atom symbol: %s (xyz): (%7f, %7f, %7f)\n", atsb, x[i], y[i], z[i]);
            }


            // fgets(line, 60, xyzFilePtr);
            // puts(line);

            //fgets(line, 60, xyzFilePtr);
            //puts(line);

            //fgets(line, 60, xyzFilePtr);
            //puts(line);

        }
        else {
            // file could not be opened
            printf("File \"%s\" could not be opened\n", argv[1]);
        }
    }
}