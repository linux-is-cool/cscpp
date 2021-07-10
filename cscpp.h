/* "cscpp" C# layer for C/C++


Copyright 2021 Anonymous

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifdef main
#error "To use cscpp, you must not define main(), otherwise function like Start and Update may not work"
#endif

#ifndef __GNUC__
#pragma "cscpp may not work without GCC, G++, or other GNU C-like compilers."
#endif

// 
#ifndef Vector2
typedef struct Vector2 { int x,y } Vector2;
#endif
#ifndef Vector3
typedef struct Vector3 { int x,y,z } Vector3;
#endif

#ifndef Start
void Start();
#endif
#ifndef Update
void Update();
#endif

void main() {
    Start();
    for(;;) {
        Update();
    }
}
