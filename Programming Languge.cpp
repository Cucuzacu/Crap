#include <string.h>
#include <fstream>
#include <iostream>

char c[10000];
char a[10000];
char b[10000];

void clear()
{
    int i;
    for (i = 0; i < 12; i++) c[i] = 0;
    for (i = 0; i < 10000; i++) a[i] = 0;
}

int main()
{
    std::ifstream fi("code.crap");
    char o, p, q, o1, o2, o3, o4, o5;
    static int var[10000] = { 0 };
    int n, i, j, k, r, m, z, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
    while(true)
    {
        fi >> c;
        if (strcmp(c, "initialyze") == 0)
        {
            fi >> j;
            if (j <= 10000 && j > 0) var[j - 1] = 0;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                return 0;
            }
        }
        else if (strcmp(c, "add") == 0)
        {
            fi >> j;
            if (j <= 10000 && j > 0) var[j - 1]++;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                return 0;
            }
        }
        else if (strcmp(c, "decrease") == 0)
        {
            fi >> j;
            if (j <= 10000 && j > 0) var[j - 1]--;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                return 0;
            }
        }
        else if (strcmp(c, "if") == 0)
        {
            fi >> x1 >> o1 >> y1 >> x2 >> o2 >> y2 >> x3 >> o3 >> y3 >> x4 >> o4 >> y4 >> x5 >> o5 >> y5;
            if ((x1 < y1 && o1 == '<') || (x1 > y1 && o1 == '>') || (x1 == y1 && o1 == '=') || (x1 != y1 && o1 == '!') && (x2 < y2 && o2 == '<') || (x2 > y2 && o2 == '>') || (x2 == y2 && o2 == '=') || (x2 != y2 && o2 == '!') && (x3 < y3 && o3 == '<') || (x3 > y3 && o3 == '>') || (x3 == y3 && o3 == '=') || (x3 != y3 && o3 == '!') && (x4 < y4 && o4 == '<') || (x4 > y4 && o4 == '>') || (x4 == y4 && o4 == '=') || (x4 != y4 && o4 == '!') && (x5 < y5 && o5 == '<') || (x5 > y5 && o5 == '>') || (x5 == y5 && o5 == '=') || (x5 != y5 && o5 == '!'))
            {
                while (true)
                {
                    fi >> b;
                    if (strcmp(b, "add") == 0)
                    {
                        fi >> j;
                        if (j <= 10000 && j > 0) var[j - 1]++;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            return 0;
                        }
                    }
                    else if (strcmp(b, "decrease") == 0)
                    {
                        fi >> j;
                        if (j <= 10000 && j > 0) var[j - 1]--;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            return 0;
                        }
                    }
                    else if (strcmp(b, "printnumber") == 0)
                    {
                        fi >> j;
                        std::cout << j;
                    }
                    else if (strcmp(b, "printstring") == 0)
                    {
                        fi >> a;
                        std::cout << a;
                    }
                    else if (strcmp(b, "printvar") == 0)
                    {
                        fi >> j;
                        std::cout << var[j - 1];
                    }
                    else if (strcmp(b, "end") == 0) break;
                }
            }
        }
        else if (strcmp(c, "for") == 0)
        {
            fi >> r >> a >> z;
            for (m = 0; m < var[r - 1]; m++)
            {
                if (strcmp(a, "add") == 0) var[z - 1]++;
                else if (strcmp(a, "decrease") == 0) var[z - 1]--;
                else
                {
                    std::cout << "Error: Unknown Operation";
                    return 0;
                }
            }
        }
        else if (strcmp(c, "for_print") == 0)
        {
            fi >> r >> a >> b;
            if (strcmp(a, "print") == 0) for(z = 0; z < var[r - 1]; z++) std::cout << b;
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                return 0;
            }
        }
        else if (strcmp(c, "printnumber") == 0)
        {
            fi >> j;
            std::cout << j;
        }
        else if (strcmp(c, "printstring") == 0)
        {
            fi >> a;
            std::cout << a;
        }
        else if (strcmp(c, "printvar") == 0)
        {
            fi >> j;
            std::cout << var[j - 1];
        }
        else if (strcmp(c, "input") == 0)
        {
            fi >> j;
            std::cin >> var[j - 1];
        }
        else if (strcmp(c, "value") == 0)
        {
            fi >> j;
            fi >> var[j - 1];
        }
        else if (strcmp(c, "valueadd") == 0)
        {
            fi >> r >> m >> z;
            var[r - 1] = var[m - 1] + var[z - 1];
        }
        else if (strcmp(c, "valuedecrease") == 0)
        {
            fi >> r >> m >> z;
            var[r - 1] = var[m - 1] - var[z - 1];
        }
        else if (strcmp(c, "valuemultiply") == 0)
        {
            fi >> r >> m >> z;
            var[r - 1] = var[m - 1] * var[z - 1];
        }
        else if (strcmp(c, "valuedivide") == 0)
        {
            fi >> r >> m >> z;
            var[r - 1] = var[m - 1] / var[z - 1];
        }
        else if (strcmp(c, "printspace") == 0) std::cout << ' ';
        else if (strcmp(c, "nextline") == 0) std::cout << '\n';
        else if(strcmp(c, "clear") == 0) system("cls");
        else std::cout << "Error: Unknown Command: " << c << '\n';
        clear();
    }
}
