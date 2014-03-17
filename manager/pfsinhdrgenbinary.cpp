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

#include "pfsinhdrgenbinary.h"

// KDE includes

#include <kdebug.h>

namespace KIPIExpoBlendingPlugin
{

bool PfsInHdrGenBinary::parseHeader(const QString& output)
{
    QString firstLine = output.section('\n', m_headerLine, m_headerLine);
    kDebug() << path() << " help header line: \n" << firstLine;

    if (firstLine.contains("Usage: pfsinhdrgen [--verbose] <file.hdrgen>"))
    {
        return true;
    }

    return false;
}

}  // namespace KIPIExpoBlendingPlugin

