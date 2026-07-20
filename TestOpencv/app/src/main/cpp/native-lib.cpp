#include <jni.h>
#include <string>
#include <opencv2/core/ocl.hpp>
#include "include/opencv2/opencv.hpp"
#include "include/opencv2/core/version.hpp"


extern "C" JNIEXPORT jstring JNICALL
Java_com_octant_testopencv_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */
        ) {
    std::string hello = "Hello from C++";
    std::string version = "OpenCV version : ";
    version = version + CV_VERSION;
    return env->NewStringUTF(version.c_str());
}




