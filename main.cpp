#include <QApplication>
#include <QWidget>
#include <QProgressBar>
#include <QTimer>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("File Transfer App");

    QProgressBar progressBar(&window);
    progressBar.setRange(0, 100); // Imposta il valore massimo

    QTimer timer;
    int value = 0;
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        if (value <= 100) {
            progressBar.setValue(value);
            value++;

            // Simula il trasferimento di un file
            QString sourcePath = "/percorso/file_origine";
            QString destinationPath = "/percorso/file_destinazione";
            QFile sourceFile(sourcePath);
            if (sourceFile.copy(destinationPath)) {
                // Il file è stato copiato con successo
            } else {
                // Gestisci errori di copia
            }
        }
    });

    timer.start(100); // Aggiorna la barra di avanzamento ogni 100 ms

    window.show();
    return app.exec();
}
