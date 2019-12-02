#include "Filter.h"

void set_img(vector<unsigned char>& image, size_t bgin, size_t size, size_t w, char color){
    int temp_color_1 = 5, temp_color_2 = 5;

    if(color == 'R'){
        temp_color_1 = 1;
        temp_color_2 = 2;
    }

    else if(color == 'G'){
        temp_color_1 = 0;
        temp_color_2 = 2;
    }

    else if(color == 'B'){
        temp_color_1 = 0;
        temp_color_2 = 1;
    }

    for (; bgin < size; bgin++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            image[bgin * w * 4 + j + temp_color_1] = 0;
            image[bgin * w * 4 + j + temp_color_2] = 0;
        }
    }
}

void filter(vector< unsigned char>& image, size_t w, size_t h, char color){
    size_t first_size = h/4;
    size_t second_size = h/2;
    size_t third_size = h*3/4;

    thread t1(set_img, ref(image), 0, first_size, w, color);
    thread t2(set_img, ref(image), first_size, second_size, w, color);
    thread t3(set_img, ref(image), second_size, third_size,w, color);
    thread t4(set_img, ref(image), third_size, h, w, color);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
}

