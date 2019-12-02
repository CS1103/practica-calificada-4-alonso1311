#include "Functions/Filter.h"
#include "Functions/Rotated.h"
#include "Functions/Teacher.h"

int main()
{
    unsigned int w;
    unsigned int h;

    //--> 'R': red_filter
    //--> 'G': green_filter
    //--> 'B': blue_filter

    auto image_red = decode("../in.png", w, h);
    filter(image_red, w, h, 'R');
    encode("../Results/out_red.png", image_red, w, h);

    auto image_green = decode("../in.png", w, h);
    filter(image_green, w, h, 'G');
    encode("../Results/out_green.png", image_green, w, h);

    auto image_blue = decode("../in.png", w, h);
    filter(image_blue, w, h, 'B');
    encode("../Results/out_blue.png", image_blue, w, h);

    //--Rotate
    auto image_rotate = decode("../in.png", w, h);
    auto temp_image = rotated(image_rotate, w, h, 90);
    encode("../Results/out_rotated.png", temp_image, w, h);

    return 0;
}
