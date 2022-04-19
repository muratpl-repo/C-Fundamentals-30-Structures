#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ogrenci {
    char ad[30];
    char soyad[30];
    char okul[30];
    char bolum[30];
    int okulNumarasi;
    int sinif;
}
ogr1,ogr2 = {"Murat","Pala","MSKU","EEE",140502013,4},
ikizler[2] = {{"Ahmet","Yuksel","MSKU","EEE",140502014,3},{"Mehmet","Yuksel","MSKU","EEE",140502015,3}};


int main()
{
    setlocale(LC_ALL,"Turkish");

    struct ogrenci ogr3 = {"Veli","Deniz","MSKU","EEE",140502016,2};

    strcpy(ogr1.ad,"Kaan");
    strcpy(ogr1.soyad,"Academy");
    strcpy(ogr1.okul,"Galatasaray Universitesi");
    strcpy(ogr1.bolum,"Bilgisayar Muhendisligi");
    ogr1.okulNumarasi = 18401604;
    ogr1.sinif = 1;

    printf("%s %s %s %s %d %d\n",ogr1.ad,ogr1.soyad,ogr1.okul,ogr1.bolum,ogr1.okulNumarasi,ogr1.sinif);
    printf("%s %s %s %s %d %d\n",ogr2.ad,ogr2.soyad,ogr2.okul,ogr2.bolum,ogr2.okulNumarasi,ogr2.sinif);
    printf("%s %s %s %s %d %d\n",ogr3.ad,ogr3.soyad,ogr3.okul,ogr3.bolum,ogr3.okulNumarasi,ogr3.sinif);
    printf("%s %s %s %s %d %d\n",ikizler[0].ad,ikizler[0].soyad,ikizler[0].okul,ikizler[0].bolum,ikizler[0].okulNumarasi,ikizler[0].sinif);
    printf("%s %s %s %s %d %d\n",ikizler[1].ad,ikizler[1].soyad,ikizler[1].okul,ikizler[1].bolum,ikizler[1].okulNumarasi,ikizler[1].sinif);

    return 0;
}
