#include "medicinelistdiabetes1.h"

MedicineListDiabetes1::MedicineListDiabetes1(QWidget *parent)
    : MedicineListBase(parent)
{
    setupMedicineList();
}

void MedicineListDiabetes1::setupMedicineList()
{
    addMedicine("Хумалог (100 ЕД/мл\10мл)");
    addMedicine("Лизпро-Санофи (100 ЕД/мл\10мл)");
    addMedicine("Лизпро-Ферейн (100 ЕД/мл\10мл)");
    addMedicine("НовоРапид (100 ЕД/мл\10мл)");
    addMedicine("Аспарт-Ферейн (100 ЕД/мл\10мл)");
    addMedicine("Аспирапид (100 ЕД/мл\10мл)");
    addMedicine("Лантус (100 ЕД/мл\10мл)");
    addMedicine("Туджео (300 ЕД/мл\1,5мл)");
    addMedicine("Гларгин-Санофи (100 ЕД/мл\10мл)");
    addMedicine("Базаглар (100 ЕД/мл\10мл)");
    addMedicine("Левемир (100 ЕД/мл\10мл)");
    addMedicine("Детемир-Ферейн (100 ЕД/мл\10мл)");
    addMedicine("Тресиба (100 ЕД/мл\10мл)");
    addMedicine("Тресиба (200 ЕД/мл\10мл)");
    addMedicine("Деглудек-Ново (100 ЕД/мл\10мл)");
    addMedicine("Глюкометр OneTuoch Select Plus Flex");
    addMedicine("Глюкометр OneTuoch Verio");
    addMedicine("Глюкометр Accu-Chek");
    addMedicine("Глюкометр Contour");
    addMedicine("Глюкометр Сателлит");
    addMedicine("Тест-полоски OneTuoch Select Plus (25 шт)");
    addMedicine("Тест-полоски OneTuoch Select Plus (50 шт)");
    addMedicine("Тест-полоски OneTuoch Select Plus (100 шт)");
    addMedicine("Тест-полоски OneTuoch Verio (50 шт)");
    addMedicine("Тест-полоски Сателлит (50 шт)");
    addMedicine("Тест-полоски Contour (50 шт)");
    addMedicine("Тест-полоски Accu-Chek (50 шт)");
    addMedicine("Ланцеты OneTuoch Verio (50 шт)");
    addMedicine("Ланцеты OneTuoch Delica Plus (100 шт)");
}
