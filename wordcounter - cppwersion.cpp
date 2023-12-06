#include <iostream>
#include <string>
using namespace std;

void word_counter(string txt)
{
    int count_a = 0, count_b = 0, count_c = 0, count_d = 0;
    int count_e = 0, count_f = 0, count_g = 0, count_h = 0;
    int count_i = 0, count_j = 0, count_k = 0, count_l = 0;
    int count_m = 0, count_n = 0, count_o = 0, count_p = 0;
    int count_q = 0, count_r = 0, count_s = 0, count_t = 0;
    int count_u = 0, count_v = 0, count_w = 0, count_x = 0;
    int count_y = 0, count_z = 0;
    
    for (char i : txt)
    {
        if (i == 'A' || i == 'a')
        {
            count_a++;
            if (count_a != 0)
            {  continue;  }
        }
        else if (i == 'B' || i == 'b')
        {
            count_b++;
            if (count_b != 0)
            {  continue;  }
        }
        else if (i == 'C' || i == 'c')
        {
            count_c++;
            if (count_c != 0)
            {  continue;  }
        }
        else if (i == 'D' || i == 'd')
        {
            count_d++;
            if (count_d != 0)
            {  continue;  }
        }
        else if (i == 'E' || i == 'e')
        {
            count_e++;
            if (count_e != 0)
            {  continue;  }
        }
        else if (i == 'F' || i == 'f')
        {
            count_f++;
            if (count_f != 0)
            {  continue;  }
        }
        else if (i == 'G' || i == 'g')
        {
            count_g++;
            if (count_g != 0)
            {  continue;  }
        }
        else if (i == 'H' || i == 'h')
        {
            count_h++;
            if (count_h != 0)
            {  continue;  }
        }
        else if (i == 'I' || i == 'i')
        {
            count_i++;
            if (count_i != 0)
            {  continue;  }
        }
        else if (i == 'J' || i == 'j')
        {
            count_j++;
            if (count_j != 0)
            {  continue;  }
        }
        else if (i == 'K' || i == 'k')
        {
            count_k++;
            if (count_k != 0)
            {  continue;  }
        }
        else if (i == 'L' || i == 'l')
        {
            count_l++;
            if (count_l != 0)
            {  continue;  }
        }
        else if (i == 'M' || i == 'm')
        {
            count_m++;
            if (count_m != 0)
            {  continue;  }
        }
        else if (i == 'N' || i == 'n')
        {
            count_n++;
            if (count_n != 0)
            {  continue;  }
        }
        else if (i == 'O' || i == 'o')
        {
            count_o++;
            if (count_o != 0)
            {  continue;  }
        }
        else if (i == 'P' || i == 'p')
        {
            count_p++;
            if (count_p != 0)
            {  continue;  }
        }
        else if (i == 'Q' || i == 'q')
        {
            count_q++;
            if (count_q != 0)
            {  continue;  }
        }
        else if (i == 'R' || i == 'r')
        {
            count_r++;
            if (count_r != 0)
            {  continue;  }
        }
        else if (i == 'S' || i == 's')
        {
            count_s++;
            if (count_s != 0)
            {  continue;  }
        }
        else if (i == 'T' || i == 't')
        {
            count_t++;
            if (count_t != 0)
            {  continue;  }
        }
        else if (i == 'U' || i == 'u')
        {
            count_u++;
            if (count_u != 0)
            {  continue;  }
        }
        else if (i == 'V' || i == 'v')
        {
            count_v++;
            if (count_v != 0)
            {  continue;  }
        }
        else if (i == 'W' || i == 'w')
        {
            count_w++;
            if (count_w != 0)
            {  continue;  }
        }
        else if (i == 'X' || i == 'x')
        {
            count_x++;
            if (count_x != 0)
            {  continue;  }
        }
        else if (i == 'Y' || i == 'y')
        {
            count_y++;
            if (count_y != 0)
            {  continue;  }
        }
        else if (i == 'Z' || i == 'z')
        {
            count_z++;
            if (count_z != 0)
            {  continue;  }
        }
    }

    if (count_a != 0) {  cout << "number of a: " << count_a << endl;  }
    if (count_b != 0) {  cout << "number of b: " << count_b << endl;  }
    if (count_c != 0) {  cout << "number of c: " << count_c << endl;  }
    if (count_d != 0) {  cout << "number of d: " << count_d << endl;  }
    if (count_e != 0) {  cout << "number of e: " << count_e << endl;  }
    if (count_f != 0) {  cout << "number of f: " << count_f << endl;  }
    if (count_g != 0) {  cout << "number of g: " << count_g << endl;  }
    if (count_h != 0) {  cout << "number of h: " << count_h << endl;  }
    if (count_i != 0) {  cout << "number of i: " << count_i << endl;  }
    if (count_j != 0) {  cout << "number of j: " << count_j << endl;  }
    if (count_k != 0) {  cout << "number of k: " << count_k << endl;  }
    if (count_l != 0) {  cout << "number of l: " << count_l << endl;  }
    if (count_m != 0) {  cout << "number of m: " << count_m << endl;  }
    if (count_n != 0) {  cout << "number of n: " << count_n << endl;  }
    if (count_o != 0) {  cout << "number of o: " << count_o << endl;  }
    if (count_p != 0) {  cout << "number of p: " << count_p << endl;  }
    if (count_q != 0) {  cout << "number of q: " << count_q << endl;  }
    if (count_r != 0) {  cout << "number of r: " << count_r << endl;  }
    if (count_s != 0) {  cout << "number of s: " << count_s << endl;  }
    if (count_t != 0) {  cout << "number of t: " << count_t << endl;  }
    if (count_u != 0) {  cout << "number of u: " << count_u << endl;  }
    if (count_v != 0) {  cout << "number of v: " << count_v << endl;  }
    if (count_w != 0) {  cout << "number of w: " << count_w << endl;  }
    if (count_x != 0) {  cout << "number of x: " << count_x << endl;  }
    if (count_y != 0) {  cout << "number of y: " << count_y << endl;  }
    if (count_z != 0) {  cout << "number of z: " << count_z << endl;  }
    cout << "---------------------------------------" << endl;
}
int main()
{
    cout << "---------------------------------------" << endl;
    cout << "Please enter a text" << endl;
    string txt;
    getline(cin, txt);
    cout << "---------------------------------------" << endl;
    word_counter(txt);
    return 0;
}