/*
 * Copyright (C) 2016 iCub Facility - Istituto Italiano di Tecnologia
 * Author: Ugo Pattacini
 * email:  ugo.pattacini@iit.it
 * Permission is granted to copy, distribute, and/or modify this program
 * under the terms of the GNU General Public License, version 2 or any
 * later version published by the Free Software Foundation.
 *
 * A copy of the license can be found at
 * http://www.robotcub.org/icub/license/gpl.txt
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details
*/

#ifndef _GAZECONTROLSIMPLELOOK_H_
#define _GAZECONTROLSIMPLELOOK_H_

#include <yarp/rtf/TestCase.h>
#include <yarp/os/Property.h>
#include <yarp/dev/PolyDriver.h>

/**
* \ingroup icub-tests
*
* This test verifies the simple gaze movements.
*
* Accepts the following parameters:
* | Parameter name | Type   | Units | Default Value | Required |  Description  | Notes |
* |:--------------:|:------:|:-----:|:-------------:|:--------:|:-------------:|:-----:|
* |       -        |    -   |   -   |      -        |    -     |       -       |   -   |
*/
class GazeControlSimpleLookTest : public yarp::rtf::TestCase
{
    yarp::dev::PolyDriver driver;

public:
    GazeControlSimpleLookTest();
    virtual ~GazeControlSimpleLookTest();
    virtual bool setup(yarp::os::Property& property);
    virtual void tearDown();
    virtual void run();
};

#endif
