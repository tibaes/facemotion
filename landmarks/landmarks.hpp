/* In Julia:
 * ccall((:getFacialLandmarks,"liblandmarks.dylib"), Void, ())
 *
 * http://fael.nl */

#ifndef akDlibFacialLandmarks
#define akDlibFacialLandmarks

extern "C" void getFacialLandmarks(
    const char * _modelPath, 
    const char * _testPath);

#endif
