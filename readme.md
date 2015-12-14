# Face Motion Project

## Requirements
What I used during development.
- OpenCV 3.0
- DLib 18.18
- Julia 4.1

You can use my docker image to build a complete envirolment:
https://github.com/tibaes/golden-heart.git

## Modules

### Landmarks
Integração das landmarks da dlib com a plataforma julia
Algoritmo de landmarks em CVPR2014

### Tracking
Estimativa de pose e rastreamento das landmarks
Algoritmo em EPFL Attention Tracker - estão escrevendo um paper para o HRI2016

### Frontalization
A partir da matriz de transformação da estimativa de pose, realizar a frontalização da face.
Talvez utilizando uma biblioteca tambem baseada na dlib (CVPR2015)

### Hollistic Trainning
Extração e treinamento (SVM) das características de movimento das landmarks.
Candidatos: os caminhos relativos das landmarks, flow strain (HOG sobre fluxo), HOG + HOOF (histograma de fluxo)

### Action Units Trainning
Dado que a etapa o treinamento holistico utiliza todas as landmarks, nesta etapa as landmarks devem ser organizadas de acordo com as Action Units.

