class Attys_scope;
#ifndef ATTYS_SCOPE_H
#define ATTYS_SCOPE_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>


class QTSignalSlotTest : public QWidget
{
	
	Q_OBJECT
public:
	QTSignalSlotTest( QWidget *parent);
	
	/**
	 * Text-field for the file-name
	 **/
	QPushButton* filePushButton;

private slots:
	/**
	 * Enter a new filename
	 **/
	void enterFileName();

};


#endif
