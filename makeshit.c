/* 

    Taken from https://github.com/foxy4096/c-projects/blob/master/makeshit.c

*/

// This CLI app helps in quickly compling my shitty c code into executables

/* 
Code to complie this

cl.exe /Fe:ms.exe makeshit.c && del *.obj
*/

// DON'T USE THIS!

// PORTED FOR G++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <code_index>\n", argv[0]);
        printf("%s clear\n", argv[0]);
        return 1;
    }

    // Compile the code with the given index (argv[1]
    const char *code_idx = argv[1]; // This will be the program code, like 1A or 1807A
    // We just append the .cpp and compile the shit

    if (strncmp(argv[1], "clear", 5) == 0)
    {
        printf("Clearing all executables...\n");
        // system("del *.obj"); // We are using g++
        system("del *.exe");

        // system("cls"); // I don't care, just use pwsh or cmd
        return 0;
    }

    if (strncmp(argv[2], "new", 3) == 0) // We are creating a file
    {
        printf("creating file\n");
        char cmd[100];
        sprintf(cmd, "touch %s.cpp", code_idx);
        if (!system(cmd))
        {
            return 0;
        }
        
    }
    

    char compile_command[100];
    // The compile command to be executed
    sprintf(compile_command, "g++.exe %s.cpp -o _%s.exe", code_idx, code_idx);

    if (!system(compile_command))
    printf("Code compiled successfully!\n");

    if (argc > 2)
    {
        if (strncmp(argv[2], "run", 3) == 0)
        {
            char run_command[100];
            sprintf(run_command, "_%s.exe", code_idx);
            // system("cls"); // NAH
            system(run_command);
        }
    }

    return 0;
}