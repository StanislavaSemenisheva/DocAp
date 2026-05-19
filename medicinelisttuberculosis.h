#ifndef MEDICINELISTTUBERCULOSIS_H
#define MEDICINELISTTUBERCULOSIS_H

#include "medicinelistbase.h"


class MedicineListTuberculosis : public MedicineListBase
{
    Q_OBJECT
public:
    explicit MedicineListTuberculosis(QWidget *parent = nullptr);

protected:
    void setupMedicineList() override;
};

#endif // MEDICINELISTTUBERCULOSIS_H
