# Realtime-Video-Safety-Helmet-Detection
An OpenCV/Qt based realtime application to magnify motion and color in videos and camerastreams

## Examples
![Color Magnified Video](pictures/j_color-vid.png)

*Image shows the color magnified output for a video. In the pictures you can see the effects of the cardiac cycle on the skins color. The upper image shows the skin of the face during a diastole, the lower one during a ventricular systole of the cycle.*



![Motion Magnified Camerastream](pictures/j_motion-cam.png)

*(Un-)Wanted artifacts from a realtime motion magnified camerastream. The strong b/w areas around torso and head are resulting from a fast backwards movement and excessive amplification. The white points (the ones bigger than the noise) on the left side are awhirled dust particles, not visible in the original camera source.*

### Dependencies
- [Qt](http://qt-project.org/) >= 5.0
- [OpenCV](http://opencv.org/) >= 2.0 (< 3.0 ? -> not tested yet)
- [CUDA] [CuDnn]

# How do I use it?

Operating details refer to 《安全帽检测软件操作说明书》.

### Main Window
When succesfully connected to a camera or opened a window, you can draw a box in the video, to scale and only amplify this Region Of Interest in a video source. Setting the video back to normal can be done via menu that opens with a right click in the video. There is also the option to show the unmagnified image besides the processed one.

![Right-click Menu in Frame Label](pictures/frameLabel_menu.png)

### Save
For saving videos or recording from camera you have to specify the file extension by your own. .avi is well supported. If you should encounter problems, please try a differenct saving codec in the toolbar under File->Set Saving Codec.

![MainWindow with saving codec menu](pictures/mainWindow_Codecs.png)
