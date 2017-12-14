#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    cv::Mat image = cv::imread("../small.jpg");
    ui->openCVviewer->showImage(image);
}

MainView::~MainView()
{
    delete ui;
}