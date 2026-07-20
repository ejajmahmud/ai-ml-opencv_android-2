# 下载opencv的android sdk

- 从官网https://opencv.org/releases/下载android版的sdk。

# 新建JNI工程

- 新建工程时选择native c++。也可以新建工程后，在app的build.gradle添加cmake配置，然后新建CMakeLists.txt。

  <img src=".\opencv1.png" alt="opencv1" style="zoom:50%;" />

<img src=".\opencv2.png" alt="opencv2" style="zoom:50%;" />

<img src=".\opencv3.png" alt="opencv3" style="zoom:50%;" />

# 导入OpenCV库和头文件

- 在下载的opencv的sdk中，在\sdk\native\jni可以看到include文件夹，这是头文件，把include文件夹拷贝到工程的app/src/main/cpp目录下。

- 在下载的opencv的sdk中，在sdk\native\libs可以看到不同架构的文件夹，里面都有libopencv_java3.so库。拷贝需要的架构的文件夹到工程的app/src/main/jniLibs目录下，如果没有jniLibs目录就新建一个。

  <img src=".\opencv4.png" alt="opencv4" style="zoom:50%;" />

# 在cmake添加opencv配置

- 在CMakeLists.txt文件中，添加opencv的头文件和库的路径，编译时链接opencv的库。注意${CMAKE_SOURCE_DIR}指的是CMakeLists.txt所在的文件夹的路径，所以相对路径要准确

  <img src=".\opencv5.png" alt="opencv5" style="zoom:50%;" />

  <img src=".\opencv6.png" alt="opencv6" style="zoom:50%;" />

# 测试OpenCV的方法是否能调用

- 在native-lib.cpp上调用opencv的版本信息，编译运行后app界面有打印出opencv的版本信息，说明opencv配置没有问题。

  <img src=".\opencv7.png" alt="opencv7" style="zoom:50%;" />