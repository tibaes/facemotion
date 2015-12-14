/* Library based on examples/face_landmark_detection_ex.cpp
 * cmake . -DUSE_AVX_INSTRUCTIONS=ON
 * http://fael.nl */

#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing.h>
#include <dlib/image_io.h>
#include <iostream>
#include "landmarks.hpp"

void getFacialLandmarks(const char * _modelPath, const char * _testPath) {
  std::string modelPath(_modelPath); // "shape_predictor_68_face_landmarks.dat";
  std::string testPath(_testPath);   // "test.jpg";

  try {
    // Load face detector
    dlib::frontal_face_detector detector = dlib::get_frontal_face_detector();

    // Load landmarks model
    dlib::shape_predictor sp;
    dlib::deserialize(modelPath) >> sp;

    // Load image from file and make it larger so we can detect small faces.
    dlib::array2d<dlib::rgb_pixel> img;
    dlib::load_image(img, testPath);
    dlib::pyramid_up(img);

    // Now tell the face detector to give us a list of bounding boxes
    // around all the faces in the image.
    std::vector<dlib::rectangle> dets = detector(img);
    std::cout << "Number of faces detected: " << dets.size() << std::endl;

    // Now we will go ask the shape_predictor to tell us the pose of
    // each face we detected.
    std::vector<dlib::full_object_detection> shapes;
    for (unsigned long j = 0; j < dets.size(); ++j) {
      dlib::full_object_detection shape = sp(img, dets[j]);
      std::cout << "number of parts: " << shape.num_parts() << std::endl;
      std::cout << "pixel position of first part:  " << shape.part(0) << std::endl;
      std::cout << "pixel position of second part: " << shape.part(1) << std::endl;
      // You get the idea, you can get all the face part locations if
      // you want them.  Here we just store them in shapes so we can
      // put them on the screen.
      shapes.push_back(shape);
    }
  } catch (std::exception& e) {
    std::cout << "\nexception thrown!" << std::endl;
    std::cout << e.what() << std::endl;
  }
}

