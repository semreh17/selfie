#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
    const char *command_format = "fswebcam -r 1280x720 --frames 1 %s 2> /dev/null";
    char command[256];
    const char *filename = "selfie.jpg";
    snprintf(command, sizeof(command), command_format, filename);
    
    cameraDraw();

    system(command);
    system("open selfie.jpg 2> /dev/null");
    //sleep(1);
    //write(STDOUT_FILENO, "\x1b[2J", 4);		// tries to clean the screen but the opened image prevents it
	//write(STDOUT_FILENO, "\x1b[H", 3);		// move cursor (0, 0)
    //write(STDOUT_FILENO, "\x03", 1);        // end of text
    
    return EXIT_SUCCESS;
}
