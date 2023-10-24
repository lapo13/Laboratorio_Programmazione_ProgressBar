//
// Created by Lapo Tinacci on 27/10/23.
//

#include "FileMover_Engine.h"

void FileMover::Move() {
    sourceFile.setFileName(sourcePath);
    sourceFile.copy(destinationPath);
    if (sourceFile.copy(destinationPath)) {
        // Il file è stato copiato con successo
        std::cout << "File copiato con successo" << std::endl;
    } else {
        // Gestisci errori di copia
    }
}