﻿// Magic Software, Inc.
// http://www.magic-software.com
// Copyright (c) 2000-2002.  All Rights Reserved
//
// Source code from Magic Software is supplied under the terms of a license
// agreement and may not be copied or disclosed except in accordance with the
// terms of that agreement.  The various license agreements may be found at
// the Magic Software web site.  This file is subject to the license
//
// FREE SOURCE CODE
// http://www.magic-software.com/License/free.pdf

#include "MgcODE.h"
using namespace Mgc;

//----------------------------------------------------------------------------
ODE::ODE (int iDim, Real fStep, Function* aoF)
{
    m_iDim = iDim;
    m_fStep = fStep;
    m_aoF = aoF;
    m_aoA = NULL;
}
//----------------------------------------------------------------------------
ODE::ODE (int iDim, Real fStep, AutoFunction* aoA)
{
    m_iDim = iDim;
    m_fStep = fStep;
    m_aoF = NULL;
    m_aoA = aoA;
}
//----------------------------------------------------------------------------
ODE::~ODE ()
{
}
//----------------------------------------------------------------------------

