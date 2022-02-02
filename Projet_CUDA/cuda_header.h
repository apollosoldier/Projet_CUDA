#pragma once

#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <string>


using namespace std;


class Analyzer
{
public:
    int taille(500);
    Analyzer(double Tn, double variabilite, int taille);

private:

protected:
    double tabeleau [taille];

    string variable1;
    string variable2;
    string variable3;

    void function_analyzer(int v, int d);
    void test_selection();
    string testd(string va, string le);
    float collection(float detecteur, float red);


    /**
     * Destructeur de l'objet Option
     */
    virtual ~Analyzer() {};
};