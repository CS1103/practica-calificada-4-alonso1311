#include "Rotated.h"

/*void rotate_img(vector<unsigned char>& image, size_t bgin, size_t size, size_t w, char color){
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
}*/

void rotated(vector<unsigned char> image, size_t w, size_t h, double grados) {
    vector<unsigned char> temp_image;

    double radians = (grados * M_PI) / 180;
    int sinf = (int) sin(radians);
    int cosf = (int) cos(radians);

    double x0 = 0.5 * (w - 1);     // point to rotate about
    double y0 = 0.5 * (h - 1); // center of image
    cout << x0 << " " << y0 << endl;

    // rotation
    for (int x = 0; x < w; x++) {
        for (int y = 0; y < h; y++) {
            long double a = x - x0;
            long double b = y - y0;
            int xx = (int) (+a * cosf - b * sinf + x0);
            int yy = (int) (+a * sinf + b * cosf + y0);

            if (xx >= 0 && xx < w && yy >= 0 && yy < h) {
                temp_image.push_back(image[(yy * h + xx) * 3 + 0]);
                temp_image.push_back(image[(yy * h + xx) * 3 + 1]);
                temp_image.push_back(image[(yy * h + xx) * 3 + 2]);
                temp_image.push_back(image[(yy * h + xx) * 3 + 3]);
            }
        }
    }



    image.clear();
    for(const auto& i : temp_image)
        image.push_back(i);

    encode("../out_rotated.png", image, w, h);

}
