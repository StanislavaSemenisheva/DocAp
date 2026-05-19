#include "medicinelistdiabetes2.h"

MedicineListDiabetes2::MedicineListDiabetes2(QWidget *parent)
    : MedicineListBase(parent)
{
    setupMedicineList();
}

void MedicineListDiabetes2::setupMedicineList()
{

    addMedicine("Сиофор (500мг\60шт)");
    addMedicine("Сиофор (850мг\60шт)");
    addMedicine("Сиофор (1000мг\60шт)");
    addMedicine("Глюкофаж (500мг\60шт)");
    addMedicine("Глюкофаж (850мг\60шт)");
    addMedicine("Глюкофаж (1000мг\60шт)");
    addMedicine("Форметин (500мг\60шт)");
    addMedicine("Метфогамма (500мг\60шт)");
    addMedicine("Багимет (500мг\60шт)");

    addMedicine("Манинил (1.75мг\120шт)");
    addMedicine("Манинил (3.5мг\120шт)");
    addMedicine("Манинил (5мг\120шт)");
    addMedicine("Глибенкламид-АКОС (5мг\120шт)");
    addMedicine("Бетаназ (5мг\120шт)");

    addMedicine("Диабетон (30 мг\60шт)");
    addMedicine("Диабетон (60 мг\60шт)");
    addMedicine("Гликлазид-АКОС (30 мг\60шт)");
    addMedicine("Диатика (30 мг\60шт)");
    addMedicine("Реглид (30 мг\60шт)");

    addMedicine("Янувия (100 мг\28шт)");
    addMedicine("Ситамин (100 мг\28шт)");
    addMedicine("Ситаглиптин-Тева (100 мг\28шт)");

    addMedicine("Джардинс (10 мг\30шт)");
    addMedicine("Джардинс (25 мг\30шт)");
    addMedicine("Эмпактив (10 мг\30шт)");
    addMedicine("Синджарди (12.5мг+1000мг\30шт)");

    addMedicine("Виктоза (6 мг/мл\3мл)");
    addMedicine("Лираглутид-Ферейн (6 мг/мл\3мл)");
}
