#ifndef MEDICINELISTDIABETES1_H
#define MEDICINELISTDIABETES1_H


#include "medicinelistbase.h"

class MedicineListDiabetes1 : public MedicineListBase
{
    Q_OBJECT
public:
    explicit MedicineListDiabetes1(QWidget *parent = nullptr);

protected:
    void setupMedicineList() override;
};

#endif
