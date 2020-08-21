/*
 * b01_makerML_hello_world.ino
 * simplifying TensorflowLite Micro Machine Learning for all makers
 * 
 * 
 * 
 * By Jeremy Ellis 
 * Twitter @rocksetta
 * Website https://rocksetta.com
 * created Aug 20th, 2020 
 * Github    https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7/tree/master/m09-Tensoflow
 *  
 *  
 *  Hashtags
 *  #TensorflowLiteMicro
 *  #TensorflowLiteForArduino
 *  #TinyMY
 *  #MakerML
 */



// By putting this model.h file here we can load everything as one file into the arduino IDER.
// Once it is working it is best to seperate this as a model.h file into it's own tabThis allows only one file for Arduino IDE, but you should seperate the following
// #include "model.h"  // uncomment when below has been put into it's own tab

/////////////////////////////////// cut and paste to model.h tab /////////////////////////////////////////////////////////////////



#pragma once

const unsigned char model_tflite[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x12, 0x00,
  0x1c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
  0x00, 0x00, 0x18, 0x00, 0x12, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xf4, 0x02, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xa8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x94, 0x0b, 0x00, 0x00,
  0x90, 0x0b, 0x00, 0x00, 0x1c, 0x09, 0x00, 0x00, 0x9c, 0x08, 0x00, 0x00,
  0x20, 0x05, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0x7c, 0x0b, 0x00, 0x00,
  0x78, 0x0b, 0x00, 0x00, 0x74, 0x0b, 0x00, 0x00, 0x70, 0x0b, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x42, 0xf7, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34,
  0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
  0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x88, 0x0a, 0x00, 0x00, 0x10, 0x0a, 0x00, 0x00,
  0xf4, 0x07, 0x00, 0x00, 0x94, 0x07, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00,
  0x1c, 0x02, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
  0x54, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xb0, 0x01, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x00, 0xf6, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0xe0, 0xf5, 0xff, 0xff, 0xde, 0xfe, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xf8, 0xf5, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x74, 0xf6, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0xe8, 0xf8, 0xff, 0xff, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x56, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, 0x00,
  0x08, 0xf7, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44,
  0x65, 0x6e, 0x73, 0x65, 0x31, 0x2f, 0x53, 0x69, 0x67, 0x6d, 0x6f, 0x69,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x64, 0x00, 0x00, 0x00, 0x7c, 0xf9, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x28, 0xf7, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0a, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x00,
  0xbc, 0xf7, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44,
  0x65, 0x6e, 0x73, 0x65, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x64, 0x00, 0x00, 0x00, 0xb4, 0xf7, 0xff, 0xff, 0x2a, 0xfa, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0xcf, 0x54, 0xff, 0x3e,
  0x1d, 0x39, 0xd3, 0x3e, 0x15, 0x21, 0x5a, 0xbc, 0x30, 0xfc, 0xd8, 0x3e,
  0x90, 0x30, 0xbf, 0xbe, 0x56, 0xc9, 0x72, 0x3e, 0x2a, 0x1f, 0xd1, 0x3e,
  0xd0, 0xa8, 0xdb, 0x3e, 0x3d, 0x8f, 0xb3, 0x3e, 0x73, 0x56, 0x79, 0x3e,
  0x57, 0x29, 0xdc, 0x3e, 0xe9, 0xc5, 0xf0, 0x3d, 0x44, 0xa2, 0x8f, 0x3e,
  0x6c, 0xfc, 0x8a, 0x3e, 0xa9, 0xb0, 0x97, 0xc0, 0x74, 0x14, 0x8c, 0x3e,
  0x28, 0xa9, 0x1a, 0x3f, 0x27, 0x93, 0xf0, 0x3e, 0xd7, 0x67, 0xcf, 0x3e,
  0x61, 0x9d, 0x91, 0xbf, 0x2d, 0xe8, 0x08, 0x3f, 0x1d, 0xf9, 0xab, 0x3e,
  0x3e, 0x6f, 0xee, 0x3e, 0xd6, 0x20, 0x76, 0x3e, 0xb5, 0x0c, 0x11, 0x3f,
  0xf6, 0x02, 0xfd, 0x3e, 0xf2, 0xf6, 0x3e, 0x3f, 0x5f, 0x67, 0x4e, 0x3e,
  0x73, 0x12, 0x9b, 0x3e, 0x43, 0x72, 0x67, 0x3e, 0x2b, 0x89, 0x14, 0xc0,
  0xf4, 0xc3, 0xc5, 0x3e, 0x27, 0x63, 0x8c, 0x3f, 0x0f, 0x43, 0xad, 0x3e,
  0x12, 0xb3, 0xb3, 0x3e, 0xdb, 0x55, 0xc2, 0x3f, 0x4e, 0x75, 0xbc, 0x3e,
  0x17, 0x55, 0x12, 0x3e, 0xa2, 0x40, 0xe3, 0x3e, 0x79, 0x60, 0xad, 0x3e,
  0x5f, 0x35, 0x04, 0xc0, 0x60, 0xe3, 0x20, 0x3f, 0x87, 0xfa, 0xbc, 0x3e,
  0x87, 0xa5, 0x8b, 0x3e, 0x13, 0xb8, 0x02, 0x3f, 0xa9, 0x6a, 0xfd, 0x3e,
  0xf8, 0x49, 0xdd, 0x3e, 0xd9, 0xa6, 0x18, 0x3f, 0x70, 0x4c, 0xdb, 0x3e,
  0x08, 0x4f, 0x69, 0x3e, 0x96, 0xe2, 0xc9, 0x3e, 0x34, 0x31, 0x7c, 0x3e,
  0x25, 0xd7, 0xd2, 0x3e, 0x34, 0xb3, 0x89, 0xbe, 0xe3, 0x71, 0xa1, 0x3e,
  0x03, 0x98, 0xe5, 0x3c, 0x8c, 0x4e, 0x78, 0xbd, 0x88, 0x5a, 0x0b, 0x3f,
  0xf2, 0xf7, 0x9f, 0x3e, 0x0d, 0x60, 0x39, 0xbd, 0xdf, 0xf5, 0x16, 0x3f,
  0xd5, 0xfa, 0xd6, 0x3e, 0xbc, 0x94, 0xdf, 0xbe, 0xe8, 0x66, 0x00, 0x3f,
  0x7f, 0x92, 0xe4, 0x3e, 0x58, 0x1f, 0x42, 0x3f, 0x96, 0x95, 0xc3, 0x3e,
  0x61, 0x30, 0xb0, 0x3e, 0x9f, 0x8f, 0x7f, 0x3e, 0x78, 0xca, 0x44, 0xbf,
  0x9e, 0x0b, 0x83, 0x3e, 0x8f, 0xaa, 0x9e, 0x3e, 0x46, 0xa9, 0x45, 0x3f,
  0x03, 0xa3, 0x3a, 0x3f, 0x81, 0x59, 0xe3, 0x3e, 0xf1, 0xa9, 0x07, 0x3f,
  0xfa, 0x8a, 0xa8, 0x3e, 0x72, 0xc7, 0xf3, 0x3e, 0x22, 0xd4, 0xc6, 0x3e,
  0x52, 0xf4, 0xc7, 0x3d, 0x5d, 0x61, 0x98, 0x3e, 0xe8, 0xf0, 0xb5, 0x3e,
  0x26, 0x36, 0x88, 0xbe, 0x45, 0x57, 0x51, 0xc0, 0x00, 0x8a, 0x84, 0x3e,
  0x2d, 0xad, 0x3c, 0x3e, 0x23, 0xca, 0x0f, 0x3f, 0xfd, 0x0d, 0x16, 0x3f,
  0xcc, 0xb9, 0xdc, 0x3d, 0xea, 0xbf, 0xc9, 0x3e, 0x9a, 0xb0, 0xac, 0x3e,
  0x58, 0xc5, 0x09, 0xbe, 0x71, 0x72, 0xfa, 0x3e, 0xd3, 0x20, 0xb6, 0x3e,
  0x79, 0x5c, 0xfd, 0xc0, 0x5c, 0x33, 0xfa, 0x3e, 0x41, 0x41, 0xfc, 0x3e,
  0xc8, 0x28, 0xb5, 0x3e, 0x5c, 0x2b, 0x26, 0x3f, 0x77, 0x71, 0x8b, 0x3f,
  0x22, 0xfa, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x9c, 0xf9, 0xff, 0xff, 0x12, 0xfc, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x20, 0x03, 0x00, 0x00, 0xc5, 0xf6, 0x77, 0xbe, 0x4c, 0x85, 0x35, 0xbf,
  0x54, 0x11, 0x20, 0xbf, 0xb7, 0xf4, 0x8e, 0xbe, 0xd5, 0xc5, 0x5b, 0xbe,
  0xed, 0xf0, 0x42, 0xbe, 0xf3, 0x42, 0x09, 0xbf, 0xb5, 0x69, 0xee, 0xbe,
  0x1a, 0x81, 0x86, 0xbf, 0xbb, 0x02, 0x87, 0xbf, 0x6f, 0x0c, 0x9f, 0xbe,
  0x29, 0x34, 0xca, 0xbe, 0x02, 0xc3, 0xb8, 0xbe, 0x75, 0x59, 0x04, 0xbf,
  0xaa, 0x57, 0x04, 0xbf, 0xe3, 0x27, 0xe2, 0xbe, 0x82, 0x9c, 0xc6, 0xbe,
  0x16, 0x98, 0xf3, 0xbe, 0x44, 0xb8, 0x04, 0xbf, 0x8f, 0xe4, 0x05, 0xbf,
  0xbe, 0xb3, 0xa6, 0xbe, 0xb1, 0xf9, 0x18, 0xbf, 0x82, 0x01, 0x9b, 0xbe,
  0x33, 0x9d, 0x87, 0xbe, 0x06, 0x7e, 0xab, 0xbe, 0x60, 0xcf, 0xeb, 0xbe,
  0x99, 0xf0, 0x95, 0xbe, 0xf4, 0xaf, 0xef, 0xbe, 0x26, 0x31, 0x7e, 0xc0,
  0xc2, 0x20, 0x7f, 0xc0, 0x3b, 0xe3, 0xab, 0xbe, 0x19, 0x4b, 0xd5, 0xbe,
  0x32, 0xe9, 0x3a, 0xbf, 0x5a, 0x15, 0x8c, 0xbe, 0x73, 0x85, 0x24, 0xbf,
  0x2d, 0xd4, 0x89, 0xbe, 0x31, 0x63, 0xcb, 0xbe, 0x44, 0xf4, 0xe8, 0xbe,
  0xff, 0x3d, 0xd0, 0xbf, 0x02, 0x98, 0xd1, 0xbf, 0xed, 0x21, 0x09, 0xbf,
  0xc2, 0x21, 0xe8, 0xbe, 0x2e, 0x1a, 0x02, 0xbf, 0x00, 0x53, 0x8a, 0xbe,
  0xd0, 0x05, 0xbe, 0xbe, 0x4d, 0xe2, 0x1c, 0xbf, 0x97, 0xc0, 0xa0, 0xbe,
  0xe3, 0x5e, 0xe8, 0xbe, 0xf3, 0xf5, 0x1a, 0xbf, 0xe7, 0xa9, 0xcf, 0xbe,
  0x91, 0xb1, 0x12, 0xbf, 0x3a, 0x8d, 0xc7, 0xbe, 0xae, 0xd3, 0x62, 0xbf,
  0xd4, 0x2d, 0x27, 0xbe, 0xff, 0x2f, 0xcf, 0xbe, 0xa8, 0x10, 0xda, 0xbe,
  0xaa, 0x43, 0x18, 0xbf, 0x29, 0xb1, 0xea, 0xbe, 0xf3, 0x45, 0xbb, 0xbe,
  0x26, 0xda, 0xae, 0xbe, 0x28, 0x05, 0x8c, 0x3f, 0x55, 0x48, 0x8d, 0x3f,
  0x82, 0xe1, 0x11, 0xbf, 0xaa, 0x75, 0xa3, 0xbe, 0xd8, 0x22, 0xaa, 0xbf,
  0x9f, 0x96, 0x34, 0x3e, 0x8d, 0xba, 0x03, 0xbf, 0x50, 0x68, 0x8b, 0xbe,
  0x0a, 0xed, 0x0b, 0xbf, 0x92, 0xf4, 0x94, 0xbe, 0x3a, 0xbf, 0x1d, 0x3f,
  0x4b, 0xa7, 0xeb, 0xbf, 0x61, 0x6e, 0x06, 0xbf, 0x70, 0xeb, 0x04, 0xbf,
  0x06, 0x25, 0xa6, 0xbe, 0x48, 0x6e, 0xa7, 0xbe, 0xe9, 0xcb, 0x01, 0xbf,
  0xfc, 0x42, 0xf8, 0xbe, 0xbb, 0xaa, 0x02, 0xbf, 0x36, 0xd8, 0xfd, 0xbe,
  0x12, 0xc3, 0x80, 0x3f, 0xd4, 0x43, 0x80, 0x3f, 0x58, 0xb7, 0x72, 0xbe,
  0xb0, 0x96, 0x42, 0xbf, 0xd3, 0x93, 0xbe, 0xbe, 0xc0, 0xdd, 0xfd, 0xbe,
  0x29, 0x0f, 0xd9, 0xbe, 0xa5, 0x23, 0xbe, 0xbe, 0x56, 0x17, 0xf2, 0xbd,
  0xca, 0x69, 0x48, 0xbf, 0x31, 0xd2, 0x24, 0xbf, 0x0c, 0x4f, 0xa6, 0xbe,
  0xbe, 0x73, 0xc4, 0xbe, 0x74, 0x93, 0x16, 0xbf, 0xe7, 0x3a, 0x1a, 0xbf,
  0x82, 0xdc, 0xcd, 0xbe, 0xba, 0x8e, 0x05, 0xbf, 0x55, 0x55, 0xb5, 0xbe,
  0xa5, 0x05, 0xf3, 0xbe, 0xfe, 0x12, 0x06, 0xbf, 0xb5, 0x63, 0x77, 0xbe,
  0xf8, 0xa9, 0x1e, 0xbf, 0x29, 0xc6, 0xb9, 0xbe, 0xd3, 0x5b, 0xc7, 0xbe,
  0x8f, 0xfb, 0x18, 0xbf, 0xcf, 0xb5, 0x98, 0xbe, 0x8a, 0xd8, 0x28, 0xbd,
  0x46, 0xa9, 0xa8, 0x3d, 0xf9, 0xef, 0xc2, 0xbe, 0xad, 0x21, 0x08, 0xbf,
  0x01, 0x72, 0x3b, 0xbe, 0x0e, 0x2c, 0x83, 0xbe, 0x86, 0xdd, 0xaf, 0xbd,
  0x7d, 0xbb, 0x49, 0xbe, 0xac, 0xa4, 0x3a, 0xbf, 0x76, 0x38, 0x62, 0xbe,
  0x2e, 0xce, 0xcd, 0xbe, 0x8e, 0xbb, 0xd3, 0xbe, 0x66, 0x58, 0x4f, 0xbf,
  0x76, 0x6c, 0x46, 0xbf, 0x32, 0x9b, 0x8b, 0xbe, 0x72, 0xd1, 0x39, 0xbf,
  0x6c, 0x43, 0x0e, 0xbf, 0x70, 0x5e, 0xa3, 0xbe, 0x6f, 0xbf, 0x8c, 0xbf,
  0xe3, 0x23, 0x8e, 0xbf, 0xda, 0x49, 0x34, 0xbf, 0xd7, 0xaa, 0x7b, 0xbe,
  0x5f, 0xcd, 0x00, 0xbf, 0x6b, 0xef, 0xcb, 0xbe, 0xa0, 0xcd, 0x1b, 0xbd,
  0x94, 0xd0, 0x7f, 0xbf, 0xa7, 0x28, 0xfc, 0xbe, 0x6d, 0x08, 0xb1, 0xbe,
  0x9b, 0x47, 0x09, 0xbf, 0xd4, 0x6f, 0xd0, 0xbe, 0xd8, 0xe9, 0xfc, 0xbe,
  0x07, 0x93, 0x04, 0xbf, 0xcd, 0xa9, 0xbb, 0x3e, 0x7c, 0x9c, 0xde, 0x3e,
  0x3b, 0x50, 0xaf, 0xbe, 0x91, 0x47, 0xc7, 0xbe, 0xc5, 0xeb, 0xf6, 0xbe,
  0xbc, 0x01, 0xaa, 0xbe, 0x50, 0xc4, 0x7a, 0xbf, 0x18, 0x9f, 0xad, 0xbd,
  0xc6, 0xe5, 0x09, 0xbe, 0x06, 0x5b, 0x69, 0xbf, 0x22, 0x31, 0xd6, 0xbe,
  0xda, 0xce, 0x00, 0xbf, 0x03, 0x82, 0x1a, 0xbf, 0xf8, 0x4b, 0xbb, 0xbe,
  0x7c, 0x6c, 0xe4, 0xbe, 0x31, 0x1c, 0xac, 0xbe, 0x76, 0x4f, 0xa6, 0xbe,
  0x8d, 0x42, 0x1d, 0xbf, 0xfc, 0x54, 0x10, 0xbf, 0x16, 0x7a, 0x85, 0xbe,
  0x40, 0x50, 0x7f, 0xbe, 0x4b, 0x27, 0x99, 0xbe, 0x86, 0x8f, 0xa1, 0xbe,
  0x94, 0x51, 0xfb, 0xbe, 0x9b, 0xb2, 0x19, 0xbf, 0x9d, 0x0e, 0xe8, 0xbe,
  0x73, 0x0f, 0x6d, 0xbf, 0x5d, 0x8d, 0x7a, 0xbf, 0x17, 0x53, 0xc8, 0x3f,
  0xab, 0x4c, 0xc2, 0x3f, 0xfe, 0x3e, 0x98, 0xbe, 0x13, 0x09, 0x00, 0xbf,
  0x7a, 0x91, 0xc8, 0xbe, 0x4c, 0x4c, 0x60, 0xbe, 0xbd, 0xe5, 0x5f, 0xbe,
  0xd6, 0xb6, 0x3a, 0xbf, 0x78, 0x6a, 0x53, 0xbf, 0x9a, 0x05, 0xf0, 0xbd,
  0x6e, 0x0a, 0x22, 0xbf, 0x19, 0x7c, 0x21, 0xbf, 0x51, 0x68, 0xc3, 0xbe,
  0x8f, 0x0f, 0x01, 0xbf, 0xcc, 0xa5, 0xfc, 0xbe, 0x2b, 0x82, 0xb6, 0xbe,
  0x25, 0x20, 0x22, 0xbe, 0x1d, 0xc9, 0x41, 0xbc, 0x14, 0x76, 0x83, 0xbe,
  0xbf, 0x2f, 0x2c, 0xbf, 0x57, 0x47, 0x06, 0xbf, 0xef, 0xb8, 0x8b, 0xbe,
  0xcc, 0x39, 0xb0, 0xc0, 0x65, 0xbf, 0xb0, 0xc0, 0x6e, 0x01, 0x81, 0xbe,
  0x4b, 0xce, 0x31, 0xbf, 0x2e, 0x65, 0x2d, 0xbf, 0x7f, 0xca, 0x7a, 0xbe,
  0x74, 0xe0, 0xbb, 0xbe, 0xcf, 0x0e, 0xe9, 0xbe, 0x70, 0xea, 0x67, 0xbd,
  0x02, 0x33, 0x69, 0xbf, 0xcd, 0x80, 0xa8, 0xbf, 0x93, 0xa8, 0x1f, 0x3e,
  0x9a, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x14, 0xfd, 0xff, 0xff, 0x8a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x67, 0x34, 0x29, 0xc0, 0xf6, 0xfd, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x39, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44,
  0x65, 0x6e, 0x73, 0x65, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
  0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62,
  0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x89, 0xed, 0x16, 0xbf,
  0xeb, 0x24, 0x1f, 0xbf, 0xda, 0x91, 0x38, 0xbf, 0xce, 0x43, 0x0d, 0xbf,
  0xa3, 0x5a, 0x6c, 0xbf, 0x8a, 0x25, 0x32, 0xbf, 0x3b, 0xcc, 0x20, 0xbf,
  0x91, 0x0a, 0x11, 0xbf, 0x3c, 0xcc, 0x21, 0xbf, 0x59, 0xc6, 0x33, 0xbf,
  0xda, 0x40, 0x19, 0xbf, 0x05, 0xe8, 0x36, 0xbf, 0x11, 0xe2, 0x2a, 0xbf,
  0x47, 0x4d, 0x2d, 0xbf, 0x3b, 0x36, 0x8a, 0x3f, 0x61, 0x32, 0x2e, 0xbf,
  0x81, 0x04, 0x08, 0xbf, 0x46, 0xec, 0x1c, 0xbf, 0x23, 0x8e, 0x29, 0xbf,
  0xd3, 0x7c, 0x5c, 0xbf, 0xb5, 0x1a, 0x06, 0xbf, 0x31, 0x22, 0x31, 0xbf,
  0xb2, 0x4c, 0x0c, 0xbf, 0x98, 0xfc, 0x2e, 0xbf, 0x25, 0xbe, 0xff, 0xbe,
  0x29, 0xa9, 0x0d, 0xbf, 0x3f, 0x07, 0x02, 0xbf, 0xb0, 0xb5, 0x38, 0xbf,
  0x2f, 0xb3, 0x28, 0xbf, 0xab, 0xcd, 0x30, 0xbf, 0xcd, 0xb7, 0xaa, 0xbf,
  0x16, 0x54, 0x20, 0xbf, 0xd8, 0x55, 0xe9, 0xbe, 0x52, 0xdb, 0x2e, 0xbf,
  0x09, 0x8d, 0x26, 0xbf, 0xaa, 0x23, 0x0d, 0xbf, 0x23, 0x26, 0x15, 0xbf,
  0x59, 0x51, 0x36, 0xbf, 0xa8, 0x1f, 0x0a, 0xbf, 0xcb, 0xec, 0x1e, 0xbf,
  0xd2, 0x89, 0x91, 0xbf, 0xf7, 0x1e, 0x12, 0xbf, 0xaa, 0xc7, 0x20, 0xbf,
  0xf9, 0x92, 0x2b, 0xbf, 0xe0, 0xd0, 0x25, 0xbf, 0xe1, 0x27, 0x0f, 0xbf,
  0xba, 0x6e, 0x11, 0xbf, 0xde, 0xa7, 0x06, 0xbf, 0xe2, 0xac, 0x23, 0xbf,
  0x67, 0xef, 0x37, 0xbf, 0xcb, 0xd9, 0x24, 0xbf, 0x76, 0x03, 0x2e, 0xbf,
  0x0a, 0xdb, 0x1e, 0xbf, 0x5b, 0x5c, 0x38, 0xbf, 0x65, 0x04, 0x27, 0xbf,
  0x65, 0x6b, 0x39, 0xbf, 0xa3, 0x4e, 0x40, 0xbf, 0x5c, 0xea, 0x17, 0xbf,
  0xa7, 0x71, 0x27, 0xbf, 0xfb, 0x4e, 0x54, 0xbf, 0x02, 0x7b, 0x0b, 0xbf,
  0x51, 0x3e, 0x22, 0xbf, 0x5a, 0xf7, 0x6d, 0xbf, 0x18, 0x9f, 0x16, 0xbf,
  0xb6, 0x82, 0x1d, 0xbf, 0x08, 0x9b, 0x0f, 0xbf, 0xef, 0x3a, 0x28, 0xbf,
  0x20, 0x3e, 0x22, 0xbf, 0x37, 0x07, 0x33, 0xbf, 0xfb, 0x30, 0x25, 0xbf,
  0xe3, 0xd1, 0x2f, 0xbf, 0x5d, 0xd3, 0x28, 0xbf, 0x51, 0x5c, 0xfe, 0xbe,
  0xc6, 0xdb, 0x06, 0xbf, 0xfe, 0x0d, 0x17, 0xbf, 0x6e, 0x09, 0x0e, 0xbf,
  0xb1, 0xdc, 0x2f, 0xbf, 0xed, 0xe8, 0x15, 0xbf, 0xe8, 0x8e, 0x2c, 0xbf,
  0xea, 0xfe, 0x36, 0xbf, 0x0c, 0xb3, 0x29, 0xbf, 0x74, 0xd1, 0x1b, 0xbf,
  0x9f, 0x46, 0x6b, 0xbf, 0x0c, 0x00, 0x0c, 0xc0, 0x09, 0x4d, 0x2d, 0xbf,
  0xec, 0xd8, 0x3b, 0xbf, 0xa7, 0xfb, 0x1e, 0xbf, 0xc5, 0x0e, 0x1e, 0xbf,
  0xfc, 0x54, 0x49, 0xbf, 0x42, 0xd0, 0x1d, 0xbf, 0xf4, 0xc9, 0x24, 0xbf,
  0x40, 0x99, 0x3b, 0xbf, 0x44, 0x50, 0x1b, 0xbf, 0xb9, 0x46, 0x2f, 0xbf,
  0x3b, 0x61, 0x00, 0x40, 0x32, 0x70, 0x17, 0xbf, 0x37, 0x0a, 0x1c, 0xbf,
  0xe2, 0x10, 0x29, 0xbf, 0x10, 0x13, 0x21, 0xbf, 0xd6, 0x10, 0xe0, 0xbe,
  0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65,
  0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70,
  0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00,
  0x9c, 0xff, 0xff, 0xff, 0x14, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65,
  0x6e, 0x73, 0x65, 0x31, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00,
  0xfc, 0xff, 0xff, 0xff, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00
};
unsigned int model_tflite_len = 3048;

//////////////////////////////////// end cut and paste to model.h tab ///////////////////////////////////////////////////////////////


#include "Arduino.h"
#include <TensorFlowLite.h>


/*================= Start Advanced Area ===============================*/

#include "tensorflow/lite/micro/all_ops_resolver.h"
//#include "tensorflow/lite/micro/kernels/micro_ops.h"
//#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"

#include "tensorflow/lite/micro/micro_error_reporter.h"  // may have issues on M4 core
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"
#include "tensorflow/lite/c/common.h"
//#include "tensorflow/lite/c/c_api.h" // has interesting funcitons, not in main library


// Start Debug.cc information    ----------------------------------------------------------

 #if  defined (CORE_CM7)  ||  defined (YOUR_BOARD1) // CORE_CM7 is for the PortentaH7 outer core
 
    // do abosolutely nothing the default works
    
 #elif defined (CORE_CM4)  || defined (NANO_33_BLE) ||  defined (YOUR_BOARD2)  // CORE_CM4 is for the PortentaH7 inner core
 
     #define DEBUG_SERIAL_OBJECT (Serial) 

     extern "C" void DebugLog(const char* s) {
        static bool is_initialized = false;
        if (!is_initialized) {
           DEBUG_SERIAL_OBJECT.begin(9600);
           is_initialized = true;
        }
        DEBUG_SERIAL_OBJECT.print(s);
     }

 #elif defined (__SAM3X8E__)  ||  defined (YOUR_BOARD3) // Arduino UNO style boards

     #define DEBUG_SERIAL_OBJECT (SerialUSB) 

     extern "C" void DebugLog(const char* s) {
        static bool is_initialized = false;
        if (!is_initialized) {
           DEBUG_SERIAL_OBJECT.begin(9600);
           is_initialized = true;
        }
        DEBUG_SERIAL_OBJECT.print(s);
     }
 #elif defined (SEEED_XIAO_M0)  ||  defined (YOUR_BOARD4) // The new $5 USD Seeeduino XIAO board

     #define CFG_TUSB_DEBUG
     
 #else
   // don't do any debugging until you figure out your board  
   
   extern "C" void DebugLog(const char* s) {
     // Do not log debug info
   } 
 #endif


/*
 * nano_33_iot.build.board=SAMD_NANO_33_IOT  // have not got it working yet
 * 
*/

// End Debug.cc information    ----------------------------------------------------------


namespace { // Start namespace----------------------------------------------------------

   // define needed variables
   tflite::ErrorReporter* error_reporter = nullptr;
   const tflite::Model* model = nullptr;
   tflite::MicroInterpreter* interpreter = nullptr;
   TfLiteTensor* input = nullptr;
   TfLiteTensor* output = nullptr;
   // Create an area of memory to use for input, output, and intermediate arrays.
   constexpr int kTensorArenaSize = 2 * 1024;  // I like 20 * 1024;
   uint8_t tensor_arena[kTensorArenaSize];

}  // END namespace----------------------------------------------------------



/*================= End Advanced Area ===============================*/


/*================= Start Smart Area ================================*/

void modelSetup(const unsigned char theModel[]){

  // NOLINTNEXTLINE(runtime-global-variables)
  
   static tflite::MicroErrorReporter micro_error_reporter;
  
   error_reporter = &micro_error_reporter;  

   // Map the model into a usable data structure. This doesn't involve any
   // copying or parsing, it's a very lightweight operation.


   model = tflite::GetModel(theModel);  // name from the tflite converter model.h file

  
  if (model->version() != TFLITE_SCHEMA_VERSION) {
    TF_LITE_REPORT_ERROR(error_reporter,
                         "Model provided is schema version %d not equal "
                         "to supported version %d.",
                         model->version(), TFLITE_SCHEMA_VERSION);
    return;
  }

  // This pulls in all the operation implementations we need.
  // NOLINTNEXTLINE(runtime-global-variables)

  
  static tflite::AllOpsResolver resolver;


  /* // replace the above line if you know each operation to save space
  
  static tflite::MicroMutableOpResolver<5> micro_op_resolver;  // NOLINT
  micro_op_resolver.AddBuiltin(tflite::BuiltinOperator_DEPTHWISE_CONV_2D,tflite::ops::micro::Register_DEPTHWISE_CONV_2D() );
  micro_op_resolver.AddBuiltin(tflite::BuiltinOperator_MAX_POOL_2D,tflite::ops::micro::Register_MAX_POOL_2D() );
  micro_op_resolver.AddBuiltin(tflite::BuiltinOperator_CONV_2D,tflite::ops::micro::Register_CONV_2D() );
  micro_op_resolver.AddBuiltin(tflite::BuiltinOperator_FULLY_CONNECTED,tflite::ops::micro::Register_FULLY_CONNECTED() );
  micro_op_resolver.AddBuiltin(tflite::BuiltinOperator_SOFTMAX,tflite::ops::micro::Register_SOFTMAX() );

   * 
   */
   

  // Build an interpreter to run the model with.
  static tflite::MicroInterpreter static_interpreter(model, resolver, tensor_arena, kTensorArenaSize, error_reporter);
  
  interpreter = &static_interpreter;

  // Allocate memory from the tensor_arena for the model's tensors.
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  
  if (allocate_status != kTfLiteOk) {
    TF_LITE_REPORT_ERROR(error_reporter, "AllocateTensors() failed");
    return;
  }

  // Obtain pointers to the model's input and output tensors.
  input = interpreter->input(0);
  output = interpreter->output(0);
 
}


float modelPredict(int32 myInput[]){   // like tensorflowJS  const myPredictArray = await model.predict(xTrainingData).data()  
// may have to change the types
  
 // input->data.f[0] = myInput;  // may have to edit this
  input->data.f[0] = myInput[0];  
  input->data.f[1] = myInput[1];

  // Run inference, and report any error
  TfLiteStatus invoke_status = interpreter->Invoke();
  
  // if (invoke_status != kTfLiteOk) {
  //    Serial.print("Error with input: " + String(myInput));
  // }

  return output->data.f[0];   // may have to edit this
}


/*================= End Smart Area ======================================*/


/*================= Start Maker Area ======================================*/



#define NUMBER_OF_INPUTS 2
#define NUMBER_OF_OUTPUTS 1
int myLed = LED_BUILTIN;   // or 7 or 5 or LEDB etc



// helper function to convert tensor type integer to a string
String myTypeIntToString(int myType){
  
  String myTensorType = "Not Set";    
   if (myType == 0){myTensorType  = "kTfLiteNoType"; }  
   if (myType == 1){myTensorType  = "kTfLiteFloat32"; }  
   if (myType == 2){myTensorType  = "kTfLiteInt32"; }   
   if (myType == 3){myTensorType  = "kTfLiteUInt8"; }   
   if (myType == 4){myTensorType  = "kTfLiteInt64"; }   
   if (myType == 5){myTensorType  = "kTfLiteString"; }  
   if (myType == 6){myTensorType  = "kTfLiteBool"; }    
   if (myType == 7){myTensorType  = "kTfLiteInt16"; }    
   if (myType == 8){myTensorType  = "kTfLiteComplex64"; }    
   if (myType == 9){myTensorType  = "kTfLiteInt8"; }    
   if (myType == 10){myTensorType = "kTfLiteFloat16"; }    
   if (myType == 11){myTensorType = "kTfLiteFloat64"; }   
   if (myType == 12){myTensorType = "kTfLiteComplex128"; }  
   return myTensorType;
  
}


void setup() {
   randomSeed(analogRead(A0));
   Serial.begin(9600);
   pinMode(myLed, OUTPUT);  
   modelSetup(model_tflite);
  
}


void loop() {



Serial.println("  constexpr int kTensorArenaSize: " + String(kTensorArenaSize) );
   Serial.println(" interpreter->arena_used_bytes(): " + String(interpreter->arena_used_bytes()) );
  
   Serial.println("       interpreter.inputs_size(): " + String(interpreter->inputs_size()) );
   Serial.println("       interpreter.outputs_size(): " + String(interpreter->outputs_size()) );
   Serial.println("       interpreter.tensors_size(): " + String(interpreter->tensors_size()) );
   
   Serial.println();
   Serial.println("                     input->type: " + String(input->type) + " = " + myTypeIntToString(input->type));
   Serial.println("               input->dims->size: " + String(input->dims->size) );
   int mySize = input->dims->size;
  
   for (int i = 0; i < mySize; i++) {
     int myIn = input->dims->data[i]; 
     Serial.println( "            input->dims->data[" + String(i) + "]: " + String(myIn) );
       
   }

   Serial.println(  );
   Serial.println("-----------------------------------------------------------" );

   int myTotalBytes = 0;
   for (size_t tensor_index = 0; tensor_index < interpreter->tensors_size(); tensor_index++) {
    TfLiteTensor* tensor = interpreter->tensor(static_cast<int>(tensor_index));
    Serial.print("Layer index: " + String(tensor_index) );
    Serial.print(",  Type: " + String(tensor->type)+ ": "+ myTypeIntToString(tensor->type) );
    Serial.print(",  # Nodes: " + String(tensor->dims->size) );
    Serial.println(",  Size in Bytes: " + String(tensor->bytes) );
    myTotalBytes += tensor->bytes; 
    Serial.print("-----tensor->dims->data[k]" );
    
    for (int k = 0; k < tensor->dims->size; k++) {
       Serial.print(",    data[" + String(k) + "]:" + String(tensor->dims->data[k]));
    }
    Serial.println( );    
    Serial.println( );
 }

   Serial.println("-----------------------------------------------------------" );

   Serial.println("                     output->type: " + String(output->type) + " = " + myTypeIntToString(output->type));
   Serial.println("               output->dims->size: " + String(output->dims->size) );
   
   int mySize2 = output->dims->size;
   for (int i = 0; i < mySize2; i++) {
     int myOut = output->dims->data[i];      
     Serial.println( "            output->dims->data[" + String(i) + "]: " + String(myOut) );
   }

   Serial.println("              Total Added Bytes: " + String(myTotalBytes) );
   Serial.println("-----------------------------------------------------------" );
   Serial.println("-----------------------------------------------------------" );  
   Serial.println();
  

  delay(3000);
  

}


