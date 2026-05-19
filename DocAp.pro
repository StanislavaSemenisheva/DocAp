QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


RC_ICONS = appicon.ico

SOURCES += \
    apteka.cpp \
    aptekapassword.cpp \
    barcodegenerator.cpp \
    doctor.cpp \
    main.cpp \
    mainwindow.cpp \
    medicinelistbase.cpp \
    medicinelistdiabetes1.cpp \
    medicinelistdiabetes2.cpp \
    medicinelisthiv.cpp \
    medicinelisttuberculosis.cpp \
    ordercode.cpp \
    orderrequest.cpp \
    orderstorage.cpp \
    pacient.cpp \
    passwordwindow.cpp \
    patientcabinet.cpp \
    patientinfo.cpp \
  

HEADERS += \
    apteka.h \
    aptekapassword.h \
    barcodegenerator.h \
    doctor.h \
    mainwindow.h \
    medicinelistbase.h \
    medicinelistdiabetes1.h \
    medicinelistdiabetes2.h \
    medicinelisthiv.h \
    medicinelisttuberculosis.h \
    ordercode.h \
    orderrequest.h \
    orderstorage.h \
    pacient.h \
    passwordwindow.h \
    patientcabinet.h \
    patientinfo.h \

    windowsize.h

FORMS += \
    apteka.ui \
    aptekapassword.ui \
    barcodegenerator.ui \
    doctor.ui \
    mainwindow.ui \
    ordercode.ui \
    orderrequest.ui \
    pacient.ui \
    passwordwindow.ui \
    patientcabinet.ui \
    patientinfo.ui \


RESOURCES += \
    resources.qrc
