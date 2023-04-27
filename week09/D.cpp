#include <iostream>

void swap(int a, int b) {
    int c = a;
    a = b;
    b = c;
}

int pr(double mass[], int l, int r)
{
    int p = mass[r];
    int a = l;
    for (int i = l; i < r; i++)
    {
        if (mass[i] <= p)
        {
            swap(mass[i], mass[a]);
            a++;
        }
    }
    swap(mass[a], mass[r]);
    return a;
}
void sort(double array[], int b, int e)
{
    if (b >= e)
    {
        return;
    }
    int a = pr(array, b, e);
    sort(array, b, a - 1);
    sort(array, a + 1, e);
}

int main()
{
    int s = 0, n = 0;
    std::cin >> s >> n;
    double* array = new double[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    sort(array, 0, n - 1);
    int t = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (t + array[i] <= s)
        {
            t = t + array[i];
            c++;
        }
    }
    std::cout << c << std::endl;
    delete[] array;
    return 0;
}
