#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString ilkSayi;
    QString sonSayi;
    float firstSayi;
    float endSayi;
    bool ikinciSayiyaGecildi;
    bool bolme;
    bool topla;
    bool carp;
    bool cikar;
private slots:
    void on_pushButton_bir_clicked();

    void on_pushButton_iki_clicked();

    void on_pushButton_uc_clicked();

    void on_pushButton_dort_clicked();

    void on_pushButton_bes_clicked();

    void on_pushButton_alti_clicked();

    void on_pushButton_sekiz_clicked();

    void on_pushButton_yedi_clicked();

    void on_pushButton_dokuz_clicked();

    void on_pushButton_sifir_clicked();

    void on_pushButton_topla_clicked();

    void on_pushButton_cikar_clicked();

    void on_pushButton_carp_clicked();

    void on_pushButton_bol_clicked();

    void on_pushButton_hesapla_clicked();

    void on_pushButton_kare_clicked();

    void on_pushButton_nokta_clicked();

    void on_pushButton_temizle_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_karekok_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
