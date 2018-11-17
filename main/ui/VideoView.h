#ifndef VIDEOVIEW_H
#define VIDEOVIEW_H

// Qt
#include <QFileInfo>
#include <QMessageBox>
#include <QFileDialog>
// Local
#include "main/ui/MagnifyOptions.h"
#include "main/other/Structures.h"
#include "main/threads/PlayerThread.h"
#include "main/ui/FrameLabel.h"
#include "main/threads/SavingThread.h"

namespace Ui {
    class VideoView;
}

class VideoView : public QWidget
{
    Q_OBJECT

public:
    explicit VideoView(QWidget *parent, QString filepath);
    ~VideoView();
    bool loadVideo(int threadPrio, int width, int height, double fps);
    void setCodec(int codec);
    void set_useVideoCodec(bool use);

private:
    Ui::VideoView *ui;
    QFileInfo file;
    QString filename;
    PlayerThread *playerThread;
    /*Client *clientThread;
    Server *serverThread;*/
    ImageProcessingFlags imageProcessingFlags;
    bool isFileLoaded;

    void stopPlayerThread();
    QString getFormattedTime(int time);
    void handleOriginalWindow(bool doEmit);
    FrameLabel *originalFrame;
    SavingThread *vidSaver;
    int codec;
    bool useVideoCodec;

public slots:
    void newMouseData(struct MouseData mouseData);
    void newMouseDataOriginalFrame(struct MouseData mouseData);
    void updateMouseCursorPosLabel();
    void updateMouseCursorPosLabelOriginalFrame();
    void endOfFrame_action();
    void endOfSaving_action();
    void updateProgressBar(int frame);

private slots:
    void updateFrame(const QImage &frame);
    void updateOriginalFrame(const QImage &frame);
    void updatePlayerThreadStats(struct ThreadStatisticsData statData);
    void handleContextMenuAction(QAction *action);
    void play();
    void stop();
    void pause();
    void setTime();
    void save_action();

signals:
    void newImageProcessingFlags(struct ImageProcessingFlags imageProcessingFlags);
    void setROI(QRect roi);
};

#endif // VIDEOVIEW_H
