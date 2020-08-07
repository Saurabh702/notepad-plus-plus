// This file is part of Notepad++ project
// Copyright (C)2020 Don HO <don.h@free.fr>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// Note that the GPL places important restrictions on "derived works", yet
// it does not provide a detailed definition of that term.  To avoid      
// misunderstandings, we consider an application to constitute a          
// "derivative work" for the purpose of this license if it does any of the
// following:                                                             
// 1. Integrates source code from Notepad++.
// 2. Integrates/includes/aggregates Notepad++ into a proprietary executable
//    installer, such as those produced by InstallShield.
// 3. Links to a library or executes a program that does any of the above.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef PREFERENCE_RC_H
#define PREFERENCE_RC_H

#define	IDD_PREFERENCE_BOX 6000
	#define	IDC_BUTTON_CLOSE (IDD_PREFERENCE_BOX + 1)
	#define	IDC_LIST_DLGTITLE (IDD_PREFERENCE_BOX + 2)
	

#define	IDD_PREFERENCE_BAR_BOX 6100 //(IDD_PREFERENCE_BOX + 100)
	#define	IDC_TOOLBAR_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 1)
	#define	IDC_CHECK_HIDE (IDD_PREFERENCE_BAR_BOX + 2)
	#define	IDC_RADIO_SMALLICON (IDD_PREFERENCE_BAR_BOX + 3)
	#define	IDC_RADIO_BIGICON (IDD_PREFERENCE_BAR_BOX + 4)
	#define	IDC_RADIO_STANDARD (IDD_PREFERENCE_BAR_BOX + 5)
	
	#define	IDC_TABBAR_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 6)
	#define	IDC_CHECK_REDUCE (IDD_PREFERENCE_BAR_BOX + 7)
	#define	IDC_CHECK_LOCK (IDD_PREFERENCE_BAR_BOX + 8)
	#define	IDC_CHECK_DRAWINACTIVE (IDD_PREFERENCE_BAR_BOX + 9)
	#define	IDC_CHECK_ORANGE (IDD_PREFERENCE_BAR_BOX + 10)
	#define	IDC_CHECK_SHOWSTATUSBAR (IDD_PREFERENCE_BAR_BOX + 11)
	#define	IDC_CHECK_ENABLETABCLOSE (IDD_PREFERENCE_BAR_BOX + 12)
	#define	IDC_CHECK_DBCLICK2CLOSE (IDD_PREFERENCE_BAR_BOX + 13)
	#define	IDC_CHECK_ENABLEDOCSWITCHER (IDD_PREFERENCE_BAR_BOX + 14)
	#define	IDC_CHECK_MAINTAININDENT (IDD_PREFERENCE_BAR_BOX + 15)
	#define	IDC_CHECK_KEEPINSAMEDIR (IDD_PREFERENCE_BAR_BOX + 16)
	#define	IDC_CHECK_STYLEMRU (IDD_PREFERENCE_BAR_BOX + 17)
	#define	IDC_CHECK_TAB_HIDE (IDD_PREFERENCE_BAR_BOX + 18)
	#define	IDC_CHECK_TAB_MULTILINE (IDD_PREFERENCE_BAR_BOX + 19)
	#define	IDC_CHECK_TAB_VERTICAL (IDD_PREFERENCE_BAR_BOX + 20)
	#define	IDC_CHECK_TAB_LAST_EXIT (IDD_PREFERENCE_BAR_BOX + 21)
	#define	IDC_CHECK_HIDEMENUBAR (IDD_PREFERENCE_BAR_BOX + 22)
	#define	IDC_LOCALIZATION_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 23)
	#define	IDC_COMBO_LOCALIZATION (IDD_PREFERENCE_BAR_BOX + 24)
	#define	IDC_DOCSWITCH_GB_STATIC (IDD_PREFERENCE_BAR_BOX + 25)
	#define	IDC_CHECK_DOCSWITCH (IDD_PREFERENCE_BAR_BOX + 26)
	#define	IDC_CHECK_DOCSWITCH_NOEXTCOLUMN (IDD_PREFERENCE_BAR_BOX + 27)

#define	IDD_PREFERENCE_MULTIINSTANCE_BOX 6150 //(IDD_PREFERENCE_BOX + 150)
	#define	IDC_MULTIINST_GB_STATIC (IDD_PREFERENCE_MULTIINSTANCE_BOX + 1)
	#define	IDC_SESSIONININST_RADIO (IDD_PREFERENCE_MULTIINSTANCE_BOX + 2)
	#define	IDC_MULTIINST_RADIO (IDD_PREFERENCE_MULTIINSTANCE_BOX + 3)
	#define	IDC_MONOINST_RADIO (IDD_PREFERENCE_MULTIINSTANCE_BOX + 4)
	#define	IDD_STATIC_RESTARTNOTE (IDD_PREFERENCE_MULTIINSTANCE_BOX + 5)

#define	IDD_PREFERENCE_WORDCHARLIST_BOX 6160 //(IDD_PREFERENCE_BOX + 150)
	#define	IDC_WORDCHARLIST_GB_STATIC (IDD_PREFERENCE_WORDCHARLIST_BOX + 1)
	#define	IDC_RADIO_WORDCHAR_DEFAULT (IDD_PREFERENCE_WORDCHARLIST_BOX + 2)
	#define	IDC_RADIO_WORDCHAR_CUSTOM (IDD_PREFERENCE_WORDCHARLIST_BOX + 3)
	#define	IDC_WORDCHAR_CUSTOM_EDIT (IDD_PREFERENCE_WORDCHARLIST_BOX + 4)
	#define	IDD_WORDCHAR_QUESTION_BUTTON (IDD_PREFERENCE_WORDCHARLIST_BOX + 5)
	#define	IDD_STATIC_WORDCHAR_WARNING (IDD_PREFERENCE_WORDCHARLIST_BOX + 6)

#define	IDD_PREFERENCE_MARGEIN_BOX 6200 //(IDD_PREFERENCE_BOX + 200)
	#define	IDC_FMS_GB_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 1)
	#define	IDC_RADIO_SIMPLE (IDD_PREFERENCE_MARGEIN_BOX + 2)
	#define	IDC_RADIO_ARROW (IDD_PREFERENCE_MARGEIN_BOX + 3)
	#define	IDC_RADIO_CIRCLE (IDD_PREFERENCE_MARGEIN_BOX + 4)
	#define	IDC_RADIO_BOX (IDD_PREFERENCE_MARGEIN_BOX + 5)
	
	#define	IDC_CHECK_LINENUMBERMARGE (IDD_PREFERENCE_MARGEIN_BOX + 6)
	#define	IDC_CHECK_BOOKMARKMARGE (IDD_PREFERENCE_MARGEIN_BOX + 7)

	//#define	IDC_CHECK_SHOWVERTICALEDGE (IDD_PREFERENCE_MARGEIN_BOX + 8)
	//#define	IDC_NBCOLONE_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 9)
	//#define	IDC_COLONENUMBER_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 10)
	
	#define	IDC_VES_GB_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 11)
	//#define	IDC_RADIO_LNMODE (IDD_PREFERENCE_MARGEIN_BOX + 12)
	#define	IDC_CHECK_EDGEBGMODE (IDD_PREFERENCE_MARGEIN_BOX + 13)
	#define	IDC_CHECK_CURRENTLINEHILITE (IDD_PREFERENCE_MARGEIN_BOX + 14)
	#define	IDC_CHECK_SMOOTHFONT (IDD_PREFERENCE_MARGEIN_BOX + 15)
	
	#define	IDC_CARETSETTING_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 16)
	#define	IDC_WIDTH_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 17)
	#define	IDC_WIDTH_COMBO (IDD_PREFERENCE_MARGEIN_BOX + 18)
	#define	IDC_BLINKRATE_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 19)
	#define	IDC_CARETBLINKRATE_SLIDER (IDD_PREFERENCE_MARGEIN_BOX + 20)
	#define	IDC_CARETBLINKRATE_F_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 21)
	#define	IDC_CARETBLINKRATE_S_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 22)
	#define	IDC_CHECK_DOCCHANGESTATEMARGE (IDD_PREFERENCE_MARGEIN_BOX + 23)
	#define	IDC_MULTISELECTION_GB_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 24)
	#define	IDC_CHECK_MULTISELECTION (IDD_PREFERENCE_MARGEIN_BOX + 25)
	
	#define	IDC_RADIO_FOLDMARGENONE (IDD_PREFERENCE_MARGEIN_BOX + 26)
	
	#define	IDC_LW_GB_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 27)
	#define	IDC_RADIO_LWDEF (IDD_PREFERENCE_MARGEIN_BOX + 28)
	#define	IDC_RADIO_LWALIGN (IDD_PREFERENCE_MARGEIN_BOX + 29)
	#define	IDC_RADIO_LWINDENT (IDD_PREFERENCE_MARGEIN_BOX + 30)
	
	#define	IDC_BORDERWIDTH_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 31)
	#define	IDC_BORDERWIDTHVAL_STATIC (IDD_PREFERENCE_MARGEIN_BOX + 32)
	#define	IDC_BORDERWIDTH_SLIDER (IDD_PREFERENCE_MARGEIN_BOX + 33)
	#define	IDC_CHECK_DISABLEADVANCEDSCROLL (IDD_PREFERENCE_MARGEIN_BOX + 34)
	#define	IDC_CHECK_NOEDGE (IDD_PREFERENCE_MARGEIN_BOX + 35)
	#define	IDC_CHECK_SCROLLBEYONDLASTLINE (IDD_PREFERENCE_MARGEIN_BOX + 36)
    
	#define	IDC_STATIC_MULTILNMODE_TIP (IDD_PREFERENCE_MARGEIN_BOX + 37)
	#define	IDC_COLUMNPOS_EDIT (IDD_PREFERENCE_MARGEIN_BOX + 38)
	#define	IDC_CHECK_RIGHTCLICKKEEPSSELECTION (IDD_PREFERENCE_MARGEIN_BOX + 39)
	
#define	IDD_PREFERENCE_DELIMITERSETTINGS_BOX 6250 //(IDD_PREFERENCE_BOX + 250)
	#define	IDC_DELIMITERSETTINGS_GB_STATIC (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 1)
	#define	IDD_STATIC_OPENDELIMITER (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 2)
	#define	IDC_EDIT_OPENDELIMITER (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 3)
	#define	IDC_EDIT_CLOSEDELIMITER (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 4)
	#define	IDD_STATIC_CLOSEDELIMITER (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 5)
	#define	IDD_SEVERALLINEMODEON_CHECK (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 6)
	#define	IDD_STATIC_BLABLA (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 7)
	#define	IDD_STATIC_BLABLA2NDLINE (IDD_PREFERENCE_DELIMITERSETTINGS_BOX + 8)

#define	IDD_PREFERENCE_SETTINGSONCLOUD_BOX 6260 //(IDD_PREFERENCE_BOX + 250)
	#define	IDC_SETTINGSONCLOUD_WARNING_STATIC (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 1)
	#define	IDC_SETTINGSONCLOUD_GB_STATIC (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 2)
	#define	IDC_NOCLOUD_RADIO (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 3)
	//#define	IDC_DROPBOX_RADIO (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 4)
	//#define	IDC_ONEDRIVE_RADIO (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 5)
	//#define	IDC_GOOGLEDRIVE_RADIO (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 6)
	#define	IDC_WITHCLOUD_RADIO (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 7)
	#define	IDC_CLOUDPATH_EDIT (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 8)
	#define	IDD_CLOUDPATH_BROWSE_BUTTON (IDD_PREFERENCE_SETTINGSONCLOUD_BOX + 9)
	
#define	IDD_PREFERENCE_SEARCHENGINE_BOX 6270 //(IDD_PREFERENCE_BOX + 250)
	#define	IDC_SEARCHENGINES_GB_STATIC (IDD_PREFERENCE_SEARCHENGINE_BOX + 1)
	#define	IDC_SEARCHENGINE_DUCKDUCKGO_RADIO (IDD_PREFERENCE_SEARCHENGINE_BOX + 2)
	#define	IDC_SEARCHENGINE_GOOGLE_RADIO (IDD_PREFERENCE_SEARCHENGINE_BOX + 3)
	#define	IDC_SEARCHENGINE_BING_RADIO (IDD_PREFERENCE_SEARCHENGINE_BOX + 4)
	#define	IDC_SEARCHENGINE_YAHOO_RADIO (IDD_PREFERENCE_SEARCHENGINE_BOX + 5)
	#define	IDC_SEARCHENGINE_CUSTOM_RADIO (IDD_PREFERENCE_SEARCHENGINE_BOX + 6)
	#define	IDC_SEARCHENGINE_EDIT (IDD_PREFERENCE_SEARCHENGINE_BOX + 7)
	#define	IDD_SEARCHENGINE_NOTE_STATIC (IDD_PREFERENCE_SEARCHENGINE_BOX + 8)
	#define	IDC_SEARCHENGINE_STACKOVERFLOW_RADIO (IDD_PREFERENCE_SEARCHENGINE_BOX + 9)

#define	IDD_PREFERENCE_SETTING_BOX 6300 //(IDD_PREFERENCE_BOX + 300)
	#define	IDC_TABSETTING_GB_STATIC (IDD_PREFERENCE_SETTING_BOX + 1)
	#define	IDC_CHECK_REPLACEBYSPACE (IDD_PREFERENCE_SETTING_BOX + 2)
	#define	IDC_TABSIZE_STATIC (IDD_PREFERENCE_SETTING_BOX + 3)
	#define	IDC_HISTORY_GB_STATIC (IDD_PREFERENCE_SETTING_BOX + 4)
	#define	IDC_CHECK_DONTCHECKHISTORY (IDD_PREFERENCE_SETTING_BOX + 5)
	#define	IDC_MAXNBFILE_STATIC (IDD_PREFERENCE_SETTING_BOX + 6)
	#define	IDC_CHECK_MIN2SYSTRAY (IDD_PREFERENCE_SETTING_BOX + 8)
	#define	IDC_CHECK_REMEMBERSESSION (IDD_PREFERENCE_SETTING_BOX + 9)
	#define	IDC_TABSIZEVAL_STATIC (IDD_PREFERENCE_SETTING_BOX + 10)
	#define	IDC_MAXNBFILEVAL_STATIC (IDD_PREFERENCE_SETTING_BOX + 11)
	#define	IDC_FILEAUTODETECTION_STATIC (IDD_PREFERENCE_SETTING_BOX + 12)
	#define	IDC_CHECK_UPDATESILENTLY (IDD_PREFERENCE_SETTING_BOX + 13)
	#define	IDC_RADIO_BKNONE (IDD_PREFERENCE_SETTING_BOX + 15)
	#define	IDC_RADIO_BKSIMPLE (IDD_PREFERENCE_SETTING_BOX + 16)
	#define	IDC_RADIO_BKVERBOSE (IDD_PREFERENCE_SETTING_BOX + 17)
	#define	IDC_CLICKABLELINK_STATIC (IDD_PREFERENCE_SETTING_BOX + 18)
	#define	IDC_CHECK_CLICKABLELINK_ENABLE (IDD_PREFERENCE_SETTING_BOX + 19)
	#define	IDC_CHECK_CLICKABLELINK_NOUNDERLINE (IDD_PREFERENCE_SETTING_BOX + 20)
	#define	IDC_EDIT_SESSIONFILEEXT (IDD_PREFERENCE_SETTING_BOX + 21)
	#define	IDC_SESSIONFILEEXT_STATIC (IDD_PREFERENCE_SETTING_BOX + 22)
	#define	IDC_CHECK_AUTOUPDATE (IDD_PREFERENCE_SETTING_BOX + 23)
	#define	IDC_DOCUMENTSWITCHER_STATIC (IDD_PREFERENCE_SETTING_BOX + 24)
	#define	IDC_CHECK_UPDATEGOTOEOF (IDD_PREFERENCE_SETTING_BOX + 25)
	#define	IDC_CHECK_ENABLSMARTHILITE (IDD_PREFERENCE_SETTING_BOX + 26)
	#define	IDC_CHECK_ENABLTAGSMATCHHILITE (IDD_PREFERENCE_SETTING_BOX + 27)
	#define	IDC_CHECK_ENABLTAGATTRHILITE (IDD_PREFERENCE_SETTING_BOX + 28)
	#define	IDC_TAGMATCHEDHILITE_STATIC (IDD_PREFERENCE_SETTING_BOX + 29)
	#define	IDC_CHECK_HIGHLITENONEHTMLZONE (IDD_PREFERENCE_SETTING_BOX + 30)
	#define	IDC_CHECK_SHORTTITLE (IDD_PREFERENCE_SETTING_BOX + 31)
	#define IDC_CHECK_SMARTHILITECASESENSITIVE (IDD_PREFERENCE_SETTING_BOX + 32)
	#define IDC_SMARTHILITING_STATIC (IDD_PREFERENCE_SETTING_BOX + 33)
	#define	IDC_CHECK_DETECTENCODING (IDD_PREFERENCE_SETTING_BOX + 34)
	#define IDC_CHECK_BACKSLASHISESCAPECHARACTERFORSQL (IDD_PREFERENCE_SETTING_BOX + 35)
	#define	IDC_EDIT_WORKSPACEFILEEXT (IDD_PREFERENCE_SETTING_BOX + 36)
	#define	IDC_WORKSPACEFILEEXT_STATIC (IDD_PREFERENCE_SETTING_BOX + 37)
	#define IDC_CHECK_SMARTHILITEWHOLEWORDONLY (IDD_PREFERENCE_SETTING_BOX + 38)
	#define IDC_CHECK_SMARTHILITEUSEFINDSETTINGS (IDD_PREFERENCE_SETTING_BOX + 39)
	#define IDC_CHECK_SMARTHILITEANOTHERRVIEW (IDD_PREFERENCE_SETTING_BOX + 40)
	
    //-- xFileEditViewHistoryParameterGUI: Additional Checkbox for enabling the history for restoring the edit view per file.
	#define	IDC_CHECK_REMEMBEREDITVIEWPERFILE (IDD_PREFERENCE_SETTING_BOX + 41)
	#define	IDC_REMEMBEREDITVIEWPERFILE_STATIC (IDD_PREFERENCE_SETTING_BOX + 42)
	#define	IDC_EDIT_REMEMBEREDITVIEWPERFILE (IDD_PREFERENCE_SETTING_BOX + 43)
	
	#define	IDC_DOCUMENTPEEK_STATIC (IDD_PREFERENCE_SETTING_BOX + 44)
	#define	IDC_CHECK_ENABLEDOCPEEKER (IDD_PREFERENCE_SETTING_BOX + 45)
	#define	IDC_CHECK_ENABLEDOCPEEKONMAP (IDD_PREFERENCE_SETTING_BOX + 46)
	#define	IDC_COMBO_FILEUPDATECHOICE (IDD_PREFERENCE_SETTING_BOX + 47)
	#define	IDC_CHECK_DIRECTWRITE_ENABLE (IDD_PREFERENCE_SETTING_BOX + 49)
	
#define	IDD_PREFERENCE_NEWDOCSETTING_BOX 6400 //(IDD_PREFERENCE_BOX + 400)
	#define	IDC_FORMAT_GB_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 1)
	#define	IDC_RADIO_F_WIN (IDD_PREFERENCE_NEWDOCSETTING_BOX + 2)
	#define	IDC_RADIO_F_UNIX (IDD_PREFERENCE_NEWDOCSETTING_BOX + 3)
	#define	IDC_RADIO_F_MAC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 4)
	#define	IDC_ENCODING_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 5)
	#define	IDC_RADIO_ANSI (IDD_PREFERENCE_NEWDOCSETTING_BOX + 6)
	#define	IDC_RADIO_UTF8SANSBOM (IDD_PREFERENCE_NEWDOCSETTING_BOX + 7)
	#define	IDC_RADIO_UTF8 (IDD_PREFERENCE_NEWDOCSETTING_BOX + 8)
	#define	IDC_RADIO_UCS2BIG (IDD_PREFERENCE_NEWDOCSETTING_BOX + 9)
	#define	IDC_RADIO_UCS2SMALL (IDD_PREFERENCE_NEWDOCSETTING_BOX + 10)
	#define	IDC_DEFAULTLANG_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 11)
	#define	IDC_COMBO_DEFAULTLANG (IDD_PREFERENCE_NEWDOCSETTING_BOX + 12)
	#define	IDC_OPENSAVEDIR_GR_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 13)
	#define	IDC_OPENSAVEDIR_FOLLOWCURRENT_RADIO (IDD_PREFERENCE_NEWDOCSETTING_BOX + 14)
	#define	IDC_OPENSAVEDIR_REMEMBERLAST_RADIO (IDD_PREFERENCE_NEWDOCSETTING_BOX + 15)
	#define	IDC_OPENSAVEDIR_ALWAYSON_RADIO (IDD_PREFERENCE_NEWDOCSETTING_BOX + 16)
	#define	IDC_OPENSAVEDIR_ALWAYSON_EDIT (IDD_PREFERENCE_NEWDOCSETTING_BOX + 17)
	#define	IDD_OPENSAVEDIR_ALWAYSON_BROWSE_BUTTON (IDD_PREFERENCE_NEWDOCSETTING_BOX + 18)
	#define	IDC_NEWDOCUMENT_GR_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 19)
	#define	IDC_CHECK_OPENANSIASUTF8 (IDD_PREFERENCE_NEWDOCSETTING_BOX + 20)
	#define	IDC_RADIO_OTHERCP (IDD_PREFERENCE_NEWDOCSETTING_BOX + 21)
	#define	IDC_COMBO_OTHERCP (IDD_PREFERENCE_NEWDOCSETTING_BOX + 22)
	#define	IDC_GP_STATIC_RECENTFILES (IDD_PREFERENCE_NEWDOCSETTING_BOX + 23)
	#define	IDC_CHECK_INSUBMENU (IDD_PREFERENCE_NEWDOCSETTING_BOX + 24)
	#define	IDC_RADIO_ONLYFILENAME (IDD_PREFERENCE_NEWDOCSETTING_BOX + 25)
	#define	IDC_RADIO_FULLFILENAMEPATH (IDD_PREFERENCE_NEWDOCSETTING_BOX + 26)
	#define	IDC_RADIO_CUSTOMIZELENTH (IDD_PREFERENCE_NEWDOCSETTING_BOX + 27)
	#define	IDC_CUSTOMIZELENGTHVAL_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 28)
	#define IDC_DISPLAY_STATIC (IDD_PREFERENCE_NEWDOCSETTING_BOX + 29)
	#define IDC_OPENSAVEDIR_CHECK_USENEWSTYLESAVEDIALOG (IDD_PREFERENCE_NEWDOCSETTING_BOX + 30)
	#define IDC_OPENSAVEDIR_CHECK_DRROPFOLDEROPENFILES (IDD_PREFERENCE_NEWDOCSETTING_BOX + 31)
	
#define	IDD_PREFERENCE_DEFAULTDIRECTORY_BOX 6450 //(IDD_PREFERENCE_BOX + 400)
#define	IDD_PREFERENCE_RECENTFILESHISTORY_BOX 6460 //(IDD_PREFERENCE_BOX + 400)
	
#define	IDD_PREFERENCE_LANG_BOX 6500 //(IDD_PREFERENCE_BOX + 500)
	#define	IDC_LIST_ENABLEDLANG (IDD_PREFERENCE_LANG_BOX + 1)
	#define	IDC_LIST_DISABLEDLANG (IDD_PREFERENCE_LANG_BOX + 2)
	#define	IDC_BUTTON_REMOVE (IDD_PREFERENCE_LANG_BOX + 3)
	#define	IDC_BUTTON_RESTORE (IDD_PREFERENCE_LANG_BOX + 4)
	#define	IDC_ENABLEDITEMS_STATIC (IDD_PREFERENCE_LANG_BOX + 5)
	#define	IDC_DISABLEDITEMS_STATIC (IDD_PREFERENCE_LANG_BOX + 6)
	#define	IDC_CHECK_LANGMENUCOMPACT (IDD_PREFERENCE_LANG_BOX + 7)
	#define	IDC_CHECK_LANGMENU_GR_STATIC (IDD_PREFERENCE_LANG_BOX + 8)
	#define	IDC_LIST_TABSETTNG (IDD_PREFERENCE_LANG_BOX + 9)
	#define	IDC_CHECK_DEFAULTTABVALUE (IDD_PREFERENCE_LANG_BOX + 10)
	#define	IDC_GR_TABVALUE_STATIC (IDD_PREFERENCE_LANG_BOX + 11)
	#define	IDC_TABSIZEVAL_DISABLE_STATIC (IDD_PREFERENCE_LANG_BOX + 12)
#define	IDD_PREFERENCE_HILITE_BOX 6550 //(IDD_PREFERENCE_BOX + 500)

#define	IDD_PREFERENCE_PRINT_BOX 6600 //(IDD_PREFERENCE_BOX + 600)
	#define	IDC_CHECK_PRINTLINENUM	(IDD_PREFERENCE_PRINT_BOX + 1)
	#define	IDC_COLOUROPT_STATIC	(IDD_PREFERENCE_PRINT_BOX + 2)
	#define	IDC_RADIO_WYSIWYG		(IDD_PREFERENCE_PRINT_BOX + 3)
	#define	IDC_RADIO_INVERT		(IDD_PREFERENCE_PRINT_BOX + 4)
	#define	IDC_RADIO_BW			(IDD_PREFERENCE_PRINT_BOX + 5)
	#define	IDC_RADIO_NOBG			(IDD_PREFERENCE_PRINT_BOX + 6)
	#define IDC_MARGESETTINGS_STATIC  (IDD_PREFERENCE_PRINT_BOX + 7)
	#define IDC_EDIT_ML               (IDD_PREFERENCE_PRINT_BOX + 8)
	#define IDC_EDIT_MT               (IDD_PREFERENCE_PRINT_BOX + 9)
	#define IDC_EDIT_MR               (IDD_PREFERENCE_PRINT_BOX + 10)
	#define IDC_EDIT_MB               (IDD_PREFERENCE_PRINT_BOX + 11)
	#define IDC_ML_STATIC             (IDD_PREFERENCE_PRINT_BOX + 12)
	#define IDC_MT_STATIC             (IDD_PREFERENCE_PRINT_BOX + 13)
	#define IDC_MR_STATIC             (IDD_PREFERENCE_PRINT_BOX + 14)
	#define IDC_MB_STATIC             (IDD_PREFERENCE_PRINT_BOX + 15)
	
#define	IDD_PREFERENCE_PRINT2_BOX 6700 //(IDD_PREFERENCE_BOX + 700)
	#define	IDC_EDIT_HLEFT		(IDD_PREFERENCE_PRINT2_BOX + 1)
	#define	IDC_EDIT_HMIDDLE		(IDD_PREFERENCE_PRINT2_BOX + 2)
	#define	IDC_EDIT_HRIGHT		(IDD_PREFERENCE_PRINT2_BOX + 3)
	#define	IDC_COMBO_HFONTNAME	(IDD_PREFERENCE_PRINT2_BOX + 4)
	#define	IDC_COMBO_HFONTSIZE	(IDD_PREFERENCE_PRINT2_BOX + 5)
	#define	IDC_CHECK_HBOLD	(IDD_PREFERENCE_PRINT2_BOX + 6)
	#define	IDC_CHECK_HITALIC (IDD_PREFERENCE_PRINT2_BOX + 7)
	#define	IDC_HGB_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 8)
	#define	IDC_HL_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 9)
	#define	IDC_HM_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 10)
	#define	IDC_HR_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 11)
	#define	IDC_EDIT_FLEFT	(IDD_PREFERENCE_PRINT2_BOX + 12)
	#define	IDC_EDIT_FMIDDLE	(IDD_PREFERENCE_PRINT2_BOX + 13)
	#define	IDC_EDIT_FRIGHT	(IDD_PREFERENCE_PRINT2_BOX + 14)
	#define	IDC_COMBO_FFONTNAME	(IDD_PREFERENCE_PRINT2_BOX + 15)
	#define	IDC_COMBO_FFONTSIZE	(IDD_PREFERENCE_PRINT2_BOX + 16)
	#define	IDC_CHECK_FBOLD	(IDD_PREFERENCE_PRINT2_BOX + 17)
	#define	IDC_CHECK_FITALIC	(IDD_PREFERENCE_PRINT2_BOX + 18)
	#define	IDC_FGB_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 19)
	#define	IDC_FL_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 20)
	#define	IDC_FM_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 21)
	#define	IDC_FR_STATIC	(IDD_PREFERENCE_PRINT2_BOX + 22)
	#define IDC_BUTTON_ADDVAR  (IDD_PREFERENCE_PRINT2_BOX + 23)
	#define IDC_COMBO_VARLIST  (IDD_PREFERENCE_PRINT2_BOX + 24)
	#define IDC_VAR_STATIC    (IDD_PREFERENCE_PRINT2_BOX + 25)
	#define IDC_VIEWPANEL_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 26)
	#define IDC_WHICHPART_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 27)
	#define IDC_HEADERFPPTER_GR_STATIC  (IDD_PREFERENCE_PRINT2_BOX + 28)


#define	IDD_PREFERENCE_BACKUP_BOX 6800 //(IDD_PREFERENCE_BOX + 800)
	#define IDC_BACKUPDIR_GRP_STATIC  (IDD_PREFERENCE_BACKUP_BOX + 1)
	#define IDC_BACKUPDIR_CHECK  (IDD_PREFERENCE_BACKUP_BOX + 2)
	#define IDD_BACKUPDIR_STATIC  (IDD_PREFERENCE_BACKUP_BOX + 3)
	#define IDC_BACKUPDIR_USERCUSTOMDIR_GRPSTATIC  (IDD_PREFERENCE_BACKUP_BOX + 4)
	#define IDC_BACKUPDIR_EDIT  (IDD_PREFERENCE_BACKUP_BOX + 5)
	#define IDD_BACKUPDIR_BROWSE_BUTTON  (IDD_PREFERENCE_BACKUP_BOX + 6)
	#define IDD_AUTOC_GRPSTATIC  (IDD_PREFERENCE_BACKUP_BOX + 7)
	#define IDD_AUTOC_ENABLECHECK  (IDD_PREFERENCE_BACKUP_BOX + 8)
	#define IDD_AUTOC_FUNCRADIO  (IDD_PREFERENCE_BACKUP_BOX + 9)
	#define IDD_AUTOC_WORDRADIO  (IDD_PREFERENCE_BACKUP_BOX + 10)
	#define IDD_AUTOC_STATIC_FROM  (IDD_PREFERENCE_BACKUP_BOX + 11)
	#define IDD_AUTOC_STATIC_N  (IDD_PREFERENCE_BACKUP_BOX + 12)
	#define IDD_AUTOC_STATIC_CHAR  (IDD_PREFERENCE_BACKUP_BOX + 13)
	#define IDD_AUTOC_STATIC_NOTE  (IDD_PREFERENCE_BACKUP_BOX + 14)
	#define IDD_FUNC_CHECK         (IDD_PREFERENCE_BACKUP_BOX + 15)
	#define IDD_AUTOC_BOTHRADIO  (IDD_PREFERENCE_BACKUP_BOX + 16)
	#define IDC_BACKUPDIR_RESTORESESSION_GRP_STATIC  (IDD_PREFERENCE_BACKUP_BOX + 17)
	#define IDC_BACKUPDIR_RESTORESESSION_CHECK  (IDD_PREFERENCE_BACKUP_BOX + 18)
	#define IDD_BACKUPDIR_RESTORESESSION_STATIC1  (IDD_PREFERENCE_BACKUP_BOX + 19)
	#define IDC_BACKUPDIR_RESTORESESSION_EDIT  (IDD_PREFERENCE_BACKUP_BOX + 20)
	#define IDD_BACKUPDIR_RESTORESESSION_STATIC2  (IDD_PREFERENCE_BACKUP_BOX + 21)
	#define IDD_BACKUPDIR_RESTORESESSION_PATHLABEL_STATIC  (IDD_PREFERENCE_BACKUP_BOX + 22)
	#define IDD_BACKUPDIR_RESTORESESSION_PATH_EDIT  (IDD_PREFERENCE_BACKUP_BOX + 23)
	#define IDD_AUTOC_IGNORENUMBERS  (IDD_PREFERENCE_BACKUP_BOX + 24)

#define	IDD_PREFERENCE_AUTOCOMPLETION_BOX 6850 //(IDD_PREFERENCE_BOX + 850)
	#define IDD_AUTOCINSERT_GRPSTATIC (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 1)
	#define IDD_AUTOCPARENTHESES_CHECK (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 2)
	#define IDD_AUTOCBRACKET_CHECK (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 3)
	#define IDD_AUTOCCURLYBRACKET_CHECK (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 4)
	#define IDD_AUTOC_DOUBLEQUOTESCHECK (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 5)
	#define IDD_AUTOC_QUOTESCHECK (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 6)
	#define IDD_AUTOCTAG_CHECK (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 7)
	#define IDC_MACHEDPAIROPEN_STATIC (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 8)
	#define IDC_MACHEDPAIRCLOSE_STATIC (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 9)
	#define IDC_MACHEDPAIR_STATIC1 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 10)
	#define IDC_MACHEDPAIROPEN_EDIT1 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 11)
	#define IDC_MACHEDPAIRCLOSE_EDIT1 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 12)
	#define IDC_MACHEDPAIR_STATIC2 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 13)
	#define IDC_MACHEDPAIROPEN_EDIT2 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 14)
	#define IDC_MACHEDPAIRCLOSE_EDIT2 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 15)
	#define IDC_MACHEDPAIR_STATIC3 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 16)
	#define IDC_MACHEDPAIROPEN_EDIT3 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 17)
	#define IDC_MACHEDPAIRCLOSE_EDIT3 (IDD_PREFERENCE_AUTOCOMPLETION_BOX + 18)

#define IDD_PREFERENCE_SEARCHINGSETTINGS_BOX 6900 //(IDD_PREFERENCE_BOX + 900)
	#define IDC_CHECK_STOPFILLINGFINDFIELD (IDD_PREFERENCE_SEARCHINGSETTINGS_BOX + 1)
	#define IDC_CHECK_MONOSPACEDFONT_FINDDLG (IDD_PREFERENCE_SEARCHINGSETTINGS_BOX + 2)

#endif //PREFERENCE_RC_H
