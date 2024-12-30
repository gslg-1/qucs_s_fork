/***************************************************************************
                               capacitor.h
                              -------------
    begin                : Sat Aug 23 2003
    copyright            : (C) 2003 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef CAPACITOR_H
#define CAPACITOR_H

#include "component.h"


class Capacitor : public MultiViewComponent  {
public:
  Capacitor();
 ~Capacitor() {};
  Component* newOne();
  static Element* info(QString&, char* &, bool getNewOne=false);

protected:
  void createSymbol();
  QString spice_netlist(spicecompat::SpiceDialect dialect = spicecompat::SPICEDefault);
  virtual QString cdl_netlist();
  QString va_code();
};

#endif
