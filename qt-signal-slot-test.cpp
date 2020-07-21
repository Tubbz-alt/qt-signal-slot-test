#include <math.h>

#include<QHBoxLayout>
#include<QFileDialog>

#include "qt-signal-slot-test.h"


QTSignalSlotTest::QTSignalSlotTest(QWidget *parent
				   ) : QWidget( parent ) {
	
	QHBoxLayout* mainLayout = new QHBoxLayout;
	setLayout(mainLayout);

	filePushButton = new QPushButton( "filename" );
	connect(filePushButton, SIGNAL( clicked() ),
		this, SLOT( enterFileName() ) );
	mainLayout->addWidget(filePushButton);
}



void QTSignalSlotTest::enterFileName() {
	QString filters(tr("tab separated values (*.tsv);;"
			   "comma separated values (*.csv)"
				));

	QFileDialog dialog(this);
	dialog.setFileMode(QFileDialog::AnyFile);
	dialog.setNameFilter(filters);
	dialog.setViewMode(QFileDialog::Detail);
	dialog.setAcceptMode(QFileDialog::AcceptMode::AcceptSave);
	dialog.exec();
}



int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	QTSignalSlotTest st(0);

	// show widget
	st.show();
	// run event loop
	return a.exec();
}
