/*
===============================================================================
                C PREPROCESSOR – AT LEAST WHAT WE NEED
===============================================================================

DIRECTIVES (some commands for the preprocessor)
------------------------------------------

  #include <file.h>         // Includes system header
  #include "file.h"         // Includes local header

  #define NAME value        // Object-like macro
  #define F(x) (x+1)        // Function-like macro
  #undef NAME               // Removes a macro definition

  #ifdef NAME               // True if NAME is defined
  #ifndef NAME              // True if NAME is NOT defined
  #if expr                  // Conditional compilation (expr is integer constant)
  #elif expr                // "else if" for #if
  #else                     // Fallback branch
  #endif                    // End conditional block

-------------------------------------------------------------------------------

PREDEFINED MACROS (from the ISO C standard)
  __FILE__      // Current file name (string literal)
  __LINE__      // Current line number (integer)
  __DATE__      // Compilation date (string literal: "Mmm dd yyyy")
  __TIME__      // Compilation time (string literal: "hh:mm:ss")
  __STDC__      // 1 if compiler follows ISO C standard

  __STDC_HOSTED__   // 1 for hosted (normal OS) implementation; 0 for freestanding
  __STDC_VERSION__  // C standard version (e.g., 199901L, 201112L, 201710L)

  __func__      // Name of current function (not a macro, but standard identifier)

-------------------------------------------------------------------------------

COMMON COMPILER/PLATFORM MACROS (not ISO C, but widely used)
  << Operating systems >> 
  _WIN32         // Windows (32-bit and 64-bit)
  _WIN64         // Windows (64-bit)
  __linux__      // Linux
  __unix__       // Unix-like systems
  __APPLE__      // Apple platforms (macOS/iOS)
  __MACH__       // macOS kernel indicator
  __ANDROID__    // Android
  __FreeBSD__    // FreeBSD

  << Architectures >>
  __x86_64__     // x86-64
  __i386__       // 32-bit x86
  __arm__        // ARM 32-bit
  __aarch64__    // ARM 64-bit
  __powerpc__    // PowerPC

-------------------------------------------------------------------------------

NOTES
  - Preprocessor runs BEFORE compilation.
  - It operates purely on text (no types, no declarations).
  - Everything starting with '#' except in strings or comments is preprocessor code.
  - Use gcc with -E flag to get the precompiled file (add -P for more readability)
===============================================================================
*/
#include <stdio.h>

int main() {
    //1. Print constant VERSION (self created) and __TIME___ 
    
    //2. Create a Square macro 
    int x = 5;
    printf("Square of %i: %i\n", x, SQUARE(x));

    // 3. Print the process ID using 'getpid()' from '<unistd.h>'  
    // Note: <unistd.h> is a POSIX lib usually only supported by UNIX systems
   
    return 0;
}