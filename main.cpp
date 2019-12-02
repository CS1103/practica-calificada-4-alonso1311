#include "Filter.h"
#include "Rotated.h"
#include "Teacher.h"

int main()
{
    unsigned int w;
    unsigned int h;

    //--> 'R': red_filter
    //--> 'G': green_filter
    //--> 'B': blue_filter

    auto image_red = decode("../in.png", w, h);
    filter(image_red, w, h, 'R');
    encode("../out_red.png", image_red, w, h);

    auto image_green = decode("../in.png", w, h);
    filter(image_green, w, h, 'G');
    encode("../out_green.png", image_green, w, h);

    auto image_blue = decode("../in.png", w, h);
    filter(image_blue, w, h, 'B');
    encode("../out_blue.png", image_blue, w, h);

    //--Rotate
    auto image_rotate = decode("../in.png", w, h);
    auto temp_image = rotated(image_rotate, w, h, 90);
    encode("../out_rotated.png", temp_image, w, h);

    return 0;
}
