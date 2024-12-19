#ifndef INTERCAMBIODATA_H
#define INTERCAMBIODATA_H

#include <string>
#include <vector>
#include "intercambio.h"

class IntercambioData {
public:
    // Constructor
    IntercambioData(const std::string& archivo);

    // Métodos
    std::vector<Intercambio> cargarIntercambios();
    void guardarIntercambios(const std::vector<Intercambio>& intercambios);

private:
    std::string archivoIntercambios; // Ruta del archivo
};

#endif // INTERCAMBIODATA_H
