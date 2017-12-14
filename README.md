# Template to use OpenCV with [QTOpenCvViewerGl Widget]

This template allows to use [OpenCV] into a [QT] application (`QMainWindow` based) using the OpenGL-based widget created by @Myzhar.

The project was created using QT Creator, following the initial steps described in [QTOpenCvViewerGl Widget]. However, this project only shows one static image and I am not a [QT] fan, so that I used Visual Studio :)

Project contains a `.pro` file, created using **QT Designer** to place a single `Widget` with a Grid Layout occupying all the window. A **Visual Studio** project can be created using [CMake], which was created manually (you can extract from the QTCreator). Files `mainview.*` are related to the graphical interface. File `mainview.cpp` contains the code to display an image, loading a simple image.

>You need an image called `small.png` in the same location of the source/headers files (aka, the root).

###### If you want to contribute? Great!

[QTOpenCvViewerGl Widget]:<https://github.com/Myzhar/QtOpenCVViewerGl>
[OpenCV]: <https://opencv.org/>
[QT]: <https://www.qt.io/>
[CMake]: <https://cmake.org/>