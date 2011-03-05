/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: AstroProgressData.cpp
	Last generated: Sat Nov 6 16:01:24 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#include <qpixmap.h>
#include <qlayout.h>
#include "AstroProgressData.h"

#define Inherited QDialog

#include <qlabel.h>
#include <qpushbt.h>
#include <qradiobt.h>

AstroProgressData::AstroProgressData
(
	QWidget* parent,
	const char* name
)
	:
	Inherited( parent, name, TRUE, 0 )
{
	ProgSet = new QButtonGroup( this, "ButtonGroup_1" );
	ProgSet->setGeometry( 10, 130, 220, 90 );
	ProgSet->setMinimumSize( 0, 0 );
	ProgSet->setMaximumSize( 32767, 32767 );
	connect( ProgSet, SIGNAL(clicked(int)), SLOT(progsetslot(int)) );
	ProgSet->setFocusPolicy( QWidget::NoFocus );
	ProgSet->setBackgroundMode( QWidget::PaletteBackground );
	ProgSet->setFontPropagation( QWidget::NoChildren );
	ProgSet->setPalettePropagation( QWidget::NoChildren );
	ProgSet->setFrameStyle( 49 );
	ProgSet->setTitle( transl("Progression settings") );
	ProgSet->setAlignment( 1 );

	DoProg = new QCheckBox( this, "CheckBox_1" );
	DoProg->setGeometry( 10, 10, 140, 20 );
	DoProg->setMinimumSize( 0, 0 );
	DoProg->setMaximumSize( 32767, 32767 );
	DoProg->setFocusPolicy( QWidget::TabFocus );
	DoProg->setBackgroundMode( QWidget::PaletteBackground );
	DoProg->setFontPropagation( QWidget::NoChildren );
	DoProg->setPalettePropagation( QWidget::NoChildren );
	DoProg->setText( transl("Do progression") );
	DoProg->setAutoRepeat( FALSE );
	DoProg->setAutoResize( FALSE );

	QLabel* qtarch_Label_1;
	qtarch_Label_1 = new QLabel( this, "Label_1" );
	qtarch_Label_1->setGeometry( 10, 40, 70, 20 );
	qtarch_Label_1->setMinimumSize( 0, 0 );
	qtarch_Label_1->setMaximumSize( 32767, 32767 );
	qtarch_Label_1->setFocusPolicy( QWidget::NoFocus );
	qtarch_Label_1->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_Label_1->setFontPropagation( QWidget::NoChildren );
	qtarch_Label_1->setPalettePropagation( QWidget::NoChildren );
	qtarch_Label_1->setText( transl("Month") );
	qtarch_Label_1->setAlignment( 289 );
	qtarch_Label_1->setMargin( -1 );

	QLabel* qtarch_Label_2;
	qtarch_Label_2 = new QLabel( this, "Label_2" );
	qtarch_Label_2->setGeometry( 10, 60, 70, 20 );
	qtarch_Label_2->setMinimumSize( 0, 0 );
	qtarch_Label_2->setMaximumSize( 32767, 32767 );
	qtarch_Label_2->setFocusPolicy( QWidget::NoFocus );
	qtarch_Label_2->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_Label_2->setFontPropagation( QWidget::NoChildren );
	qtarch_Label_2->setPalettePropagation( QWidget::NoChildren );
	qtarch_Label_2->setText( transl("Day") );
	qtarch_Label_2->setAlignment( 289 );
	qtarch_Label_2->setMargin( -1 );

	QLabel* qtarch_Label_3;
	qtarch_Label_3 = new QLabel( this, "Label_3" );
	qtarch_Label_3->setGeometry( 10, 80, 70, 20 );
	qtarch_Label_3->setMinimumSize( 0, 0 );
	qtarch_Label_3->setMaximumSize( 32767, 32767 );
	qtarch_Label_3->setFocusPolicy( QWidget::NoFocus );
	qtarch_Label_3->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_Label_3->setFontPropagation( QWidget::NoChildren );
	qtarch_Label_3->setPalettePropagation( QWidget::NoChildren );
	qtarch_Label_3->setText( transl("Year") );
	qtarch_Label_3->setAlignment( 289 );
	qtarch_Label_3->setMargin( -1 );

	QLabel* qtarch_Label_4;
	qtarch_Label_4 = new QLabel( this, "Label_4" );
	qtarch_Label_4->setGeometry( 10, 100, 70, 20 );
	qtarch_Label_4->setMinimumSize( 0, 0 );
	qtarch_Label_4->setMaximumSize( 32767, 32767 );
	qtarch_Label_4->setFocusPolicy( QWidget::NoFocus );
	qtarch_Label_4->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_Label_4->setFontPropagation( QWidget::NoChildren );
	qtarch_Label_4->setPalettePropagation( QWidget::NoChildren );
	qtarch_Label_4->setText( transl("Time") );
	qtarch_Label_4->setAlignment( 289 );
	qtarch_Label_4->setMargin( -1 );

	Month = new QComboBox( FALSE, this, "ComboBox_2" );
	Month->setGeometry( 80, 40, 100, 20 );
	Month->setMinimumSize( 0, 0 );
	Month->setMaximumSize( 32767, 32767 );
	Month->setFocusPolicy( QWidget::StrongFocus );
	Month->setBackgroundMode( QWidget::PaletteBackground );
	Month->setFontPropagation( QWidget::AllChildren );
	Month->setPalettePropagation( QWidget::AllChildren );
	Month->setSizeLimit( 10 );
	Month->setAutoResize( FALSE );

	TheDay = new myLineEdit( this, "LineEdit_2" );
	TheDay->setGeometry( 80, 60, 100, 20 );
	TheDay->setMinimumSize( 0, 0 );
	TheDay->setMaximumSize( 32767, 32767 );
	connect( TheDay, SIGNAL(returnPressed()), SLOT(dayslot()) );
	TheDay->setFocusPolicy( QWidget::StrongFocus );
	TheDay->setBackgroundMode( QWidget::PaletteBase );
	TheDay->setFontPropagation( QWidget::NoChildren );
	TheDay->setPalettePropagation( QWidget::NoChildren );
	TheDay->setText( "" );
	TheDay->setMaxLength( 32767 );
	TheDay->setEchoMode( myLineEdit::Normal );
	TheDay->setFrame( TRUE );

	Year = new myLineEdit( this, "LineEdit_3" );
	Year->setGeometry( 80, 80, 100, 20 );
	Year->setMinimumSize( 0, 0 );
	Year->setMaximumSize( 32767, 32767 );
	connect( Year, SIGNAL(returnPressed()), SLOT(yearslot()) );
	Year->setFocusPolicy( QWidget::StrongFocus );
	Year->setBackgroundMode( QWidget::PaletteBase );
	Year->setFontPropagation( QWidget::NoChildren );
	Year->setPalettePropagation( QWidget::NoChildren );
	Year->setText( "" );
	Year->setMaxLength( 32767 );
	Year->setEchoMode( myLineEdit::Normal );
	Year->setFrame( TRUE );

	Time = new myLineEdit( this, "LineEdit_4" );
	Time->setGeometry( 80, 100, 100, 20 );
	Time->setMinimumSize( 0, 0 );
	Time->setMaximumSize( 32767, 32767 );
	connect( Time, SIGNAL(returnPressed()), SLOT(timeslot()) );
	Time->setFocusPolicy( QWidget::StrongFocus );
	Time->setBackgroundMode( QWidget::PaletteBase );
	Time->setFontPropagation( QWidget::NoChildren );
	Time->setPalettePropagation( QWidget::NoChildren );
	Time->setText( "" );
	Time->setMaxLength( 32767 );
	Time->setEchoMode( myLineEdit::Normal );
	Time->setFrame( TRUE );

	QRadioButton* qtarch_RadioButton_1;
	qtarch_RadioButton_1 = new QRadioButton( this, "RadioButton_1" );
	qtarch_RadioButton_1->setGeometry( 20, 150, 180, 20 );
	qtarch_RadioButton_1->setMinimumSize( 0, 0 );
	qtarch_RadioButton_1->setMaximumSize( 32767, 32767 );
	qtarch_RadioButton_1->setFocusPolicy( QWidget::TabFocus );
	qtarch_RadioButton_1->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_RadioButton_1->setFontPropagation( QWidget::NoChildren );
	qtarch_RadioButton_1->setPalettePropagation( QWidget::NoChildren );
	qtarch_RadioButton_1->setText( transl("Secondary progression") );
	qtarch_RadioButton_1->setAutoRepeat( FALSE );
	qtarch_RadioButton_1->setAutoResize( FALSE );

	QRadioButton* qtarch_RadioButton_2;
	qtarch_RadioButton_2 = new QRadioButton( this, "RadioButton_2" );
	qtarch_RadioButton_2->setGeometry( 20, 170, 180, 20 );
	qtarch_RadioButton_2->setMinimumSize( 0, 0 );
	qtarch_RadioButton_2->setMaximumSize( 32767, 32767 );
	qtarch_RadioButton_2->setFocusPolicy( QWidget::TabFocus );
	qtarch_RadioButton_2->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_RadioButton_2->setFontPropagation( QWidget::NoChildren );
	qtarch_RadioButton_2->setPalettePropagation( QWidget::NoChildren );
	qtarch_RadioButton_2->setText( transl("Solar arc progression") );
	qtarch_RadioButton_2->setAutoRepeat( FALSE );
	qtarch_RadioButton_2->setAutoResize( FALSE );

	QLabel* qtarch_Label_5;
	qtarch_Label_5 = new QLabel( this, "Label_5" );
	qtarch_Label_5->setGeometry( 20, 190, 110, 20 );
	qtarch_Label_5->setMinimumSize( 0, 0 );
	qtarch_Label_5->setMaximumSize( 32767, 32767 );
	qtarch_Label_5->setFocusPolicy( QWidget::NoFocus );
	qtarch_Label_5->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_Label_5->setFontPropagation( QWidget::NoChildren );
	qtarch_Label_5->setPalettePropagation( QWidget::NoChildren );
	qtarch_Label_5->setText( transl("Degrees per day") );
	qtarch_Label_5->setAlignment( 289 );
	qtarch_Label_5->setMargin( -1 );

	DegPerDay = new QComboBox( FALSE, this, "ComboBox_3" );
	DegPerDay->setGeometry( 130, 190, 90, 20 );
	DegPerDay->setMinimumSize( 0, 0 );
	DegPerDay->setMaximumSize( 32767, 32767 );
	connect( DegPerDay, SIGNAL(highlighted(int)), SLOT(degperdayslot(int)) );
	DegPerDay->setFocusPolicy( QWidget::StrongFocus );
	DegPerDay->setBackgroundMode( QWidget::PaletteBackground );
	DegPerDay->setFontPropagation( QWidget::AllChildren );
	DegPerDay->setPalettePropagation( QWidget::AllChildren );
	DegPerDay->setSizeLimit( 3 );
	DegPerDay->setAutoResize( FALSE );
	DegPerDay->insertItem( "365.25" );
	DegPerDay->insertItem( "27.321661" );
	DegPerDay->insertItem( "29.530588" );

	QPushButton* qtarch_PushButton_1;
	qtarch_PushButton_1 = new QPushButton( this, "PushButton_1" );
	qtarch_PushButton_1->setGeometry( 190, 10, 100, 30 );
	qtarch_PushButton_1->setMinimumSize( 0, 0 );
	qtarch_PushButton_1->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_1, SIGNAL(clicked()), SLOT(nowslot()) );
	qtarch_PushButton_1->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_1->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_1->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_1->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_1->setText( transl("Now") );
	qtarch_PushButton_1->setAutoRepeat( FALSE );
	qtarch_PushButton_1->setAutoResize( FALSE );

	QPushButton* qtarch_PushButton_2;
	qtarch_PushButton_2 = new QPushButton( this, "PushButton_2" );
	qtarch_PushButton_2->setGeometry( 190, 50, 100, 30 );
	qtarch_PushButton_2->setMinimumSize( 0, 0 );
	qtarch_PushButton_2->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_2, SIGNAL(clicked()), SLOT(cancelslot()) );
	qtarch_PushButton_2->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_2->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_2->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_2->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_2->setText( transl("Cancel") );
	qtarch_PushButton_2->setAutoRepeat( FALSE );
	qtarch_PushButton_2->setAutoResize( FALSE );

	QPushButton* qtarch_PushButton_3;
	qtarch_PushButton_3 = new QPushButton( this, "PushButton_3" );
	qtarch_PushButton_3->setGeometry( 190, 90, 100, 30 );
	qtarch_PushButton_3->setMinimumSize( 0, 0 );
	qtarch_PushButton_3->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_3, SIGNAL(clicked()), SLOT(okslot()) );
	qtarch_PushButton_3->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_3->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_3->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_3->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_3->setText( transl("OK") );
	qtarch_PushButton_3->setAutoRepeat( FALSE );
	qtarch_PushButton_3->setAutoResize( FALSE );
	qtarch_PushButton_3->setAutoDefault( TRUE );

	ProgSet->insert( qtarch_RadioButton_1 );
	ProgSet->insert( qtarch_RadioButton_2 );

	resize( 300,230 );
	setMinimumSize( 0, 0 );
	setMaximumSize( 32767, 32767 );
}


AstroProgressData::~AstroProgressData()
{
}
void AstroProgressData::progsetslot(int)
{
}
void AstroProgressData::dayslot()
{
}
void AstroProgressData::yearslot()
{
}
void AstroProgressData::timeslot()
{
}
void AstroProgressData::degperdayslot(int)
{
}
void AstroProgressData::nowslot()
{
}
void AstroProgressData::cancelslot()
{
}
void AstroProgressData::okslot()
{
}