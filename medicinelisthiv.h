#ifndef MEDICINELISTHIV_H
#define MEDICINELISTHIV_H

#include "medicinelistbase.h"

class Medicinelisthiv : public MedicineListBase
{
    Q_OBJECT
public:
    explicit Medicinelisthiv(QWidget *parent = nullptr);

protected:
    void setupMedicineList() override;
};

#endif
