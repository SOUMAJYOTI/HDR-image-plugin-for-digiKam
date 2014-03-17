/* ============================================================
 *
 * This file is a part of kipi-plugins project
 * http://www.digikam.org
 *
 * Date        : 2013-09-05
 * Description : Autodetects pfsinhdrgen binary program 
 *
 * Copyright (C) 2013 by Soumajyoti Sarkar <ergy dot ergy at gmail dot com>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation;
 * either version 2, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * ============================================================ */

#ifndef PFSINHDRGENBINARY_H
#define PFSINHDRGENBINARY_H
// Local includes

#include "kpbinaryiface.h"

using namespace KIPIPlugins;

namespace KIPIExpoBlendingPlugin
{

class PfsInHdrGenBinary : public KPBinaryIface
{

public:

    PfsInHdrGenBinary()
        : KPBinaryIface(QString("pfsinhdrgen"), 
                        QString(), 
                        QString(),
                        0, 
                        QString("PfsCalibrate"), 
                        QString("http://pfstools.sourceforge.net/pfscalibration.html"),
                        QString("ExpoBlending"), 
                        QStringList("-v")
                       )
        {
            setup();
        }

    ~PfsInHdrGenBinary()
    {
    }
   
protected:
  
    virtual bool parseHeader(const QString& output);
    
};

} // namespace KIPIExpoBlendingPlugin

#endif  // PFSINHDRGENBINARY_H
