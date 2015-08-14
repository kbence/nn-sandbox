#include <iostream>

class NeuralNet {
    int numInputs;
    int numOutputs;
    int numLayers;
    int layerWidth;

    int *inputWeights;
    int *outputWeights;
    int **layers;
public:
    NeuralNet(int inputs, int outputs, int hiddenLayers, int layerWidth):
        numInputs(inputs), numOutputs(outputs), numLayers(hiddenLayers), layerWidth(layerWidth)
    {
        inputWeights = new int[numInputs];
        outputWeights
    }

    ~NeuralNet() {
        delete[] inputs;
        delete[] outputWeights;

        for (int layer = 0; layer < numLayers; layer++) {
            delete[] layers[layer];
        }

        delete[] layers;
    }
};

int main() {
    return 0;
}
