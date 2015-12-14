# Face Motion Project


## Requirements
What I used during development.
- OpenCV 3.0
- DLib 18.18
- Julia 4.1
You can use my docker image to build a complete envirolment:https://github.com/tibaes/golden-heart.git


## Milestones

#1: Integração das landmarks da dlib com a plataforma julia (em andamento, falta apenas plotar os resultados; algoritmo de landmarks em CVPR2014);
#2: Avaliação de biblioteca de estimativa de pose e rastreamento das landmarks (EPFL Attention Tracker - estão escrevendo um paper para o HRI2016)
#3: A partir da matriz de transformação da estimativa de pose, realizar a frontalização da face. Talvez utilizando uma biblioteca tambem baseada na dlib (CVPR2015)
#4: Extração e treinamento (SVM) das características de movimento das landmarks. Não defini exatamente as caracteristicas, mas vou testar algumas que pesquisei, como
os caminhos relativos das landmarks, flow strain (HOG sobre fluxo), HOG + HOOF (histograma de fluxo), ... algumas destas vou adaptar dos problemas de reconhecimento de ações.
#5: Dado que a etapa #4 utiliza todas as landmarks, nesta etapa as landmarks devem ser organizadas de acordo com as Action Units.

