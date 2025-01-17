/***************************************************************************
                             customdialog.h
                             ----------------
    begin                : Mon Apr 13 2015
    copyright            : (C) 2015 by Vadim Kuznetsov
    email                : ra3xdh@gmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/



#ifndef CUSTOMSIMDIALOG_H
#define CUSTOMSIMDIALOG_H

#include "schematic.h"
#include "spicecomponents/sp_customsim.h"
#include "components/component.h"
#include <QtGui>


/*!
  \file customsimdialog.h
  \brief Implementation of the CustomSimDialog class
*/

/*!
 * \brief The CustomSimDialog class is responsible for editing properties
 *        of Ngspice Custom Simulation component. You can edit multiline
 *        component properties with it.
 */
class CustomSimDialog : public QDialog
{
    Q_OBJECT

private:

    bool a_isXyceScr;
    bool a_isChanged = false;

    SpiceCustomSim* a_comp;
    Schematic *a_schematic;

    QTextEdit* a_edtCode;
    QCheckBox *a_checkCode;
    QPushButton *a_btnOK;
    QPushButton *a_btnApply;
    QPushButton *a_btnCancel;
    QPushButton *a_btnPlotAll;
    QPushButton *a_btnFindOutputs;

    QLineEdit *a_edtVars;
    QLineEdit *a_edtOutputs;

public:
    explicit CustomSimDialog(SpiceCustomSim *pc, Schematic *sch);

signals:

private slots:
    void slotApply();
    void slotOK();
    void slotCancel();
    void slotFindVars();
    void slotFindOutputs();
    void slotChanged();

public slots:

};

#endif // CUSTOMSIMDIALOG_H
