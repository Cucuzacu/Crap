//good luck understanding this thing
#include <string.h>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

char a[10000];
char b[10000];
char c[10000];
static int var[10000] = { 0 };
bool abc = false;

int get_number_of_digits(int n)
{
    int nr;
    for (nr = 0; n; n /= 10, nr++);
    return nr;
}

void clear()
{
    int i;
    for (i = 0; i < 10000; i++) a[i] = 0;
    for (i = 0; i < 10000; i++) b[i] = 0;
    for (i = 0; i < 10000; i++) c[i] = 0;
    abc = false;
}

int extension(char b[10000])
{
    std::ifstream fi_e(b);
    char o, p, q, o1, o2, o3, o4, o5;
    int n, i, j, k, r, m, z, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
    while (true)
    {
        ext:
        fi_e >> c;
        if (strcmp(c, "initialyze") == 0)
        {
            fi_e >> j;
            if (j <= 10000 && j > 0) var[j - 1] = 0;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "add") == 0)
        {
            fi_e >> j;
            if (j <= 10000 && j > 0) var[j - 1]++;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "decrease") == 0)
        {
            fi_e >> j;
            if (j <= 10000 && j > 0) var[j - 1]--;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "if") == 0)
        {
            fi_e >> x1 >> o1 >> y1 >> x2 >> o2 >> y2 >> x3 >> o3 >> y3 >> x4 >> o4 >> y4 >> x5 >> o5 >> y5;
            while (true)
            {
                fi_e >> b;
                if (((var[x1 - 1] < var[y1 - 1] && o1 == '<') || (var[x1 - 1] > var[y1 - 1] && o1 == '>') || (var[x1 - 1] == var[y1 - 1] && o1 == '=') || (var[x1 - 1] != var[y1 - 1] && o1 == '!') && (var[x2 - 1] < var[y2 - 1] && o2 == '<') || (var[x2 - 1] > var[y2 - 1] && o2 == '>') || (var[x2 - 1] == var[y2 - 1] && o2 == '=') || (var[x2 - 1] != var[y2 - 1] && o2 == '!') && (var[x3 - 1] < var[y3 - 1] && o3 == '<') || (var[x3 - 1] > var[y3 - 1] && o3 == '>') || (var[x3 - 1] == var[y3 - 1] && o3 == '=') || (var[x3 - 1] != var[y3 - 1] && o3 == '!') && (var[x4 - 1] < var[y4 - 1] && o4 == '<') || (var[x4 - 1] > var[y4 - 1] && o4 == '>') || (var[x4 - 1] == var[y4 - 1] && o4 == '=') || (var[x4 - 1] != var[y4 - 1] && o4 == '!') && (var[x5 - 1] < var[y5 - 1] && o5 == '<') || (var[x5 - 1] > var[y5 - 1] && o5 == '>') || (var[x5 - 1] == var[y5 - 1] && o5 == '=') || (var[x5 - 1] != var[y5 - 1] && o5 == '!'))) abc = true;
                if (abc)
                {
                    if (strcmp(b, "initialyze") == 0)
                    {
                        fi_e >> j;
                        if (j <= 10000 && j > 0) var[j - 1] = 0;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    if (strcmp(b, "add") == 0)
                    {
                        fi_e >> j;
                        if (j <= 10000 && j > 0) var[j - 1]++;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "decrease") == 0)
                    {
                        fi_e >> j;
                        if (j <= 10000 && j > 0) var[j - 1]--;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "printnumber") == 0)
                    {
                        fi_e >> j;
                        std::cout << j;
                    }
                    else if (strcmp(b, "printstring") == 0)
                    {
                        fi_e >> a;
                        std::cout << a;
                    }
                    else if (strcmp(b, "printvar") == 0)
                    {
                        fi_e >> j;
                        if (j <= 10000 && j > 0) std::cout << var[j - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "wait") == 0)
                    {
                        fi_e >> r;
                        std::this_thread::sleep_for(std::chrono::milliseconds(r));
                    }
                    else if (strcmp(b, "waitvar") == 0)
                    {
                        fi_e >> r;
                        if (r <= 10000 && r > 0) std::this_thread::sleep_for(std::chrono::milliseconds(var[r - 1]));
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "printrand") == 0)
                    {
                        fi_e >> r;
                        srand(static_cast<unsigned int>(time(0)));
                        std::cout << rand() % m;
                    }
                    else if (strcmp(b, "randvar") == 0)
                    {
                        fi_e >> r >> m;
                        if (r <= 10000 && r > 0)
                        {
                            srand(static_cast<unsigned int>(time(0)));
                            var[r - 1] = rand() % m;
                        }
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "print_ascii") == 0)
                    {
                        fi_e >> r;
                        std::cout << char(r);
                    }
                    else if (strcmp(b, "print_ascii_var") == 0)
                    {
                        fi_e >> r;
                        std::cout << char(var[r - 1]);
                    }
                    else if (strcmp(b, "print_ascii-code") == 0)
                    {
                        fi_e >> o;
                        std::cout << int(o);
                    }
                    else if (strcmp(b, "stop") == 0)
                    {
                        std::cout << '\n' << "Program Ended Succesfully!";
                        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                        return 0;
                    }
                    else if (strcmp(b, "input") == 0)
                    {
                        fi_e >> j;
                        std::cin >> var[j - 1];
                    }
                    else if (strcmp(b, "value") == 0)
                    {
                        fi_e >> j;
                        if (j <= 10000 && j > 0) fi_e >> var[j - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valueadd") == 0)
                    {
                        fi_e >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] + var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuedecrease") == 0)
                    {
                        fi_e >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] - var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuemultiply") == 0)
                    {
                        fi_e >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] * var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuedivide") == 0)
                    {
                        fi_e >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] / var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuemodulo") == 0)
                    {
                        fi_e >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] % var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "reset") == 0)
                    {
                        fi_e.clear();
                        fi_e.seekg(0, std::ios::beg);
                        clear();
                        goto ext;
                    }
                    else if (strcmp(c, "extension") == 0)
                    {
                        fi_e >> b;
                        extension(b);
                    }
                    else if (strcmp(b, "") == 0);
                    else if (strcmp(b, "beep") == 0) std::cout << '\a';
                    else if (strcmp(b, "printspace") == 0) std::cout << ' ';
                    else if (strcmp(b, "nextline") == 0) std::cout << '\n';
                    else if (strcmp(b, "clear") == 0) system("cls");
                    else if (strcmp(b, "end") == 0) break;
                    else if (((var[x1 - 1] < var[y1 - 1] && o1 == '<') || (var[x1 - 1] > var[y1 - 1] && o1 == '>') || (var[x1 - 1] == var[y1 - 1] && o1 == '=') || (var[x1 - 1] != var[y1 - 1] && o1 == '!') && (var[x2 - 1] < var[y2 - 1] && o2 == '<') || (var[x2 - 1] > var[y2 - 1] && o2 == '>') || (var[x2 - 1] == var[y2 - 1] && o2 == '=') || (var[x2 - 1] != var[y2 - 1] && o2 == '!') && (var[x3 - 1] < var[y3 - 1] && o3 == '<') || (var[x3 - 1] > var[y3 - 1] && o3 == '>') || (var[x3 - 1] == var[y3 - 1] && o3 == '=') || (var[x3 - 1] != var[y3 - 1] && o3 == '!') && (var[x4 - 1] < var[y4 - 1] && o4 == '<') || (var[x4 - 1] > var[y4 - 1] && o4 == '>') || (var[x4 - 1] == var[y4 - 1] && o4 == '=') || (var[x4 - 1] != var[y4 - 1] && o4 == '!') && (var[x5 - 1] < var[y5 - 1] && o5 == '<') || (var[x5 - 1] > var[y5 - 1] && o5 == '>') || (var[x5 - 1] == var[y5 - 1] && o5 == '=') || (var[x5 - 1] != var[y5 - 1] && o5 == '!'))) std::cout << "Error: Unknown Command: " << b << '\n';
                }
            }
        }
        else if (strcmp(c, "for") == 0)
        {
            fi_e >> r >> a >> z;
            for (m = 0; m < var[r - 1]; m++)
            {
                if (strcmp(a, "add") == 0) var[z - 1]++;
                else if (strcmp(a, "decrease") == 0) var[z - 1]--;
                else
                {
                    std::cout << "Error: Unknown Operation";
                    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                    return 0;
                }
            }
        }
        else if (strcmp(c, "for_printstring") == 0)
        {
            fi_e >> r >> a >> b;
            if (strcmp(a, "print") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b;
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "for_printnumber") == 0)
        {
            fi_e >> r >> a >> m;
            if (strcmp(a, "print") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << m;
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << m << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << m << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "for_printvar") == 0)
        {
            fi_e >> r >> a >> b;
            if (strcmp(a, "print") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << var[m - 1];
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << var[m - 1] << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << var[m - 1] << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "printnumber") == 0)
        {
            fi_e >> j;
            std::cout << j;
        }
        else if (strcmp(c, "printstring") == 0)
        {
            fi_e >> a;
            std::cout << a;
        }
        else if (strcmp(c, "printvar") == 0)
        {
            fi_e >> j;
            if (j <= 10000 && j > 0) std::cout << var[j - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "input") == 0)
        {
            fi_e >> j;
            std::cin >> var[j - 1];
        }
        else if (strcmp(c, "value") == 0)
        {
            fi_e >> j;
            if (j <= 10000 && j > 0) fi_e >> var[j - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valueadd") == 0)
        {
            fi_e >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] + var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuedecrease") == 0)
        {
            fi_e >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] - var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuemultiply") == 0)
        {
            fi_e >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] * var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuedivide") == 0)
        {
            fi_e >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] / var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuemodulo") == 0)
        {
            fi_e >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] % var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "wait") == 0)
        {
            fi_e >> r;
            std::this_thread::sleep_for(std::chrono::milliseconds(r));
        }
        else if (strcmp(c, "waitvar") == 0)
        {
            fi_e >> r;
            if (r <= 10000 && r > 0) std::this_thread::sleep_for(std::chrono::milliseconds(var[r - 1]));
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "stop") == 0)
        {
            std::cout << '\n' << "Program Ended Succesfully!";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            return 0;
        }
        else if (strcmp(c, "printrand") == 0)
        {
            fi_e >> r;
            std::cout << rand() % r;
        }
        else if (strcmp(c, "randvar") == 0)
        {
            fi_e >> r >> m;
            if (r <= 10000 && r > 0) var[r - 1] = rand() % m;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "print_ascii") == 0)
        {
            fi_e >> r;
            std::cout << char(r);
        }
        else if (strcmp(c, "print_ascii_var") == 0)
        {
            fi_e >> r;
            if (r <= 10000 && r > 0) std::cout << char(var[r - 1]);
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "print_ascii-code") == 0)
        {
            fi_e >> o;
            std::cout << int(o);
        }
        else if (strcmp(c, "number_of_digits") == 0)
        {
            fi_e >> r >> m;
            if (r <= 10000 && r > 0) var[r - 1] = get_number_of_digits(m);
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "number_of_digits_var") == 0)
        {
            fi_e >> r >> m;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0) var[r - 1] = get_number_of_digits(var[m - 1]);
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "reset") == 0)
        {
            fi_e.clear();
            fi_e.seekg(0, std::ios::beg);
            clear();
            goto ext;
        }
        else if (strcmp(c, "beep") == 0) std::cout << '\a';
        else if (strcmp(c, "extension") == 0)
        {
            fi_e >> b;
            extension(b);
        }
        else if (strcmp(c, "printspace") == 0) std::cout << ' ';
        else if (strcmp(c, "nextline") == 0) std::cout << '\n';
        else if (strcmp(c, "clear") == 0) system("cls");
        else if (strcmp(c, "") == 0) break;
        else std::cout << "Error: Unknown Command: " << c << '\n';
        clear();
    }
    return 0;
}

int main()
{
    std::ifstream fi("code.crap");
    char o, p, q, o1, o2, o3, o4, o5;
    int n, i, j, k, r, m, z, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
    while(true)
    {
        main:
        fi >> c;
        if (strcmp(c, "initialyze") == 0)
        {
            fi >> j;
            if (j <= 10000 && j > 0) var[j - 1] = 0;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "if") == 0)
        {
            fi >> x1 >> o1 >> y1 >> x2 >> o2 >> y2 >> x3 >> o3 >> y3 >> x4 >> o4 >> y4 >> x5 >> o5 >> y5;
            while (true)
            {
                fi >> b;
                if (((var[x1 - 1] < var[y1 - 1] && o1 == '<') || (var[x1 - 1] > var[y1 - 1] && o1 == '>') || (var[x1 - 1] == var[y1 - 1] && o1 == '=') || (var[x1 - 1] != var[y1 - 1] && o1 == '!') && (var[x2 - 1] < var[y2 - 1] && o2 == '<') || (var[x2 - 1] > var[y2 - 1] && o2 == '>') || (var[x2 - 1] == var[y2 - 1] && o2 == '=') || (var[x2 - 1] != var[y2 - 1] && o2 == '!') && (var[x3 - 1] < var[y3 - 1] && o3 == '<') || (var[x3 - 1] > var[y3 - 1] && o3 == '>') || (var[x3 - 1] == var[y3 - 1] && o3 == '=') || (var[x3 - 1] != var[y3 - 1] && o3 == '!') && (var[x4 - 1] < var[y4 - 1] && o4 == '<') || (var[x4 - 1] > var[y4 - 1] && o4 == '>') || (var[x4 - 1] == var[y4 - 1] && o4 == '=') || (var[x4 - 1] != var[y4 - 1] && o4 == '!') && (var[x5 - 1] < var[y5 - 1] && o5 == '<') || (var[x5 - 1] > var[y5 - 1] && o5 == '>') || (var[x5 - 1] == var[y5 - 1] && o5 == '=') || (var[x5 - 1] != var[y5 - 1] && o5 == '!'))) abc = true;
                if (abc)
                {
                    if (strcmp(b, "initialyze") == 0)
                    {
                        fi >> j;
                        if (j <= 10000 && j > 0) var[j - 1] = 0;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    if (strcmp(b, "add") == 0)
                    {
                        fi >> j;
                        if (j <= 10000 && j > 0) var[j - 1]++;
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
                        if (j <= 10000 && j > 0) std::cout << var[j - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "wait") == 0)
                    {
                        fi >> r;
                        std::this_thread::sleep_for(std::chrono::milliseconds(r));
                    }
                    else if (strcmp(b, "waitvar") == 0)
                    {
                        fi >> r;
                        if (r <= 10000 && r > 0) std::this_thread::sleep_for(std::chrono::milliseconds(var[r - 1]));
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "printrand") == 0)
                    {
                        fi >> r;
                        srand(static_cast<unsigned int>(time(0)));
                        std::cout << rand() % m;
                    }
                    else if (strcmp(b, "randvar") == 0)
                    {
                        fi >> r >> m;
                        if (r <= 10000 && r > 0)
                        {
                            srand(static_cast<unsigned int>(time(0)));
                            var[r - 1] = rand() % m;
                        }
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "print_ascii") == 0)
                    {
                        fi >> r;
                        std::cout << char(r);
                    }
                    else if (strcmp(b, "print_ascii_var") == 0)
                    {
                        fi >> r;
                        std::cout << char(var[r - 1]);
                    }
                    else if (strcmp(b, "print_ascii-code") == 0)
                    {
                        fi >> o;
                        std::cout << int(o);
                    }
                    else if (strcmp(b, "stop") == 0)
                    {
                        std::cout << '\n' << "Program Ended Succesfully!";
                        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                        return 0;
                    }
                    else if (strcmp(b, "input") == 0)
                    {
                        fi >> j;
                        std::cin >> var[j - 1];
                    }
                    else if (strcmp(b, "value") == 0)
                    {
                        fi >> j;
                        if (j <= 10000 && j > 0) fi >> var[j - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valueadd") == 0)
                    {
                        fi >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] + var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuedecrease") == 0)
                    {
                        fi >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] - var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuemultiply") == 0)
                    {
                        fi >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] * var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuedivide") == 0)
                    {
                        fi >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] / var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "valuemodulo") == 0)
                    {
                        fi >> r >> m >> z;
                        if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] % var[z - 1];
                        else
                        {
                            std::cout << "Error: Value must be between 1 and 10000";
                            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                            return 0;
                        }
                    }
                    else if (strcmp(b, "reset") == 0)
                    {
                        fi.clear();
                        fi.seekg(0, std::ios::beg);
                        clear();
                        goto main;
                    }
                    else if (strcmp(c, "extension") == 0)
                    {
                        fi >> b;
                        extension(b);
                    }
                    else if (strcmp(b, "") == 0);
                    else if (strcmp(b, "beep") == 0) std::cout << '\a';
                    else if (strcmp(b, "printspace") == 0) std::cout << ' ';
                    else if (strcmp(b, "nextline") == 0) std::cout << '\n';
                    else if (strcmp(b, "clear") == 0) system("cls");
                    else if (strcmp(b, "end") == 0) break;
                    else if (((var[x1 - 1] < var[y1 - 1] && o1 == '<') || (var[x1 - 1] > var[y1 - 1] && o1 == '>') || (var[x1 - 1] == var[y1 - 1] && o1 == '=') || (var[x1 - 1] != var[y1 - 1] && o1 == '!') && (var[x2 - 1] < var[y2 - 1] && o2 == '<') || (var[x2 - 1] > var[y2 - 1] && o2 == '>') || (var[x2 - 1] == var[y2 - 1] && o2 == '=') || (var[x2 - 1] != var[y2 - 1] && o2 == '!') && (var[x3 - 1] < var[y3 - 1] && o3 == '<') || (var[x3 - 1] > var[y3 - 1] && o3 == '>') || (var[x3 - 1] == var[y3 - 1] && o3 == '=') || (var[x3 - 1] != var[y3 - 1] && o3 == '!') && (var[x4 - 1] < var[y4 - 1] && o4 == '<') || (var[x4 - 1] > var[y4 - 1] && o4 == '>') || (var[x4 - 1] == var[y4 - 1] && o4 == '=') || (var[x4 - 1] != var[y4 - 1] && o4 == '!') && (var[x5 - 1] < var[y5 - 1] && o5 == '<') || (var[x5 - 1] > var[y5 - 1] && o5 == '>') || (var[x5 - 1] == var[y5 - 1] && o5 == '=') || (var[x5 - 1] != var[y5 - 1] && o5 == '!'))) std::cout << "Error: Unknown Command: " << b << '\n';
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
                    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                    return 0;
                }
            }
        }
        else if (strcmp(c, "for_printstring") == 0)
        {
            fi >> r >> a >> b;
            if (strcmp(a, "print") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b;
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << b << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "for_printnumber") == 0)
        {
            fi >> r >> a >> m;
            if (strcmp(a, "print") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << m;
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << m << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << m << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "for_printvar") == 0)
        {
            fi >> r >> a >> b;
            if (strcmp(a, "print") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << var[m - 1];
            else if (strcmp(a, "print_space") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << var[m - 1] << ' ';
            else if (strcmp(a, "print_nextline") == 0) for (z = 0; z < var[r - 1]; z++) std::cout << var[m - 1] << '\n';
            else
            {
                std::cout << "Error: Unknown Operation";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
            if (j <= 10000 && j > 0) std::cout << var[j - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "input") == 0)
        {
            fi >> j;
            std::cin >> var[j - 1];
        }
        else if (strcmp(c, "value") == 0)
        {
            fi >> j;
            if (j <= 10000 && j > 0) fi >> var[j - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valueadd") == 0)
        {
            fi >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] + var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuedecrease") == 0)
        {
            fi >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] - var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuemultiply") == 0)
        {
            fi >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] * var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuedivide") == 0)
        {
            fi >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] / var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "valuemodulo") == 0)
        {
            fi >> r >> m >> z;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0 && z <= 10000 && z > 0) var[r - 1] = var[m - 1] % var[z - 1];
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "wait") == 0)
        {
            fi >> r;
            std::this_thread::sleep_for(std::chrono::milliseconds(r));
        }
        else if (strcmp(c, "waitvar") == 0)
        {
            fi >> r;
            if (r <= 10000 && r > 0) std::this_thread::sleep_for(std::chrono::milliseconds(var[r - 1]));
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "stop") == 0)
        {
            std::cout << '\n' << "Program Ended Succesfully!";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            return 0;
        }
        else if (strcmp(c, "printrand") == 0)
        {
            fi >> r;
            std::cout << rand() % r;
        }
        else if (strcmp(c, "randvar") == 0)
        {
            fi >> r >> m;
            if (r <= 10000 && r > 0) var[r - 1] = rand() % m;
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "print_ascii") == 0)
        {
            fi >> r;
            std::cout << char(r);
        }
        else if (strcmp(c, "print_ascii_var") == 0)
        {
            fi >> r;
            if (r <= 10000 && r > 0) std::cout << char(var[r - 1]);
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "print_ascii-code") == 0)
        {
            fi >> o;
            std::cout << int(o);
        }
        else if (strcmp(c, "number_of_digits") == 0)
        {
            fi >> r >> m;
            if (r <= 10000 && r > 0) var[r - 1] = get_number_of_digits(m);
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "number_of_digits_var") == 0)
        {
            fi >> r >> m;
            if (r <= 10000 && r > 0 && m <= 10000 && m > 0) var[r - 1] = get_number_of_digits(var[m - 1]);
            else
            {
                std::cout << "Error: Value must be between 1 and 10000";
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                return 0;
            }
        }
        else if (strcmp(c, "reset") == 0)
        {
            fi.clear();
            fi.seekg(0, std::ios::beg);
            clear();
            goto main;
        }
        else if (strcmp(c, "extension") == 0)
        {
            fi >> b;
            extension(b);
        }
        else if (strcmp(c, "beep") == 0) std::cout << '\a';
        else if (strcmp(c, "printspace") == 0) std::cout << ' ';
        else if (strcmp(c, "nextline") == 0) std::cout << '\n';
        else if (strcmp(c, "clear") == 0) system("cls");
        else if (strcmp(c, "") == 0) break;
        else std::cout << "Error: Unknown Command: " << c << '\n';
        clear();
    }
    std::cout << '\n' << "Program Ended Succesfully!";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
