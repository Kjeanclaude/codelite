//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef EDITOR_OPTIONS_BOOKMARKS_BASE_CLASSES_H
#define EDITOR_OPTIONS_BOOKMARKS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/clrpicker.h>
#include <wx/spinctrl.h>

class EditorSettingsBookmarksBasePanel : public wxPanel
{
protected:
    wxCheckBox* m_displaySelection;
    wxStaticText* m_staticText3;
    wxChoice* m_bookMarkShape;
    wxStaticText* m_staticText4;
    wxColourPickerCtrl* m_backgroundColor;
    wxStaticText* m_staticText5;
    wxColourPickerCtrl* m_foregroundColor;
    wxStaticText* m_staticText66;
    wxColourPickerCtrl* m_highlightColor;
    wxStaticText* m_staticText54;
    wxSpinCtrl* m_spinCtrlHighlightAlpha;

protected:

public:
    EditorSettingsBookmarksBasePanel(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~EditorSettingsBookmarksBasePanel();
};

#endif
