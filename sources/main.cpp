#include <iostream>

#include <AVL.h>

#include<../headers/main.h>

int main()
{
    avl::Image image = avl::Image();
    avl::TestImage(avl::TestImageId::Baboon, image);

    std::cout << "Baboon image size " <<  image.Size().Height() << " " << image.Size().Width() << std::endl;
    return 0;
}
