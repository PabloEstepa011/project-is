#ifndef PLANCONVALIDACIONDATA_H
#define PLANCONVALIDACIONDATA_H

#include <string>
#include <vector>
#include "business/planConvalidacion.h"

class PlanConvalidacionData {
public:
    // Constructor
    PlanConvalidacionData(const std::string& archivo);

    // Métodos
    std::vector<PlanConvalidacion> cargarPlanesConvalidacion();
    void guardarPlanesConvalidacion(const std::vector<PlanConvalidacion>& planesConvalidacion);

private:
    std::string archivoPlanesConvalidacion; // Ruta del archivo
};

#endif // PLANCONVALIDACIONDATA_H
