#ifndef PC4_FILTER_H
#define PC4_FILTER_H

#include "Header.h"

void set_img(vector<unsigned char>& image, size_t bgin, size_t size, size_t w, char color);

void filter(vector< unsigned char>& image, size_t w, size_t h, char color);

#endif //PC4_FILTER_H
