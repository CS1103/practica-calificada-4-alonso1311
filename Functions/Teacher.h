#ifndef PC4_TEACHER_H
#define PC4_TEACHER_H

#include "Header.h"
#include "lodepng.h"

vector<unsigned char> decode(string_view filename, unsigned int& width, unsigned int& height);

void encode(string_view filename, std::vector<unsigned char>& image, unsigned width, unsigned height);

#endif //PC4_TEACHER_H
