/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtQuick module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QSGOPENVGHELPERS_H
#define QSGOPENVGHELPERS_H

#include <QtGui/QPainterPath>
#include <QtGui/QColor>
#include <QtGui/QImage>
#include <VG/openvg.h>

QT_BEGIN_NAMESPACE

namespace QSGOpenVGHelpers {

VGPath qPainterPathToVGPath(const QPainterPath &path);
void qDrawTiled(VGImage image, const QSize imageSize, const QRectF &targetRect, const QPointF offset, float scaleX, float scaleY);
void qDrawBorderImage(VGImage image, const QSizeF &textureSize, const QRectF &targetRect, const QRectF &innerTargetRect, const QRectF &subSourceRect);
void qDrawSubImage(VGImage image, const QRectF &sourceRect, const QPointF &destOffset);
const QVector<VGfloat> qColorToVGColor(const QColor &color, float opacity = 1.0f);
VGImageFormat qImageFormatToVGImageFormat(QImage::Format format);
QImage::Format qVGImageFormatToQImageFormat(VGImageFormat format);

};

QT_END_NAMESPACE

#endif // QSGOPENVGHELPERS_H