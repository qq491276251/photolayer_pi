/***************************************************************************
 *
 * Project:  OpenCPN PhotoLayer plugin
 * Author:   Mike Rossiter, based on WeatherFax by Sean D'Epagnier
 *
 ***************************************************************************
 *   Copyright (C) 2017 by Mike Rossiter                                   *
 *   sean@depagnier.com                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 *
 */

#include <wx/wx.h>

#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "AboutDialog.h"
#include "PhotoLayer_pi.h"

AboutDialog::AboutDialog( wxWindow *parent ) : AboutDialogBase(parent)
{
    m_stVersion->SetLabel(wxString::Format(_T("%d.%d"), MY_PLUGIN_VERSION_MAJOR, MY_PLUGIN_VERSION_MINOR));
}

void AboutDialog::OnAboutAuthor( wxCommandEvent& event )
{
    wxLaunchDefaultBrowser(_T(ABOUT_AUTHOR_URL));
}