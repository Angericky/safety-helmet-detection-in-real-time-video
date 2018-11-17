

#ifndef MAGNIFYOPTIONS_H
#define MAGNIFYOPTIONS_H

// Qt
#include <QWidget>
// Local
#include "external/qxtSlider/qxtspanslider.h"
#include "main/other/Structures.h"
#include "main/other/Config.h"

namespace Ui {
class MagnifyOptions;
}

class MagnifyOptions : public QWidget
{
    Q_OBJECT

public:
    ImageProcessingSettings getSettings();
    ImageProcessingFlags getFlags();
    void toggleGrayscale(bool isActive);

private:
    Ui::MagnifyOptions *ui;
    QxtSpanSlider *doubleSlider;
    ImageProcessingSettings imgProcSettings;
    ImageProcessingFlags imgProcFlags;

public slots:
    void setMaxLevel(int level);

private slots:
    void updateFlagsFromOptionsTab();
    void updateSettingsFromOptionsTab();
    void reset();
    // Internal slots supporting GUI
    void applyColorInterface();
    void applyMotionInterface();

signals:
    void newImageProcessingFlags(struct ImageProcessingFlags);
    void newImageProcessingSettings(struct ImageProcessingSettings);


};

#endif // MAGNIFYOPTIONS_H
