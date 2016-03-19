#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ikinciSayiyaGecildi=false;
    bolme=false;
    topla=false;
    cikar=false;
    carp=false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_bir_clicked()
{
     if(!ikinciSayiyaGecildi)
     {
         ilkSayi+="1";
         ui->textBrowser->setText(ilkSayi);
     }
     if(ikinciSayiyaGecildi)
     {
         sonSayi+="1";
         ui->textBrowser->setText(sonSayi);

     }
}

void MainWindow::on_pushButton_iki_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="2";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="2";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_uc_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="3";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="3";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_dort_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="4";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="4";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_bes_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="5";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="5";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_alti_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="6";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="6";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_yedi_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="7";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="7";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_sekiz_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="8";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="8";
        ui->textBrowser->setText(sonSayi);

    }
}


void MainWindow::on_pushButton_dokuz_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="9";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="9";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_sifir_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+="0";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+="0";
        ui->textBrowser->setText(sonSayi);


    }
}

void MainWindow::on_pushButton_nokta_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi+=".";
        ui->textBrowser->setText(ilkSayi);

    }
    if(ikinciSayiyaGecildi)
    {
        sonSayi+=".";
        ui->textBrowser->setText(sonSayi);

    }
}

void MainWindow::on_pushButton_topla_clicked()
{
  topla=true;
  bolme=false;
  cikar=false;
  carp=false;
  firstSayi=ilkSayi.toFloat();
  ilkSayi.clear();
  ui->textBrowser->setText("+");
  ikinciSayiyaGecildi=true;
}

void MainWindow::on_pushButton_cikar_clicked()
{
    cikar=true;
    bolme=false;
    topla=false;
    carp=false;
    firstSayi=ilkSayi.toFloat();
    ilkSayi.clear();
    ui->textBrowser->setText("-");
    ikinciSayiyaGecildi=true;

}

void MainWindow::on_pushButton_carp_clicked()
{
    bolme=false;
    topla=false;
    cikar=false;
    carp=true;
    firstSayi=ilkSayi.toFloat();
    ilkSayi.clear();
    ui->textBrowser->setText("x");
    ikinciSayiyaGecildi=true;

}

void MainWindow::on_pushButton_bol_clicked()
{
    bolme=true;
    carp=false;
    topla=false;
    cikar=false;
    if(ilkSayi!="0")
    {
    firstSayi=ilkSayi.toFloat();
    ilkSayi.clear();
    ui->textBrowser->setText("/");
    ikinciSayiyaGecildi=true;
    }
    if(ilkSayi=="0")
    {
        ui->textBrowser->setText("Hata ! Hiçbir sayı 0'a bölünemez");
    }

}

void MainWindow::on_pushButton_hesapla_clicked()
{
    if(!ikinciSayiyaGecildi)
    {
        ilkSayi.clear();
        sonSayi.clear();
    }
    if(bolme&&sonSayi=="0")
    {

            ui->textBrowser->setText("Hata ! Hiçbir sayı 0'a bölünemez");



    }

    ui->textBrowser->clear();
    endSayi=sonSayi.toFloat();
    if(topla)
    {
        ui->textBrowser->setText(QString::number(firstSayi+endSayi));
        ilkSayi=ui->textBrowser->toPlainText();

    }
    if(cikar)
    {
    ui->textBrowser->setText(QString::number(firstSayi-endSayi));
    ilkSayi=ui->textBrowser->toPlainText();

    }
    if(carp)
    {
    ui->textBrowser->setText(QString::number(firstSayi*endSayi));
    ilkSayi=ui->textBrowser->toPlainText();

    }
    if(bolme&&sonSayi!="0")
    {
    ui->textBrowser->setText(QString::number(firstSayi/endSayi));
    ilkSayi=ui->textBrowser->toPlainText();

    }
    sonSayi.clear();
    ikinciSayiyaGecildi=false;
    topla=false;
    carp=false;
    bolme=false;
    cikar=false;


}

void MainWindow::on_pushButton_kare_clicked()
{

 if(!ikinciSayiyaGecildi)
 {
     ui->textBrowser->setText(QString::number(ilkSayi.toFloat()*ilkSayi.toFloat()));
 }

}



void MainWindow::on_pushButton_temizle_clicked()
{
    ilkSayi.clear();
    sonSayi.clear();
    ikinciSayiyaGecildi=false;
    topla=false;
    carp=false;
    bolme=false;
    cikar=false;
    ui->textBrowser->clear();
}

void MainWindow::on_pushButton_del_clicked()
{
   if(!ikinciSayiyaGecildi)
   {
       ilkSayi.remove(ilkSayi.length()-1,1);
       ui->textBrowser->setText(ilkSayi);
   }
   if(ikinciSayiyaGecildi)
   {
       sonSayi.remove(sonSayi.length()-1,1);
       ui->textBrowser->setText(sonSayi);
   }

}

void MainWindow::on_pushButton_karekok_clicked()
{
    ui->textBrowser->setText(QString::number(qSqrt(ilkSayi.toFloat())));
}
