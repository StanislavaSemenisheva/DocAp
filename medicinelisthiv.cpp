#include "medicinelisthiv.h"

Medicinelisthiv::Medicinelisthiv(QWidget *parent)
    : MedicineListBase(parent)
{
    setupMedicineList();
}

void Medicinelisthiv::setupMedicineList()
{
    addMedicine("Трувада (300мг+200мг\30шт)");
    addMedicine("Тенотеф (300мг+200мг\30шт)");
    addMedicine("Рикофера (300мг+200мг\30шт)");

    addMedicine("Тивикай (50 мг\30шт)");
    addMedicine("Долутегра (50 мг\30шт)");
    addMedicine("Долутамин (50 мг\30шт)");

    addMedicine("Стокрин (600 мг\30шт)");
    addMedicine("Эфавир (600 мг\30шт)");
    addMedicine("Регаст (600 мг\30шт)");
    addMedicine("Эвитренз (600 мг\30шт)");

    addMedicine("Калетра (200мг+50мг\120шт)");
    addMedicine("Лопитон (200мг+50мг\120шт)");
    addMedicine("Лопинакс (200мг+50мг\120шт)");

    addMedicine("Презиста (600 мг\60шт)");
    addMedicine("Дарунамин (600 мг\60шт)");
    addMedicine("Презико (600 мг\60шт)");

    addMedicine("Исентресс (400 мг\60шт)");
    addMedicine("Раминоген (400 мг\60шт)");
    addMedicine("Регатрав (400 мг\60шт)");

    addMedicine("Биктарви (50мг+200мг+25мг\30шт)");
    addMedicine("Биктегрин (50мг+200мг+25мг\30шт)");

    addMedicine("Реатаз (300 мг\60шт)");
    addMedicine("Атазанамин (300 мг\60шт)");

    addMedicine("Норвир (100 мг\30шт)");
    addMedicine("Ритонакс (100 мг\30шт)");
}
