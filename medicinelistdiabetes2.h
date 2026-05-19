#ifndef MEDICINELISTDIABETES2_H
#define MEDICINELISTDIABETES2_H

#include "medicinelistbase.h"

class MedicineListDiabetes2 : public MedicineListBase
{
    Q_OBJECT
public:
    explicit MedicineListDiabetes2(QWidget *parent = nullptr);

protected:
    void setupMedicineList() override;
};

#endif
