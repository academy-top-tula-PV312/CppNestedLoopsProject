#include <iostream>

int main()
{
    /*
    int n = 7;
    int m = 4;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    for (int number = 1; number < 10; number++)
    {
        for (int i = 1; i < 10; i++)
            std::cout << number << " * "
            << i << " = "
            << number * i << "\n";
        std::cout << "--------------\n";
    }
    */
    
    //int size{ 11 };
    //
    //for (int i = 0; i < size; i++)
    //{
    //    for (int j = 0; j < size; j++)
    //        //if(i == j)
    //        if(i == j 
    //            || j == size - 1 - i 
    //            || i == size / 2 
    //            || j == size / 2)
    //            std::cout << "* ";
    //        else
    //            std::cout << "  ";
    //    std::cout << "\n";
    //}

    int width{ 10 };
    int height{ 6 };

    for (int i = 0; i < width; i++)
        std::cout << "*";
    std::cout << "\n";

    for (int i = 0; i < height - 2; i++)
    {
        std::cout << "*";
        for (int j = 0; j < width - 2; j++)
            std::cout << " ";
        std::cout << "*\n";
    }

    for (int i = 0; i < width; i++)
        std::cout << "*";
    std::cout << "\n";

    std::cout << "\n\n";

    


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                std::cout << "*";
            else
                std::cout << " ";
        std::cout << "\n";
    }


}
