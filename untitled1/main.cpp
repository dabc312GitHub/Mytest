/******** Hola.cpp **********/

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel label( QString::fromUtf8("¡Hola Mundo!") );
    label.show();
    return app.exec();
}
