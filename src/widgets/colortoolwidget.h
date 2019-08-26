#ifndef COLORTOOLWIDGET_H
#define COLORTOOLWIDGET_H

#include <QStackedWidget>
#include <QVBoxLayout>
#include <DLabel>

DWIDGET_USE_NAMESPACE

class ColorToolWidget : public DLabel
{
    Q_OBJECT
public:
    explicit ColorToolWidget(QWidget *parent = nullptr);
    ~ColorToolWidget();

    void initWidget();
    //录屏截屏控件按钮初始化
    void initColorLabel();

signals:
    void colorChecked(QString colorType);

public slots:

private:
    QVBoxLayout *m_baseLayout;
    bool m_isChecked;
};

#endif // COLORTOOLWIDGET_H