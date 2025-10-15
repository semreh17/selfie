#include <stdio.h>
#include <stdlib.h>

void cameraDraw() {
    printf("            ___ \n");
    printf("           / _ \\ \n");
    printf("          | / \\ | \n");
    printf("          | \\_/ | \n");
    printf("           \\___/ ___ \n");
    printf("           _|_|_/[_]\\__==_ \n");
    printf("          [---------------] \n");
    printf("          | O   /---\\     | \n");
    printf("          |    |     |    | \n");
    printf("          |     \\___/     | \n");
    printf("          [---------------] \n");
    printf("                [___] \n");
    printf("                 | |\\\\ \n");
    printf("                 | | \\\\ \n");
    printf("                 [ ]  \\\\_ \n");
    printf("                /|_|\\  ( \\ \n");
    printf("               //| |\\\\  \\ \\ \n");
    printf("              // | | \\\\  \\ \\ \n");
    printf("             //  |_|  \\\\  \\_\\ \n");
    printf("            //   | |   \\\\ \n");
    printf("           //\\   | |   /\\ \\ \n");
    printf("          //  \\  | |  /  \\ \\ \n");
    printf("         //    \\ | | /    \\ \\ \n");
    printf("        //      \\|_|/      \\ \\ \n");
    printf("       //        [_]        \\ \\ \n");
    printf("      //          H          \\ \\ \n");
    printf("     //           H           \\ \\ \n");
    printf("    //            H            \\ \\ \n");
    printf("   //             H             \\ \\ \n");
    printf("  //              H              \\ \\ \n");
    printf(" //                               \\ \\ \n");
    printf("//                                 \\ \\ \n");
    return;
}


int main() {
    const char *command_format = "fswebcam -r 1280x720 --frames 1 %s";
    char command[256];
    const char *filename = "selfie.jpg";
    snprintf(command, sizeof(command), command_format, filename);
    
    cameraDraw();

    system(command);
    system("open selfie.jpg");
    return EXIT_SUCCESS;
}
