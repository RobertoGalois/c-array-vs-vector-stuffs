#include    <iostream>
#include    <vector>
#include    <cstdlib>

#define     ARR_SIZE    10

void    init_arr(int *arr, unsigned int size)
{
    for (unsigned int i = 0; i <  size; i++)
        arr[i] = i;
}

void    show_arr(int *arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

void    init_arr2(int** &arr, unsigned int size1, unsigned int size2)
{
    arr = (int**)malloc(sizeof (int*) * size1);
    for (unsigned int i = 0; i < size1; i++)
    {   
        arr[i] = (int*)malloc(sizeof(int) * size2);
        for (unsigned int j = 0; j < size2; j++)
            arr[i][j] = ((10 * i) + j); 
    }   
}

void    show_arr2(int** arr, unsigned int size1, unsigned int size2)
{
    for (unsigned int i = 0; i < size1; i++)
    {   
        for (unsigned int j = 0; j < size2; j++)
            std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << std::endl;
    }   
}

void    init_vector(std::vector<int> &vect)
{
    for (unsigned int count = 0, lim = vect.size(); count < lim; count++)
        vect[count] = count;
}

void    show_vector(const std::vector<int> &vect)
{
    for (unsigned int count = 0, lim = vect.size(); count < lim; count++)
        std::cout << "arr[" << count << "] = " << vect[count] << std::endl;
}

void    init_vector2(std::vector<std::vector<int> > &vect, unsigned int size2)
{
    for (unsigned int i = 0, lim = vect.size(); i < lim; i++)
    {   
        vect[i] = std::vector<int>(size2);
        for (unsigned int j = 0, lim2 = vect[i].size(); j < lim2; j++)
            vect[i][j] = ((10 * i) + j); 
    }   
}

void    show_vector2(const std::vector<std::vector<int> > &vect)
{
    for (unsigned int i = 0, lim = vect.size(); i < lim; i++)
    {   
        for (unsigned int j = 0, lim2 = vect[i].size(); j < lim2; j++)
            std::cout << "vect[" << i << "][" << j << "] = " << vect[i][j] << std::endl;
    }   
}

int     main(void)
{
    int                             arr1[ARR_SIZE];     /* arr[10]      */
    int                             **arr2;             /* arr[10][10]  */
    std::vector<int>                vect1(ARR_SIZE);    /* vect[10]     */
    std::vector<std::vector<int> >  vect2(ARR_SIZE);    /* vect[10][10] */

    /* arr1[10]  */
    init_arr(arr1, ARR_SIZE);
    show_arr(arr1, ARR_SIZE);

    /* arr2[10][10]  */
    init_arr2(arr2, ARR_SIZE, ARR_SIZE);
    show_arr2(arr2, ARR_SIZE, ARR_SIZE);

    /* vect1[10]  */
    init_vector(vect1);
    show_vector(vect1);

    /* vect2[10][10]  */
    init_vector2(vect2, ARR_SIZE);
    show_vector2(vect2);

    return (0);
}
