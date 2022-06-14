#include <QApplication>
#include <QWidget>

int main( int argc, char *argv[] )
{
    QApplication app( argc, argv );

    QWidget window; // must be add widgets module in .pro file that is made by qmake

    window.resize( 250, 150 );
    window.setWindowTitle( "Simple example" );
    window.show();

    return app.exec();
}