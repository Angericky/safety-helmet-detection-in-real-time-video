# Realtime-Video-Safety-Helmet-Detection
An OpenCV/Qt based realtime application to magnify motion and color in videos and camerastreams

## Examples
![Color Magnified Video](pictures/Example.png)

*Image shows the detection output for a video. In the pictures you can see the proposal frames of helmets and people in different colors.



![Motion Magnified Camerastream](pictures/Play.png)

![Motion Magnified Camerastream](pictures/Database.png)

### Dependencies
- [Qt](http://qt-project.org/) >= 5.0
- [OpenCV](http://opencv.org/) >= 2.0 (< 3.0 ? -> not tested yet)
- [CUDA] [CuDnn]
- [MySQL]

# How do I use it?

![MainWindow with saving codec menu](pictures/MainWindow.png)
![Motion Magnified Camerastream](pictures/Connext.png)
Operating details refer to 《安全帽检测软件操作说明书》.


### Main Window
When succesfully connected to a camera or opened a window, you can draw a box in the video, to scale and only amplify this Region Of Interest in a video source. Setting the video back to normal can be done via menu that opens with a right click in the video. There is also the option to show the unmagnified image besides the processed one.

![Right-click Menu in Frame Label](pictures/Camera.png)
![Right-click Menu in Frame Label](pictures/Connect.png)

### Save
For saving videos or recording from camera you have to specify the file extension by your own. .avi is well supported. If you should encounter problems, please try a differenct saving codec in the toolbar under File->Set Saving Codec.

