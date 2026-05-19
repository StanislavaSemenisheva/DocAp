#include "medicinelisttuberculosis.h"

MedicineListTuberculosis::MedicineListTuberculosis(QWidget *parent)
    : MedicineListBase(parent)
{
    setupMedicineList();
}

void MedicineListTuberculosis::setupMedicineList()
{
    addMedicine("Изокомб (60мг+300мг+120мг+225мг+20мг\30шт)");
    addMedicine("Изониазид (300 мг\100шт");
    addMedicine("Изониазид-АКОС (300 мг\100шт");
    addMedicine("Изониазид-Ферейн (300 мг\100шт)");
    addMedicine("Тубазид (300 мг\100шт)");

    addMedicine("Рифампицин-Деко (150мг\10шт)");
    addMedicine("Рифампицин-Ферейн (450 мг\100шт)");
    addMedicine("Рифампицин-АКОС (450 мг\100шт)");
    addMedicine("Бенемецин (450 мг\100шт)");

    addMedicine("Пиразинамид (500мг\100шт)");
    addMedicine("Пиразинамид-АКОС (500 мг\100шт)");
    addMedicine("Тизинамид (500 мг\100шт)");

    addMedicine("Этамбутол (400мг\100шт)");
    addMedicine("Этамбутол-АКОС (400 мг\100шт)");
    addMedicine("Этамбутол-Ферейн (400 мг\100шт)");
    addMedicine("Этамбутол-Тева (400 мг\100шт)");
    addMedicine("Мьямбутол (400 мг\100шт)");

    addMedicine("Стрептомицин (1 г\10шт)");
    addMedicine("Стрептомицин-Ферейн (1 г\10шт)");
    addMedicine("Стрептомицина сульфат (1 г\10шт)");

    addMedicine("Канамицин (1 г\10шт)");
    addMedicine("Канамицина сульфат (1 г\10шт)");

    addMedicine("Циклосерин (250мг\100шт)");
    addMedicine("Циклосерин-АКОС (250 мг\100шт)");
    addMedicine("Коксерин (250 мг\100шт)");

    addMedicine("Протионамид (250мг\50шт)");
    addMedicine("Протионамид-АКОС (250 мг\100шт)");
    addMedicine("Петха (250 мг\100шт)");

    addMedicine("Левофлоксацин (500мг\10шт) ");
    addMedicine("Левофлоксацин-АКОС (500 мг\10шт)");
    addMedicine("Левофлоксацин-Тева (500 мг\10шт)");
    addMedicine("Таваник (500 мг\10шт)");
    addMedicine("Лефлокс (500 мг\10шт)");

    addMedicine("Моксифлоксацин (400 мг\10шт)");
    addMedicine("Моксифлоксацин-АКОС (400 мг\10шт)");
    addMedicine("Моксифлоксацин-Тева (400 мг\10шт)");
    addMedicine("Авелокс (400 мг\10шт)");
    addMedicine("Мофлаксия (400 мг\10шт)");

    addMedicine("ПАСК (500 мг\100шт)");
    addMedicine("ПАСК-АКОС (500 мг\100шт)");
    addMedicine("Паском (500 мг\100шт)");

    addMedicine("Капреомицин (1 г\10шт)");
    addMedicine("Капреомицин-АКОС (1 г\10шт)");
    addMedicine("Капреомицина сульфат (1 г\10шт)");

    addMedicine("Теризидон (250 мг\100шт)");
    addMedicine("Теризидон-АКОС (250 мг\100шт)");

    addMedicine("Линезолид (600 мг\10шт)");
    addMedicine("Линезолид-АКОС (600 мг\10шт)");
    addMedicine("Зивокс (600 мг\10шт)");
}
